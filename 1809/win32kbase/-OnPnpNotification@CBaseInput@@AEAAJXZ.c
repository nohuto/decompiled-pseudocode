/*
 * XREFs of ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C0149D10
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 */

__int64 __fastcall CBaseInput::OnPnpNotification(CBaseInput *this)
{
  return RIMOnPnpNotification(*((_QWORD *)this + 1));
}
