/*
 * XREFs of MiFreePhysicalPageChain @ 0x1402D5A40
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     NtMapUserPhysicalPages @ 0x140897450 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897730 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140116F90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1401175E0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGetAweInfoPartition @ 0x140896068 (MiGetAweInfoPartition.c)
 *     MiReturnProcessPhysicalPages @ 0x140897FB0 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiFreePhysicalPageChain(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int *v4; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v6; // r8
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  ULONG_PTR *v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // r15
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned __int8 v20; // r8
  char v21; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 AweInfoPartition; // rax
  unsigned __int64 v24; // r8
  unsigned __int8 v25; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v29; // [rsp+38h] [rbp-C8h]
  ULONG_PTR *v30; // [rsp+40h] [rbp-C0h]
  signed __int64 *v31; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD *v34; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2[518]; // [rsp+70h] [rbp-90h] BYREF

  v4 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  CurrentThread = KeGetCurrentThread();
  v6 = *((_QWORD *)v4 + 1);
  v7 = 0;
  v8 = 0LL;
  v30 = &BugCheckParameter2[6];
  v29 = v6;
  v34 = CurrentThread;
  if ( !a3 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v4 + 14), 0LL);
    v6 = v29;
  }
  result = *((_QWORD *)v4 + 3);
  v31 = (signed __int64 *)result;
  if ( a2 )
  {
    v10 = a2;
    do
    {
      v11 = v10;
      v27 = *(_QWORD *)(v10 + 16);
      v12 = 0LL;
      v13 = 0LL;
      v14 = (v10 + 0x58000000000LL) / 48;
      v32 = v14 / v6;
      v15 = v30;
      v16 = v11 + 24;
      v17 = v14;
      do
      {
        v28 = v12;
        v18 = MiLockPageInline(v16 - 24);
        v19 = *(_QWORD *)v16;
        v20 = v18;
        v25 = v18;
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
              v20 = v25;
            }
          }
        }
        result = v20;
        __writecr8(v20);
        if ( v13 )
          v12 = v28;
        if ( !v12 )
        {
          if ( !v13 )
          {
            result = (__int64)v31;
            _bittestandreset64(v31, v32);
          }
          if ( v7 == 512 )
          {
            BugCheckParameter2[0] = 0LL;
            BugCheckParameter2[4] = 0LL;
            LODWORD(BugCheckParameter2[1]) = 135216;
            BugCheckParameter2[5] = 0x200000LL;
            result = (__int64)MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
            v8 += 512LL;
            v15 = &BugCheckParameter2[6];
            v7 = 0;
          }
          *v15++ = v17;
          ++v7;
        }
        v6 = v29;
        ++v13;
        v16 += 48LL;
        ++v17;
      }
      while ( v13 < v29 );
      v30 = v15;
      v10 = v27;
    }
    while ( v27 );
    v4 = a1;
    CurrentThread = v34;
    if ( v7 )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[4] = 0LL;
      BugCheckParameter2[5] = v7 << 12;
      LOWORD(BugCheckParameter2[1]) = 8 * (v7 + 6);
      WORD1(BugCheckParameter2[1]) = 2;
      MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
      result = v7;
      v8 += v7;
    }
    if ( v8 )
    {
      AweInfoPartition = MiGetAweInfoPartition(a1, v19, -v8);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 8568), v24);
      result = *a1;
      if ( (result & 1) != 0 )
        result = MiReturnProcessPhysicalPages(v34->ApcState.Process, v8);
    }
  }
  if ( !a3 )
  {
    ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)(v4 + 14), 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
