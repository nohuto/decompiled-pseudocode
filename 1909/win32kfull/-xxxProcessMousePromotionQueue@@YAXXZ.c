/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0207FB4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00E9610 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C02081E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C02083F0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00FEDC8 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C020738C (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0208530 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // edi
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // cl
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rbx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  memset(v12, 0, 24);
  if ( !qword_1C032A310 && qword_1C032A290 )
  {
    dword_1C032A318 &= ~1u;
    qword_1C032A310 = gptiCurrent;
    for ( i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032A290);
          ;
          i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032A290) )
    {
      v11 = (__int64)i;
      if ( !i )
        break;
      v5 = (unsigned __int8)HasCapture()
        && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL));
      if ( glDitMouseHandling || (*(_DWORD *)(v11 + 44) & 0x20) != 0 && v5 )
      {
        v6 = 1;
        v0 = 1;
      }
      else
      {
        v6 = 0;
      }
      PushW32ThreadLock(v11, v12, (__int64)SpbApcRundown);
      if ( gdwInAtomicOperation )
      {
        v7 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v7);
      xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v11, v6);
      EnterCrit(0LL, 1LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
      *(_QWORD *)(ThreadWin32Thread + 16) = v12[0];
      Win32FreePool(v11);
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned __int8)IsInputThread(v3, v2, v4) )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_26:
        qword_1C032A310 = 0LL;
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
