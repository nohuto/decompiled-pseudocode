/*
 * XREFs of PfpVolumeOpenAndVerify @ 0x14065D5D4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfVolumeSupportedForPrefetch @ 0x1400DD504 (PfVolumeSupportedForPrefetch.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtCreateFile @ 0x14060CA30 (NtCreateFile.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     PfpOpenHandleCreate @ 0x140661528 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 *     NtGetDevicePowerState @ 0x1408708A0 (NtGetDevicePowerState.c)
 */

__int64 __fastcall PfpVolumeOpenAndVerify(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v6; // r14
  NTSTATUS v7; // eax
  HANDLE v8; // rdi
  NTSTATUS DevicePowerState; // ebx
  PVOID PoolWithTag; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v15[4]; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  _WORD v17[4]; // [rsp+78h] [rbp-88h] BYREF
  void *Src; // [rsp+80h] [rbp-80h]
  HANDLE v19[4]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v20[2]; // [rsp+A8h] [rbp-58h] BYREF
  int FsInformation; // [rsp+C8h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v24; // [rsp+110h] [rbp+10h] BYREF
  int v25; // [rsp+118h] [rbp+18h]

  memset(v19, 0, sizeof(v19));
  v6 = 0x200000000LL;
  v19[3] = (HANDLE)0x200000000LL;
  memset(v20, 0, sizeof(v20));
  Src = *(void **)(a3 + 32);
  v17[0] = 2 * *(_WORD *)(a3 + 24);
  v17[1] = v17[0] + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
  *((_QWORD *)&v20[1] + 1) = 0x200000000LL;
  P = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  v8 = FileHandle;
  DevicePowerState = v7;
  if ( v7 >= 0 )
  {
    DevicePowerState = NtQueryVolumeInformationFile(
                         FileHandle,
                         &IoStatusBlock,
                         &FsInformation,
                         8u,
                         FileFsDeviceInformation);
    if ( (DevicePowerState & 0xC0000000) != 0xC0000000 )
    {
      if ( DevicePowerState == 259 )
        KeBugCheckEx(0x191u, 0x133EuLL, 0LL, 0LL, 0LL);
      if ( (unsigned int)PfVolumeSupportedForPrefetch(&FsInformation) )
      {
        DevicePowerState = -1073741637;
        goto LABEL_33;
      }
      if ( (*(_DWORD *)(a3 + 12) & 1) == 0 )
        goto LABEL_6;
      DevicePowerState = NtGetDevicePowerState(v8, (PDEVICE_POWER_STATE)&FileHandle);
      if ( DevicePowerState < 0 )
        goto LABEL_33;
      if ( (unsigned int)FileHandle > 1 )
      {
        DevicePowerState = -2147483633;
      }
      else
      {
LABEL_6:
        NtClose(v8);
        v8 = 0LL;
        DevicePowerState = PfpOpenHandleCreate((unsigned int)v19, a1, (unsigned int)v17, 0, 1048960, 32, 0, 0LL);
        if ( DevicePowerState < 0 )
          goto LABEL_15;
        if ( !*(_QWORD *)a3 && !*(_DWORD *)(a3 + 8) )
          goto LABEL_12;
        DevicePowerState = NtQueryVolumeInformationFile(v19[0], &IoStatusBlock, &v24, 0x18u, FileFsVolumeInformation);
        if ( (DevicePowerState & 0xC0000000) == 0xC0000000 )
          goto LABEL_15;
        if ( DevicePowerState == 259 )
          KeBugCheckEx(0x191u, 0x1387uLL, 0LL, 0LL, 0LL);
        if ( v24 == *(_QWORD *)a3 && v25 == *(_DWORD *)(a3 + 8) )
        {
LABEL_12:
          v15[0] = v17[0] + 2;
          v15[1] = v17[0] + 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v17[0] + 4), 0x44526650u);
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src, v17[0]);
            *((_WORD *)P + ((unsigned __int64)v17[0] >> 1)) = 92;
            *((_WORD *)P + ((unsigned __int64)v15[0] >> 1)) = 0;
            DevicePowerState = PfpOpenHandleCreate(
                                 (unsigned int)v20,
                                 a1,
                                 (unsigned int)v15,
                                 0,
                                 1179785,
                                 33,
                                 128,
                                 (__int64)v19);
            if ( DevicePowerState < 0 )
            {
              v6 = *((_QWORD *)&v20[1] + 1);
            }
            else
            {
              v11 = *(_OWORD *)&v19[2];
              *a2 = *(_OWORD *)v19;
              a2[1] = v11;
              memset(v19, 0, sizeof(v19));
              v12 = v20[1];
              v19[3] = (HANDLE)0x200000000LL;
              a2[2] = v20[0];
              a2[3] = v12;
              memset(v20, 0, sizeof(v20));
              *((_QWORD *)&v20[1] + 1) = 0x200000000LL;
              DevicePowerState = 0;
            }
          }
          else
          {
            DevicePowerState = -1073741670;
          }
          goto LABEL_15;
        }
        DevicePowerState = -1073741735;
      }
    }
  }
LABEL_33:
  if ( v8 )
    NtClose(v8);
LABEL_15:
  if ( (v6 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v20, a1);
  if ( ((unsigned __int64)v19[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v19, a1);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)DevicePowerState;
}
