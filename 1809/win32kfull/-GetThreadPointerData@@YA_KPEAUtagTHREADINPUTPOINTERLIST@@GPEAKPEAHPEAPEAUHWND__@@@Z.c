/*
 * XREFs of ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC1F8
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01DB5F0 (xxxDiscardPointerFrameMessagesInternal.c)
 *     xxxPointerCallHook @ 0x1C01DB658 (xxxPointerCallHook.c)
 *     xxxPromotePointerToMouse @ 0x1C01DB824 (xxxPromotePointerToMouse.c)
 *     xxxSendPointerMessage @ 0x1C01DBEB8 (xxxSendPointerMessage.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0221ADC (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C01DC188 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall GetThreadPointerData(struct _LIST_ENTRY *a1, __int16 a2, unsigned int *a3, int *a4)
{
  struct _LIST_ENTRY *Blink; // rax
  unsigned int *v5; // r11
  struct _LIST_ENTRY *ThreadPointerData; // r10

  Blink = a1[1].Blink;
  v5 = a3;
  if ( Blink )
  {
    ThreadPointerData = 0LL;
    if ( LOWORD(Blink[1].Flink) == a2 )
      ThreadPointerData = a1[1].Blink;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData(a1, a2);
  }
  if ( !ThreadPointerData || ((__int64)ThreadPointerData[3].Flink & 8) != 0 )
    return 0LL;
  if ( v5 )
    *v5 = HIDWORD(ThreadPointerData[1].Flink);
  if ( a4 )
    *a4 = -((__int64)ThreadPointerData[3].Flink & 1);
  return ThreadPointerData[1].Blink;
}
