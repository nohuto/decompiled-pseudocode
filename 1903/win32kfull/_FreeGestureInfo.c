/*
 * XREFs of _FreeGestureInfo @ 0x1C0214470
 * Callers:
 *     UnlinkSendListSms @ 0x1C002441C (UnlinkSendListSms.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C00A6380 (fnHkINLPMSG.c)
 *     CleanInputMessage @ 0x1C012A1C4 (CleanInputMessage.c)
 *     SendGestureMessage @ 0x1C021412C (SendGestureMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C022C830 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C022C990 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C0230690 (NtUserInjectGesture.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  LOBYTE(a2) = 21;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v5 = v4;
  if ( !v4 || *(_BYTE *)(_HMPheFromObject(v4) + 24) != 21 )
    return 0LL;
  HMDestroyObject(v5);
  return 1LL;
}
