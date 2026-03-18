/*
 * XREFs of ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0239C50
 * Callers:
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0239BF0 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C024F668 (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Pointer::GetPointerInfoByPointerMsgId(
        Pointer *this,
        const struct tagPOINTER_INFO **a2,
        const struct tagPOINTER_INFO **a3)
{
  const struct tagPOINTER_INFO *PointerInfo; // rcx
  __int64 result; // rax

  PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (unsigned __int64)this);
  *a2 = PointerInfo;
  result = 3221225485LL;
  if ( PointerInfo )
    return 0LL;
  return result;
}
