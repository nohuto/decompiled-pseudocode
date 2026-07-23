/*
 * XREFs of MiCloneProcessAddressSpace @ 0x14085F284
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiIsStoreProcess @ 0x1400837DC (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C94E0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402C9744 (MiCreateForkWsles.c)
 *     MiInsertClone @ 0x1402CAACC (MiInsertClone.c)
 *     MiLockDownWorkingSet @ 0x1402CAB50 (MiLockDownWorkingSet.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiUnlockVadRange @ 0x140605A50 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x14085F0E0 (MiBuildNewCloneDescriptor.c)
 *     MiDeleteInsertedCloneVads @ 0x14085F5C8 (MiDeleteInsertedCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x14085F8B8 (MiFreeCloneDescriptor.c)
 *     MiMapChildLargePageVads @ 0x14085FB14 (MiMapChildLargePageVads.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(__int64 BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // r15
  _KPROCESS *Process; // rdi
  int v7; // r13d
  int v8; // r12d
  _QWORD *v9; // r14
  int v11; // r15d
  int v12; // edi
  _QWORD *v13; // r15
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v23; // [rsp+40h] [rbp-39h]
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+50h] [rbp-29h]
  __int64 v26; // [rsp+58h] [rbp-21h]
  _KPROCESS *v27; // [rsp+60h] [rbp-19h]
  _BYTE v28[48]; // [rsp+68h] [rbp-11h] BYREF

  v3 = a3;
  v23 = a3;
  v24 = 0LL;
  P = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 1;
  v27 = Process;
  v8 = 0;
  v21 = 0;
  v9 = 0LL;
  if ( (unsigned int)MiIsStoreProcess(BugCheckParameter1) )
    return 3221225659LL;
  MiLockDownWorkingSet(a2, 1);
  if ( Process != (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28);
  }
  v11 = v3 & 1;
  v26 = *(_QWORD *)(BugCheckParameter1 + 1296);
  if ( !*(_QWORD *)(v26 + 312) || v11 )
  {
    v25 = MiLockVadRange(BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v25 )
    {
      v12 = MiCreateCloneChain((__int64)a2, &P);
      if ( v12 < 0 )
        goto LABEL_10;
      v12 = MiAllocateChildVads((ULONG_PTR)a2, &v24);
      if ( v12 < 0 )
        goto LABEL_10;
      if ( v11 )
      {
        v15 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v26 + 312));
        v9 = v15;
        if ( !v15 )
        {
          v12 = -1073741670;
          goto LABEL_10;
        }
        memset((void *)v15[3], 0, 32LL * v15[5]);
        *(_QWORD *)(v9[3] + 16LL) = *(_QWORD *)(v9[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
        *(_QWORD *)(v9[3] + 48LL) = *(_QWORD *)(v9[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
      }
      v12 = MiCloneVads((_QWORD *)BugCheckParameter1, a2, (__int64)P, (__int64)v9, v23, &v21);
      if ( v12 >= 0 )
      {
        P = 0LL;
        v12 = MiMapChildLargePageVads((ULONG_PTR)a2);
        MiUnlockVadRange(BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v25, 0);
        if ( v8 )
        {
          KiUnstackDetachProcess((__int64)v28, 0LL);
          v8 = 0;
        }
        if ( v27 != a2 )
        {
          v8 = 1;
          KiStackAttachProcess(a2, 0LL, (__int64)v28);
        }
        MiCreateForkWsles();
        if ( v9 )
        {
          v16 = v9[5];
          v17 = 0LL;
          v18 = 0;
          if ( !v16 )
            goto LABEL_38;
          v19 = v9[3];
          v20 = 0LL;
          do
          {
            ++v18;
            v17 += *(_QWORD *)(32 * v20 + v19 + 24);
            v20 = v18;
          }
          while ( v18 < v16 );
          if ( v17 )
          {
            v9[6] = v17;
            MiInsertClone((__int64)a2, v9, 0LL, v19);
          }
          else
          {
LABEL_38:
            MiFreeCloneDescriptor(a2, v9);
          }
          v9 = 0LL;
        }
        if ( v12 >= 0 )
        {
          MiLockDownWorkingSet(a2, 0);
          v7 = 0;
          if ( v8 )
          {
            KiUnstackDetachProcess((__int64)v28, 0LL);
            v8 = 0;
          }
          if ( !v21 )
            return (unsigned int)v12;
          v12 = -1073741670;
          goto LABEL_13;
        }
LABEL_11:
        v13 = P;
        if ( P )
        {
          do
          {
            v14 = (_QWORD *)*v13;
            PsReturnProcessNonPagedPoolQuota(a2, v13[8]);
            ExFreePoolWithTag(v13, 0);
            v13 = v14;
          }
          while ( v14 );
        }
LABEL_13:
        if ( v9 )
          MiFreeCloneDescriptor(a2, v9);
        goto LABEL_15;
      }
    }
    else
    {
      v12 = -1073741558;
    }
LABEL_10:
    MiUnlockVadRange(BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v25, 0);
    goto LABEL_11;
  }
  v12 = -1073741637;
LABEL_15:
  if ( v8 )
    KiUnstackDetachProcess((__int64)v28, 0LL);
  if ( v7 )
    MiLockDownWorkingSet(a2, 0);
  MiDeleteInsertedCloneVads(a2);
  return (unsigned int)v12;
}
