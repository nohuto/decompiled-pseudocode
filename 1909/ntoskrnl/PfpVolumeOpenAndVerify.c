/*
 * XREFs of PfpVolumeOpenAndVerify @ 0x1406AB7BC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406AADFC (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfVolumeSupportedForPrefetch @ 0x1400FD2E0 (PfVolumeSupportedForPrefetch.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     NtCreateFile @ 0x140618C20 (NtCreateFile.c)
 *     PfpOpenHandleCreate @ 0x14062CAC4 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14062CC38 (PfpOpenHandleClose.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x1408ABA20 (NtGetDevicePowerState.c)
 */

__int64 __fastcall PfpVolumeOpenAndVerify(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  int DevicePowerState; // ebx
  HANDLE v9; // rdi
  PVOID PoolWithTag; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  _WORD v19[2]; // [rsp+78h] [rbp-88h] BYREF
  int v20; // [rsp+7Ch] [rbp-84h]
  void *Src; // [rsp+80h] [rbp-80h]
  __m256i v22; // [rsp+88h] [rbp-78h] BYREF
  __int64 FsInformation; // [rsp+A8h] [rbp-58h] BYREF
  __m256i v24; // [rsp+B0h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v27; // [rsp+110h] [rbp+10h] BYREF
  __int64 v28; // [rsp+118h] [rbp+18h]
  __int64 v29; // [rsp+120h] [rbp+20h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Src = *(void **)(a3 + 32);
  v6 = 0x200000000LL;
  v19[0] = 2 * *(_WORD *)(a3 + 24);
  v19[1] = v19[0] + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
  FsInformation = 0LL;
  v20 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v17 = 0LL;
  memset(&v22, 0, 24);
  v22.m256i_i64[3] = 0x200000000LL;
  memset(&v24, 0, 24);
  v24.m256i_i64[3] = 0x200000000LL;
  P = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  DevicePowerState = v7;
  if ( v7 < 0 )
  {
    v9 = FileHandle;
  }
  else
  {
    if ( v7 == 259 )
      KeBugCheckEx(0x191u, 0x1334uLL, 0LL, 0LL, 0LL);
    v9 = FileHandle;
    DevicePowerState = NtQueryVolumeInformationFile(
                         FileHandle,
                         &IoStatusBlock,
                         &FsInformation,
                         8u,
                         FileFsDeviceInformation);
    if ( (DevicePowerState & 0xC0000000) == 0xC0000000 )
      goto LABEL_36;
    if ( DevicePowerState == 259 )
      KeBugCheckEx(0x191u, 0x1344uLL, 0LL, 0LL, 0LL);
    if ( (unsigned int)PfVolumeSupportedForPrefetch(&FsInformation) )
    {
      DevicePowerState = -1073741637;
      goto LABEL_36;
    }
    if ( (*(_DWORD *)(a3 + 12) & 1) == 0 )
      goto LABEL_7;
    DevicePowerState = NtGetDevicePowerState(v9, (PDEVICE_POWER_STATE)&FileHandle);
    if ( DevicePowerState < 0 )
      goto LABEL_36;
    if ( (unsigned int)FileHandle > 1 )
    {
      DevicePowerState = -2147483633;
    }
    else
    {
LABEL_7:
      NtClose(v9);
      v9 = 0LL;
      DevicePowerState = PfpOpenHandleCreate((__int64)&v22, a1, (__int64)v19, 0LL, 1048960, 0x20u, 0, 0LL);
      if ( DevicePowerState < 0 )
        goto LABEL_16;
      if ( !*(_QWORD *)a3 && !*(_DWORD *)(a3 + 8) )
        goto LABEL_13;
      DevicePowerState = NtQueryVolumeInformationFile(
                           (HANDLE)v22.m256i_i64[0],
                           &IoStatusBlock,
                           &v27,
                           0x18u,
                           FileFsVolumeInformation);
      if ( (DevicePowerState & 0xC0000000) == 0xC0000000 )
        goto LABEL_16;
      if ( DevicePowerState == 259 )
        KeBugCheckEx(0x191u, 0x138DuLL, 0LL, 0LL, 0LL);
      if ( v27 == *(_QWORD *)a3 && (_DWORD)v28 == *(_DWORD *)(a3 + 8) )
      {
LABEL_13:
        LOWORD(v17) = v19[0] + 2;
        WORD1(v17) = v19[0] + 4;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v19[0] + 4), 0x44526650u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Src, v19[0]);
          *((_WORD *)P + ((unsigned __int64)v19[0] >> 1)) = 92;
          *((_WORD *)P + ((unsigned __int64)(unsigned __int16)v17 >> 1)) = 0;
          DevicePowerState = PfpOpenHandleCreate(
                               (__int64)&v24,
                               a1,
                               (__int64)&v17,
                               0LL,
                               1179785,
                               0x21u,
                               0x80u,
                               (__int64)&v22);
          if ( DevicePowerState < 0 )
          {
            v6 = v24.m256i_i64[3];
          }
          else
          {
            v11 = *(_OWORD *)v22.m256i_i8;
            v22.m256i_i64[0] = 0LL;
            DevicePowerState = 0;
            v12 = *(_OWORD *)&v22.m256i_u64[2];
            v22.m256i_i64[3] = 0x200000000LL;
            *a2 = v11;
            *(_OWORD *)&v22.m256i_u64[1] = 0LL;
            v13 = *(_OWORD *)v24.m256i_i8;
            v24.m256i_i64[0] = 0LL;
            a2[1] = v12;
            v14 = *(_OWORD *)&v24.m256i_u64[2];
            v24.m256i_i64[3] = 0x200000000LL;
            a2[2] = v13;
            *(_OWORD *)&v24.m256i_u64[1] = 0LL;
            a2[3] = v14;
          }
        }
        else
        {
          DevicePowerState = -1073741670;
        }
        goto LABEL_16;
      }
      DevicePowerState = -1073741735;
    }
  }
LABEL_36:
  if ( v9 )
    NtClose(v9);
LABEL_16:
  if ( (v6 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v24, a1);
  if ( (v22.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v22, a1);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)DevicePowerState;
}
