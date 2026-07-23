/*
 * XREFs of NtEnumerateBootEntries @ 0x1408D4B90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     strcmp @ 0x140197040 (strcmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x14031D0D0 (ExpIsDevicePathForRemovableMedia.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1408223AC (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x1408D299C (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x1408D38F0 (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x1408D4640 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1408D479C (ExpVerifyWindowsOsOptions.c)
 */

NTSTATUS __stdcall NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v7; // rsi
  NTSTATUS v8; // r12d
  _DWORD *v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v12; // r15
  unsigned int v13; // edi
  unsigned int v14; // eax
  int v15; // r14d
  unsigned int *v16; // r12
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // r13d
  unsigned int v20; // eax
  __int64 v21; // r8
  size_t v22; // r9
  unsigned int v23; // edi
  unsigned int v24; // eax
  char *v25; // rdx
  unsigned int v26; // r13d
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  int v29; // eax
  BOOL v30; // r8d
  int v31; // eax
  unsigned int v32; // edx
  int v33; // eax
  BOOL v34; // eax
  BOOL v35; // r8d
  unsigned int v36; // ecx
  unsigned int v37; // eax
  _DWORD *v38; // rdi
  int *v39; // rax
  int v40; // r8d
  int v41; // ecx
  char *v42; // rax
  _BYTE *v43; // rcx
  __int64 v44; // rax
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-C8h] BYREF
  KPROCESSOR_MODE NumberOfBytes_4; // [rsp+34h] [rbp-C4h]
  int v47; // [rsp+38h] [rbp-C0h]
  BOOL v48; // [rsp+3Ch] [rbp-BCh]
  unsigned int v49; // [rsp+40h] [rbp-B8h]
  int v50; // [rsp+44h] [rbp-B4h]
  _DWORD *v51; // [rsp+48h] [rbp-B0h]
  unsigned int v52; // [rsp+50h] [rbp-A8h]
  unsigned int v53; // [rsp+54h] [rbp-A4h]
  unsigned __int64 v54; // [rsp+58h] [rbp-A0h]
  unsigned int v55; // [rsp+60h] [rbp-98h]
  int v56; // [rsp+64h] [rbp-94h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-90h]
  void *v58; // [rsp+70h] [rbp-88h] BYREF
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  _DWORD *v60; // [rsp+80h] [rbp-78h]
  void *Src; // [rsp+88h] [rbp-70h]
  size_t Size; // [rsp+90h] [rbp-68h]
  void *v63; // [rsp+98h] [rbp-60h]
  size_t v64; // [rsp+A0h] [rbp-58h]
  void *v65; // [rsp+A8h] [rbp-50h]
  char v67; // [rsp+110h] [rbp+18h]

  if ( dword_14040ADF0 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  NumberOfBytes_4 = PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v5 = (__int64)BufferLength;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = Buffer != 0LL ? *BufferLength : 0;
    v49 = v6;
    if ( v6 )
      ProbeForWrite(Buffer, v6, 4u);
    PreviousMode = NumberOfBytes_4;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, NumberOfBytes_4) )
      return -1073741727;
  }
  else
  {
    v6 = Buffer != 0LL ? *BufferLength : 0;
    v49 = v6;
  }
  if ( v6 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v6, PreviousMode, IoWriteAccess, &v58, (struct _MDL **)&P);
    if ( result < 0 )
      return result;
  }
  else
  {
    v58 = 0LL;
    P = 0LL;
  }
  v7 = v58;
  v48 = v6 != 0;
  v8 = 0;
  v47 = 0;
  v9 = 0LL;
  v51 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x72766E45u);
  v12 = PoolWithTag;
  v13 = PoolWithTag != 0LL ? 0x2000 : 0;
  for ( NumberOfBytes = v13; ; v13 = NumberOfBytes )
  {
    v15 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsBootEntry, (__int64)PoolWithTag, &NumberOfBytes);
    if ( v15 != -1073741789 )
      break;
    v14 = NumberOfBytes;
    if ( v13 >= NumberOfBytes )
      break;
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v14 = NumberOfBytes;
    }
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x72766E45u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = -1073741670;
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !v15 && NumberOfBytes )
  {
    v16 = v12;
    v17 = (unsigned __int64)v12 + 2 * NumberOfBytes;
    v54 = v17;
    while ( 1 )
    {
      v18 = *((_QWORD *)v16 + 2) - EfiBootVariablesGuid;
      if ( !v18 )
        v18 = *((_QWORD *)v16 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v18 && (unsigned int)ExpTranslateBootEntryNameToId((wint_t *)v16 + 16, &v56) )
      {
        v19 = v16[2];
        if ( v19 < 8 )
          goto LABEL_73;
        v60 = (unsigned int *)((char *)v16 + v16[1]);
        v63 = (char *)v60 + 6;
        v20 = ExpSafeWcslen((_WORD *)v60 + 3, v17);
        v23 = v20;
        if ( v20 != -1 )
          v23 = 2 * v20 + 2;
        v24 = v23 + v22 + 6;
        if ( v23 == -1 || (unsigned int)v22 >= v19 || v19 < v24 )
        {
          v17 = v54;
LABEL_73:
          v9 = v51;
          goto LABEL_74;
        }
        v67 = 1;
        Size = v23;
        v25 = (char *)(v23 + v21 + 6);
        v65 = v25;
        v64 = v22;
        Src = &v25[v22];
        v26 = v19 - v24;
        v27 = ((unsigned __int64)v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (_DWORD *)v27 != v7 )
        {
          v28 = v27 - (_DWORD)v7;
          v7 = (_DWORD *)(((unsigned __int64)v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v6 >= v28 )
          {
            v6 -= v28;
          }
          else
          {
            v48 = 0;
            v6 = 0;
            v47 = -1073741789;
          }
        }
        v29 = v22 + 12;
        v50 = v22 + 12;
        if ( v6 >= (int)v22 + 12 )
        {
          *v7 = 1;
          v7[1] = v29;
          v7[2] = 4;
          memmove(v7 + 3, v25, v22);
          v31 = ExpVerifyFilePath((unsigned __int64)v7, (unsigned __int64)v7 + (unsigned int)v7[1]);
          v30 = v48;
          if ( v31 >= 0 )
          {
            v29 = v50;
          }
          else
          {
            v67 = 0;
            v29 = 16;
            v50 = 16;
          }
        }
        else
        {
          v6 = 0;
          v30 = 0;
          v47 = -1073741789;
        }
        v52 = (v26 + 31) & 0xFFFFFFFC;
        v53 = (v23 + v52 + 3) & 0xFFFFFFFC;
        v55 = v29 + v53;
        v32 = v29 + v53 + 4;
        v57 = v32;
        v33 = v47;
        if ( v6 < v32 )
          v33 = -1073741789;
        v47 = v33;
        v34 = 0;
        if ( v6 >= v32 )
          v34 = v30;
        v35 = v34;
        v48 = v34;
        v36 = v6;
        v37 = v6 - v32;
        v6 = 0;
        if ( v36 >= v32 )
          v6 = v37;
        if ( v35 )
        {
          v38 = v7 + 1;
          memset(v7, 0, v32);
          v7[1] = 1;
          v7[2] = v55;
          v7[3] = v56;
          v7[4] = 0;
          v39 = v60;
          v40 = *v60;
          v41 = 0;
          if ( (*v60 & 1) != 0 )
          {
            v7[4] = 1;
            v40 = *v39;
            v41 = 1;
          }
          if ( (v40 & 8) != 0 )
            v7[4] = v41 | 0x10;
          v7[5] = v52;
          v7[6] = v53;
          v7[7] = v26;
          memmove(v7 + 8, Src, v26);
          if ( v26 > 0x14
            && !strcmp((const char *)v7 + 32, "WINDOWS")
            && (int)ExpVerifyWindowsOsOptions((__int64)(v7 + 8), v26) >= 0 )
          {
            v7[4] |= 4u;
          }
          memmove((char *)v38 + v52, v63, Size);
          v42 = (char *)v38 + v53;
          *(_DWORD *)v42 = 1;
          *((_DWORD *)v42 + 1) = v50;
          *((_DWORD *)v42 + 2) = 4;
          v43 = v42 + 12;
          if ( v67 )
          {
            memmove(v43, v65, v64);
            if ( ExpIsDevicePathForRemovableMedia(v65) )
              v7[4] |= 8u;
          }
          else
          {
            v7[4] |= 0x20u;
            *v43 = 127;
            *(_WORD *)(v42 + 13) = 1279;
            v42[15] = 0;
          }
          if ( v51 )
            *v51 = (_DWORD)v7 - (_DWORD)v51;
          v9 = v7;
          v51 = v7;
          v32 = v57;
        }
        else
        {
          v9 = v51;
        }
        v7 = (_DWORD *)((char *)v7 + v32);
        v17 = v54;
      }
LABEL_74:
      v44 = *v16;
      if ( !(_DWORD)v44 )
      {
        v8 = v47;
        if ( v9 )
          *v9 = 0;
        goto LABEL_80;
      }
      v16 = (unsigned int *)((char *)v16 + v44);
    }
  }
  if ( v15 == -1073741789 )
    v15 = -1073741306;
LABEL_80:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  if ( v15 < 0 )
    v8 = v15;
  *BufferLength = (_DWORD)v7 - (_DWORD)v58;
  return v8;
}
