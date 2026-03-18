/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01DF520
 * Callers:
 *     UnlinkSendListSms @ 0x1C002A88C (UnlinkSendListSms.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C0047160 (fnHkINLPMSG.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     CleanInputMessage @ 0x1C0105424 (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01DF03C (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C022EA10 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  LOBYTE(a2) = 20;
  v3 = HMValidateHandleNoSecure(a1, a2, a3);
  v4 = v3;
  if ( !v3 || *(_BYTE *)(_HMPheFromObject(v3) + 24) != 20 )
    return 0LL;
  HMDestroyObject(v4);
  return 1LL;
}
