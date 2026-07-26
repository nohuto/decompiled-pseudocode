/*
 * XREFs of ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00FCD70
 * Callers:
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C01239B8 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0123E24 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C0018448 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 */

void __fastcall NdisWatchdogState::Disarm(struct _KEVENT *this)
{
  struct _KEVENT *v1; // rdi

  v1 = this + 7;
  if ( !KeReadStateEvent(this + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)this) )
    KeWaitForSingleObject(v1, Executive, 0, 0, 0LL);
}
