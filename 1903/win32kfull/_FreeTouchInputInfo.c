/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01DF6A0
 * Callers:
 *     UnlinkSendListSms @ 0x1C002441C (UnlinkSendListSms.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C00A6380 (fnHkINLPMSG.c)
 *     CleanInputMessage @ 0x1C012A1C4 (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01DF1BC (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C022F030 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  LOBYTE(a2) = 20;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v5 = v4;
  if ( !v4 || *(_BYTE *)(_HMPheFromObject(v4) + 24) != 20 )
    return 0LL;
  HMDestroyObject(v5);
  return 1LL;
}
