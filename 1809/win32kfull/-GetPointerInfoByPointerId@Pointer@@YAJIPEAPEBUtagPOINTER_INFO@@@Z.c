/*
 * XREFs of ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0221ADC
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C0237B4C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C023851C (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0239D90 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC1F8 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0221B3C (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall Pointer::GetPointerInfoByPointerId(Pointer *this, _QWORD *a2, const struct tagPOINTER_INFO **a3)
{
  __int16 v3; // bx
  __int64 ThreadWin32Thread; // rax
  struct _LIST_ENTRY *ThreadPointerData; // rax
  const struct tagPOINTER_INFO **v7; // r8
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int16)this;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadPointerData = GetThreadPointerData((struct _LIST_ENTRY *)(ThreadWin32Thread + 1080), v3, &v9, 0LL);
  if ( ThreadPointerData )
    return Pointer::GetPointerInfoByPointerMsgId((Pointer *)ThreadPointerData, (unsigned __int64)a2, v7);
  else
    return 3221225485LL;
}
