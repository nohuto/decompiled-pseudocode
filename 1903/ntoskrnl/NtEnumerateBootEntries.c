/*
 * XREFs of NtEnumerateBootEntries @ 0x1409111A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     strcmp @ 0x1401A1700 (strcmp.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x14033C150 (ExpIsDevicePathForRemovableMedia.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x14085B284 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x14090EF08 (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x14090FEA4 (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x140910C54 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x140910DB0 (ExpVerifyWindowsOsOptions.c)
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
  struct _KTHREAD *v10; // rax
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
  _DWORD *v42; // rax
  __int64 v43; // rax
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-D8h] BYREF
  KPROCESSOR_MODE NumberOfBytes_4; // [rsp+34h] [rbp-D4h]
  int v46; // [rsp+38h] [rbp-D0h]
  BOOL v47; // [rsp+3Ch] [rbp-CCh]
  unsigned int v48; // [rsp+40h] [rbp-C8h]
  int v49; // [rsp+44h] [rbp-C4h]
  _DWORD *v50; // [rsp+48h] [rbp-C0h]
  unsigned int v51; // [rsp+50h] [rbp-B8h]
  unsigned int v52; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v53; // [rsp+58h] [rbp-B0h]
  unsigned int v54; // [rsp+60h] [rbp-A8h]
  int v55; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-A0h]
  void *v57; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v59; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  size_t Size; // [rsp+90h] [rbp-78h]
  void *v62; // [rsp+98h] [rbp-70h]
  size_t v63; // [rsp+A0h] [rbp-68h]
  void *v64; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-48h]
  char v67; // [rsp+120h] [rbp+18h]

  if ( dword_1404324F0 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  NumberOfBytes_4 = PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v5 = (__int64)BufferLength;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = Buffer != 0LL ? *BufferLength : 0;
    v48 = v6;
    if ( v6 )
      ProbeForWrite(Buffer, v6, 4u);
    PreviousMode = NumberOfBytes_4;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, NumberOfBytes_4) )
      return -1073741727;
  }
  else
  {
    v6 = Buffer != 0LL ? *BufferLength : 0;
    v48 = v6;
  }
  if ( v6 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v6, PreviousMode, IoWriteAccess, &v57, (struct _MDL **)&P);
    if ( result < 0 )
      return result;
  }
  else
  {
    v57 = 0LL;
    P = 0LL;
  }
  v7 = v57;
  v47 = v6 != 0;
  v8 = 0;
  v46 = 0;
  v9 = 0LL;
  v50 = 0LL;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
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
  KeLeaveCriticalRegion();
  if ( !v15 && NumberOfBytes )
  {
    v16 = v12;
    v17 = (unsigned __int64)v12 + 2 * NumberOfBytes;
    v53 = v17;
    while ( 1 )
    {
      v18 = *((_QWORD *)v16 + 2) - EfiBootVariablesGuid;
      if ( !v18 )
        v18 = *((_QWORD *)v16 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v18 && (unsigned int)ExpTranslateBootEntryNameToId((wint_t *)v16 + 16, &v55) )
      {
        v19 = v16[2];
        if ( v19 < 8 )
          goto LABEL_73;
        v59 = (unsigned int *)((char *)v16 + v16[1]);
        v62 = (char *)v59 + 6;
        v20 = ExpSafeWcslen((_WORD *)v59 + 3, v17);
        v23 = v20;
        if ( v20 != -1 )
          v23 = 2 * v20 + 2;
        v24 = v23 + v22 + 6;
        if ( v23 == -1 || (unsigned int)v22 >= v19 || v19 < v24 )
        {
          v17 = v53;
LABEL_73:
          v9 = v50;
          goto LABEL_74;
        }
        v67 = 1;
        Size = v23;
        v25 = (char *)(v23 + v21 + 6);
        v64 = v25;
        v63 = v22;
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
            v47 = 0;
            v6 = 0;
            v46 = -1073741789;
          }
        }
        v29 = v22 + 12;
        v49 = v22 + 12;
        if ( v6 >= (int)v22 + 12 )
        {
          *v7 = 1;
          v7[1] = v29;
          v7[2] = 4;
          memmove(v7 + 3, v25, v22);
          v31 = ExpVerifyFilePath((unsigned __int64)v7, (unsigned __int64)v7 + (unsigned int)v7[1]);
          v30 = v47;
          if ( v31 >= 0 )
          {
            v29 = v49;
          }
          else
          {
            v67 = 0;
            v29 = 16;
            v49 = 16;
          }
        }
        else
        {
          v6 = 0;
          v30 = 0;
          v46 = -1073741789;
        }
        v51 = (v26 + 31) & 0xFFFFFFFC;
        v52 = (v23 + v51 + 3) & 0xFFFFFFFC;
        v54 = v29 + v52;
        v32 = v29 + v52 + 4;
        v56 = v32;
        v33 = v46;
        if ( v6 < v32 )
          v33 = -1073741789;
        v46 = v33;
        v34 = 0;
        if ( v6 >= v32 )
          v34 = v30;
        v35 = v34;
        v47 = v34;
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
          v7[2] = v54;
          v7[3] = v55;
          v7[4] = 0;
          v39 = v59;
          v40 = *v59;
          v41 = 0;
          if ( (*v59 & 1) != 0 )
          {
            v7[4] = 1;
            v40 = *v39;
            v41 = 1;
          }
          if ( (v40 & 8) != 0 )
            v7[4] = v41 | 0x10;
          v7[5] = v51;
          v7[6] = v52;
          v7[7] = v26;
          memmove(v7 + 8, Src, v26);
          if ( v26 > 0x14
            && !strcmp((const char *)v7 + 32, "WINDOWS")
            && (int)ExpVerifyWindowsOsOptions((__int64)(v7 + 8), v26) >= 0 )
          {
            v7[4] |= 4u;
          }
          memmove((char *)v38 + v51, v62, Size);
          v42 = (_DWORD *)((char *)v38 + v52);
          *v42 = 1;
          v42[1] = v49;
          v42[2] = 4;
          if ( v67 )
          {
            memmove(v42 + 3, v64, v63);
            if ( ExpIsDevicePathForRemovableMedia(v64) )
              v7[4] |= 8u;
          }
          else
          {
            v7[4] |= 0x20u;
            v42[3] = 327551;
          }
          if ( v50 )
            *v50 = (_DWORD)v7 - (_DWORD)v50;
          v9 = v7;
          v50 = v7;
          v32 = v56;
        }
        else
        {
          v9 = v50;
        }
        v7 = (_DWORD *)((char *)v7 + v32);
        v17 = v53;
      }
LABEL_74:
      v43 = *v16;
      if ( !(_DWORD)v43 )
      {
        v8 = v46;
        if ( v9 )
          *v9 = 0;
        goto LABEL_80;
      }
      v16 = (unsigned int *)((char *)v16 + v43);
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
  *BufferLength = (_DWORD)v7 - (_DWORD)v57;
  return v8;
}
