/*
 * XREFs of MiFreePhysicalPageChain @ 0x1402B07AC
 * Callers:
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117C10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140119050 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetAweInfoPartition @ 0x140851130 (MiGetAweInfoPartition.c)
 *     MiReturnProcessPhysicalPages @ 0x14085CE60 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiFreePhysicalPageChain(unsigned int *a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v4; // r9
  unsigned int v5; // r14d
  __int64 v6; // rbx
  unsigned int *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // r15
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned __int8 v20; // r8
  char v21; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 AweInfoPartition; // rax
  unsigned __int64 v24; // r8
  signed __int64 v25; // r8
  unsigned __int8 v26; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v30; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v31; // [rsp+40h] [rbp-C0h]
  signed __int64 *v32; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD *v35; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  _BYTE v41[4096]; // [rsp+A0h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *((_QWORD *)a1 + 1);
  v5 = 0;
  v6 = 0LL;
  v30 = v4;
  v8 = a1;
  v31 = (unsigned __int64 *)v41;
  v35 = CurrentThread;
  if ( !a3 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(a1 + 14), 0LL);
    v4 = v30;
  }
  result = *((_QWORD *)v8 + 3);
  v32 = (signed __int64 *)result;
  if ( a2 )
  {
    v10 = a2;
    do
    {
      v11 = v10;
      v28 = *(_QWORD *)(v10 + 16);
      v12 = 0LL;
      v13 = 0LL;
      v14 = (v10 + 0x58000000000LL) / 48;
      v33 = v14 / v4;
      v15 = v31;
      v16 = v11 + 24;
      v17 = v14;
      do
      {
        v29 = v12;
        v18 = MiLockPageInline(v16 - 24);
        v19 = *(_QWORD *)v16;
        v20 = v18;
        v26 = v18;
        if ( (*(_QWORD *)v16 & 0x4000000000000000LL) == 0 )
        {
          v19 |= 0x4000000000000000uLL;
          *(_QWORD *)v16 = v19;
        }
        v21 = *(_BYTE *)(v16 + 10);
        if ( (v21 & 8) != 0 )
        {
          v19 = *(_QWORD *)v16;
          *(_BYTE *)(v16 + 10) = v21 & 0xF7;
        }
        v12 = v19 & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v19 & 0x3FFFFFFFFFFFFFFFLL) == 0 )
        {
          *(_QWORD *)(v16 - 8) = 0LL;
          *(_QWORD *)v16 = v19 ^ (v19 ^ 1) & 0x3FFFFFFFFFFFFFFFLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v19 = 2LL;
            if ( KeGetCurrentIrql() >= 2u && v20 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v20 = v26;
            }
          }
        }
        result = v20;
        __writecr8(v20);
        if ( v13 )
          v12 = v29;
        if ( !v12 )
        {
          if ( !v13 )
          {
            result = (__int64)v32;
            _bittestandreset64(v32, v33);
          }
          if ( v5 == 512 )
          {
            BugCheckParameter2 = 0LL;
            v38 = 0LL;
            v40 = 0;
            v37 = 135216;
            v39 = 0x200000;
            result = (__int64)MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0);
            v6 += 512LL;
            v15 = (unsigned __int64 *)v41;
            v5 = 0;
          }
          *v15++ = v17;
          ++v5;
        }
        v4 = v30;
        ++v13;
        v16 += 48LL;
        ++v17;
      }
      while ( v13 < v30 );
      v31 = v15;
      v10 = v28;
    }
    while ( v28 );
    v8 = a1;
    CurrentThread = v35;
    if ( v5 )
    {
      BugCheckParameter2 = 0LL;
      v38 = 0LL;
      v40 = 0;
      v39 = v5 << 12;
      LOWORD(v37) = 8 * (v5 + 6);
      HIWORD(v37) = 2;
      MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0);
      result = v5;
      v6 += v5;
    }
    if ( v6 )
    {
      AweInfoPartition = MiGetAweInfoPartition(a1, v19, -v6);
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 7800), v24);
      result = *a1;
      if ( (result & 1) != 0 )
        result = MiReturnProcessPhysicalPages(v35->ApcState.Process, v6, v25);
    }
  }
  if ( !a3 )
  {
    ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)(v8 + 14), 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
