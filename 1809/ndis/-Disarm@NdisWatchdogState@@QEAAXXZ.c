/*
 * XREFs of ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00C2E8C
 * Callers:
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0103558 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C01039C4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A588 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 */

void __fastcall NdisWatchdogState::Disarm(struct _KEVENT *this)
{
  struct _KEVENT *v1; // rdi

  v1 = this + 7;
  if ( !KeReadStateEvent(this + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)this) )
    KeWaitForSingleObject(v1, Executive, 0, 0, 0LL);
}
