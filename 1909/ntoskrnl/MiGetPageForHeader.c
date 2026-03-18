/*
 * XREFs of MiGetPageForHeader @ 0x140091D8C
 * Callers:
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x140646858 (MiCreateMdl.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiGetSystemPage @ 0x140091EBC (MiGetSystemPage.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400CAEEC (MiGetEffectivePagePriorityThread.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPageForHeader(ULONG_PTR *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rsi
  char EffectivePagePriorityThread; // bl
  unsigned __int8 v7; // al
  char v8; // bl
  unsigned __int8 v9; // di
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[0] = 0LL;
  v12[1] = 0LL;
  if ( !(unsigned int)MiObtainFaultCharges(a1, 1u, 1) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase(&CurrentThread->ApcState.Process[1].IdealNode[6], a2, v12);
  SystemPage = MiGetSystemPage(a1, v12);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
  v7 = MiLockPageInline(SystemPage);
  v8 = *(_BYTE *)(SystemPage + 35) ^ EffectivePagePriorityThread;
  v9 = v7;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_BYTE *)(SystemPage + 35) ^= v8 & 7;
  *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
  *(_WORD *)(SystemPage + 32) = 1;
  *(_QWORD *)(SystemPage + 16) = ZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v9);
  return (SystemPage + 0x58000000000LL) / 48;
}
