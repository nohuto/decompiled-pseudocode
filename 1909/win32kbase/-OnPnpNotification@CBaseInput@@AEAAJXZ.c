/*
 * XREFs of ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C01769A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 */

__int64 __fastcall CBaseInput::OnPnpNotification(CBaseInput *this)
{
  return RIMOnPnpNotification(*((_QWORD *)this + 1));
}
