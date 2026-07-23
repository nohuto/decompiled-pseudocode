/*
 * XREFs of VfPutDmaAdapter @ 0x14092CE70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14030A3A8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14092A720 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x14092F59C (ViReleaseDmaAdapter.c)
 */

__int64 (__fastcall *__fastcall VfPutDmaAdapter(ULONG_PTR a1))(ULONG_PTR)
{
  __int64 (__fastcall *result)(ULONG_PTR); // rax
  __int64 (__fastcall *v3)(ULONG_PTR); // rbp
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v6; // si
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  VF_ASSERT_MAX_IRQL();
  result = (__int64 (__fastcall *)(ULONG_PTR))ViGetRealDmaOperation(a1);
  v3 = result;
  if ( result )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
    Flink = ViAdapterList.Flink;
    v6 = v4;
    while ( &ViAdapterList != Flink )
    {
      if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      {
        if ( _InterlockedDecrement((volatile signed __int32 *)&Flink[2].Flink + 1) < 0 )
        {
          ViHalPreprocessOptions(
            byte_1404064F8,
            "Driver has attempted to access an adapter (%p) that has already been released.",
            (const void *)0x18);
          VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_1404064F8);
        }
        ViFlushZeroMapRegisterBaseWcbs((__int64)Flink);
        if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
        {
          ViHalPreprocessOptions(
            byte_1404064F0,
            "Cannot put adapter %p until all adapter channels are freed (%x left).",
            (const void *)8,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            8uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink)),
            (ULONG_PTR)Flink,
            byte_1404064F0);
        }
        if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
        {
          ViHalPreprocessOptions(
            byte_1404064F4,
            "Cannot put adapter %p until all common buffers are freed (%x left).",
            (const void *)7,
            a1);
          VfReportIssueWithOptions(
            0xE6u,
            7uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink)),
            (ULONG_PTR)Flink,
            byte_1404064F4);
        }
        if ( LODWORD(Flink[10].Flink) )
        {
          ViHalPreprocessOptions(
            byte_1404064E8,
            "Cannot put adapter %p until all map registers are freed (%x left).",
            (const void *)9,
            a1);
          VfReportIssueWithOptions(0xE6u, 9uLL, a1, SLODWORD(Flink[10].Flink), (ULONG_PTR)Flink, byte_1404064E8);
        }
        if ( LODWORD(Flink[10].Blink) )
        {
          ViHalPreprocessOptions(
            byte_1404064EC,
            "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
            (const void *)0xA,
            a1);
          VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, SLODWORD(Flink[10].Blink), (ULONG_PTR)Flink, byte_1404064EC);
        }
        if ( !Flink[1].Blink || BYTE2(Flink[2].Flink) )
        {
          v7 = Flink->Flink;
          Blink = Flink->Blink;
          if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
            __fastfail(3u);
          Blink->Flink = v7;
          v7->Blink = Blink;
        }
        else
        {
          Flink = 0LL;
        }
        break;
      }
      Flink = Flink->Flink;
    }
    KxReleaseSpinLock(&Lock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
    if ( Flink )
      ViReleaseDmaAdapter((__int64)Flink);
    return (__int64 (__fastcall *)(ULONG_PTR))v3(a1);
  }
  return result;
}
