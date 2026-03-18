/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0208264
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C010F290 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0208498 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C02086A0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01243F4 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C020763C (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C02087E0 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // edi
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // cl
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  memset(v14, 0, 24);
  if ( !qword_1C032C320 && qword_1C032C2A0 )
  {
    dword_1C032C328 &= ~1u;
    qword_1C032C320 = gptiCurrent;
    for ( i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C2A0);
          ;
          i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C2A0) )
    {
      v13 = (__int64)i;
      if ( !i )
        break;
      v6 = (unsigned __int8)HasCapture()
        && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL));
      if ( glDitMouseHandling || (*(_DWORD *)(v13 + 44) & 0x20) != 0 && v6 )
      {
        v7 = 1;
        v0 = 1;
      }
      else
      {
        v7 = 0;
      }
      PushW32ThreadLock(v13, v14, (__int64)SpbApcRundown, v5);
      if ( gdwInAtomicOperation )
      {
        v8 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v8);
      xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v13, v7);
      EnterCrit(0LL, 1LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
      *(_QWORD *)(ThreadWin32Thread + 16) = v14[0];
      Win32FreePool(v13);
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned __int8)IsInputThread(v3, v2, v4) )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_26:
        qword_1C032C320 = 0LL;
        return;
      }
    }
    else
    {
      if ( v0 )
        goto LABEL_26;
      if ( gdwInAtomicOperation )
      {
        v3 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    UserSessionSwitchLeaveCrit(v3);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    goto LABEL_26;
  }
}
