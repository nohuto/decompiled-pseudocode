/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01CB7C0
 * Callers:
 *     fnHkINLPMSG @ 0x1C0016960 (fnHkINLPMSG.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     UnlinkSendListSms @ 0x1C00D4EBC (UnlinkSendListSms.c)
 *     CleanInputMessage @ 0x1C00D5D60 (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01CB5FC (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C0217180 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  LOBYTE(a2) = 20;
  v2 = (_DWORD *)HMValidateHandleNoSecure(a1, a2);
  if ( !v2 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v2 + gSharedInfo[1] + 24LL) != 20 )
    return 0LL;
  HMDestroyObject(v2);
  return 1LL;
}
