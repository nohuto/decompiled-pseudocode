/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01CDA2C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00E6660 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01CDC04 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01CDDE8 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C006009C (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C01CCEE4 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01CDF18 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  if ( !qword_1C0326C40 && qword_1C0326BC0 )
  {
    dword_1C0326C48 &= ~1u;
    qword_1C0326C40 = gptiCurrent;
    for ( i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0326BC0);
          ;
          i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0326BC0) )
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
      PushW32ThreadLock(v13, v15, (__int64)SpbApcRundown);
      if ( gdwInAtomicOperation )
      {
        v8 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation, v9, v10);
      xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v13, v7);
      EnterCrit(0LL, 1LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
      *(_QWORD *)(ThreadWin32Thread + 16) = v15[0];
      Win32FreePool(v13);
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned __int8)IsInputThread(v3, v2, v4, v5) )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_26:
        qword_1C0326C40 = 0LL;
        return;
      }
    }
    else
    {
      if ( v0 )
        goto LABEL_26;
      v14 = gdwInAtomicOperation;
      if ( gdwInAtomicOperation )
      {
        v3 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    UserSessionSwitchLeaveCrit(v3, v14, v4, v5);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    goto LABEL_26;
  }
}
