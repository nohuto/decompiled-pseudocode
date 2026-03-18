/*
 * XREFs of ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180030D30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x180030D58 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x180030DA8 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::OnChanged(CWindowBackgroundTreatment *a1)
{
  CWindowBackgroundTreatment::ClearRenderTargetMaps(a1);
  CWindowBackgroundTreatment::UpdateBackdropFlags(a1);
  return 1LL;
}
