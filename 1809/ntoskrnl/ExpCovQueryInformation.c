/*
 * XREFs of ExpCovQueryInformation @ 0x1408D8C0C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockShared @ 0x140005530 (ExfAcquirePushLockShared.c)
 *     ExfAcquirePushLockExclusive @ 0x140005740 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1408D87A4 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1408D8958 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D898C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1408D9320 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovQueryInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  SIZE_T v3; // rsi
  char *PoolWithTag; // r14
  __int64 v6; // rax
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // r15
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r12d
  __int64 v16; // r12
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  unsigned int v19; // edx
  void *v20; // rax
  __int64 v21; // [rsp+20h] [rbp-138h]
  int v22; // [rsp+28h] [rbp-130h] BYREF
  char *v23; // [rsp+30h] [rbp-128h]
  unsigned __int64 v24; // [rsp+38h] [rbp-120h]
  unsigned int v25; // [rsp+40h] [rbp-118h]
  UNICODE_STRING StringIn; // [rsp+48h] [rbp-110h] BYREF
  unsigned int *v27; // [rsp+58h] [rbp-100h]
  void *v28; // [rsp+60h] [rbp-F8h]
  _QWORD *v29; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v30; // [rsp+70h] [rbp-E8h]
  char *v31; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+88h] [rbp-D0h]
  bool v33; // [rsp+8Ch] [rbp-CCh]
  UNICODE_STRING StringOut; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-B8h]
  int v36; // [rsp+B0h] [rbp-A8h]
  __int64 v37; // [rsp+B4h] [rbp-A4h]
  _OWORD v38[4]; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v39; // [rsp+100h] [rbp-58h] BYREF

  v27 = a3;
  v3 = a2;
  v25 = a2;
  v30 = a1;
  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  PoolWithTag = 0LL;
  StringOut.Length = 0;
  v37 = 0x4000000000LL;
  v32 = a2;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a3 )
    *a3 = 64;
  if ( a2 < 0x40 )
    return 3221225476LL;
  v24 = a1 + 32;
  v6 = a1;
  if ( a1 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  v38[0] = *(_OWORD *)v6;
  v38[1] = *(_OWORD *)(v6 + 16);
  v38[2] = *(_OWORD *)(v6 + 32);
  v38[3] = *(_OWORD *)(v6 + 48);
  v33 = LODWORD(v38[0]) == 1;
  v7 = ExpCovReadRequestBuffer((char *)v38 + 8, &StringIn, &v39, &v22);
  if ( v7 >= 0 )
  {
    v36 = v22;
    v35 = v39;
    if ( !StringIn.Buffer || (v7 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v7 >= 0) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72766F43u);
      v23 = PoolWithTag;
      v31 = PoolWithTag;
      if ( PoolWithTag )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v7 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)&v31);
        if ( v7 >= 0 )
        {
          ExpCovQueryHypervisorInformation((__int64 *)&v31);
          v21 = v37;
          if ( (unsigned int)v3 >= HIDWORD(v37) && (unsigned int)((v31 - PoolWithTag) >> 5) )
          {
            v9 = PoolWithTag;
            v10 = v37;
            v11 = v24;
            while ( v10 )
            {
              v12 = (void *)(*((unsigned int *)v9 + 6) + v11 + 32);
              *(_DWORD *)v11 = *(_DWORD *)v9;
              *(_DWORD *)(v11 + 4) = *((_DWORD *)v9 + 1);
              *(_DWORD *)(v11 + 24) = *((_DWORD *)v9 + 6);
              memmove((void *)(v11 + 28), v9 + 28, *((unsigned int *)v9 + 6));
              *(_WORD *)(v11 + 8) = *((_WORD *)v9 + 4);
              *(_WORD *)(v11 + 10) = *((_WORD *)v9 + 5);
              *(_QWORD *)(v11 + 16) = v12;
              memmove(v12, *((const void **)v9 + 2), *((unsigned __int16 *)v9 + 4));
              v13 = *(unsigned int *)v9;
              v11 += v13;
              v24 = v11;
              v9 += v13;
              v10 = v37 - 1;
              LODWORD(v37) = v37 - 1;
            }
          }
          else
          {
            if ( (unsigned int)v3 < HIDWORD(v37) )
              v7 = -1073741820;
            v11 = v24;
          }
          if ( LODWORD(v38[0]) == 1 )
            ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
          else
            ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
          v14 = ExpCovUnloadedModuleList;
LABEL_29:
          v15 = v21;
          while ( (__int64 *)v14 != &ExpCovUnloadedModuleList )
          {
            v29 = (_QWORD *)v14;
            v16 = *(_QWORD *)(v14 + 56);
            if ( !v16 || !ExpCovIsUnLoadedModulePresent(v14, v22, &StringIn, &v39) )
              goto LABEL_32;
            v17 = *(_DWORD *)(v14 + 48);
            if ( LODWORD(v38[0]) != 1 )
              v17 -= *(_DWORD *)(v16 + 28);
            if ( v17 >= 0xFFFFFFE0 || (v18 = *(unsigned __int16 *)(v14 + 32) + v17 + 32, v18 < 0x20) )
              v18 = -1;
            v19 = v18 + HIDWORD(v21);
            if ( v18 + HIDWORD(v21) < HIDWORD(v21) )
            {
              DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", v14 + 32, v21);
LABEL_32:
              v14 = *(_QWORD *)v14;
              goto LABEL_29;
            }
            HIDWORD(v21) += v18;
            if ( v25 >= v19 )
            {
              v28 = (void *)(v17 + v11 + 32);
              *(_DWORD *)v11 = v18;
              *(_DWORD *)(v11 + 4) = 0;
              *(_DWORD *)(v11 + 24) = v17;
              memmove((void *)(v11 + 28), *(const void **)(v14 + 56), v17);
              *(_WORD *)(v11 + 8) = *(_WORD *)(v14 + 32);
              *(_WORD *)(v11 + 10) = *(_WORD *)(v14 + 32);
              v20 = v28;
              *(_QWORD *)(v11 + 16) = v28;
              memmove(v20, *(const void **)(v14 + 40), *(unsigned __int16 *)(v14 + 32));
              v11 += v18;
              v24 = v11;
              if ( LODWORD(v38[0]) == 1 )
              {
                v14 = *(_QWORD *)(v14 + 8);
                ExpCovDeleteUnloadedModuleEntry(v29);
              }
            }
            else
            {
              if ( v27 )
                *v27 = v19;
              v7 = -1073741820;
            }
            v15 = v21 + 1;
            LODWORD(v21) = v21 + 1;
            v14 = *(_QWORD *)v14;
          }
          ExfReleasePushLock(&ExpCovPushLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v27 )
            *v27 = HIDWORD(v21);
          *(_DWORD *)(v30 + 4) = v15;
        }
        else
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeAnsiString(&StringOut);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v7;
}
