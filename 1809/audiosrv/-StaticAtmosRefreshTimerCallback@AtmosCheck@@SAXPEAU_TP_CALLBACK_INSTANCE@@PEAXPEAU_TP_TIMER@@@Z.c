/*
 * XREFs of ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180016440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::StaticAtmosRefreshTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        AtmosCheck *Context,
        PTP_TIMER Timer)
{
  *((_DWORD *)Context + 38) = 4;
  AtmosCheck::PerformLicenseCheck(Context, 1);
}
