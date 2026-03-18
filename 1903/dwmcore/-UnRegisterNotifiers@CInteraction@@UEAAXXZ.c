/*
 * XREFs of ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1801D8090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::UnRegisterNotifiers(CInteraction *this)
{
  ReleaseInterface<CDisplay>((__int64 *)this + 12);
}
