/*
 * XREFs of ?AcknowledgeGestureReceived@MagnifierClientProxy@@MEAAJXZ @ 0x18000E4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MagnifierClientProxy::AcknowledgeGestureReceived(MagnifierClientProxy *this)
{
  *((_BYTE *)this + 64) = 1;
  return 0LL;
}
