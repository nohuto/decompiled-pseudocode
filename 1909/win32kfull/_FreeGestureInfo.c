/*
 * XREFs of _FreeGestureInfo @ 0x1C0213F30
 * Callers:
 *     UnlinkSendListSms @ 0x1C002A88C (UnlinkSendListSms.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     fnHkINLPMSG @ 0x1C0047160 (fnHkINLPMSG.c)
 *     CleanInputMessage @ 0x1C0105424 (CleanInputMessage.c)
 *     SendGestureMessage @ 0x1C0213BEC (SendGestureMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C022C210 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C022C370 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C0230070 (NtUserInjectGesture.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  LOBYTE(a2) = 21;
  v3 = HMValidateHandleNoSecure(a1, a2, a3);
  v4 = v3;
  if ( !v3 || *(_BYTE *)(_HMPheFromObject(v3) + 24) != 21 )
    return 0LL;
  HMDestroyObject(v4);
  return 1LL;
}
