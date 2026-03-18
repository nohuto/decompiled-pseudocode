/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01A9250
 * Callers:
 *     UnlinkSendListSms @ 0x1C00222EC (UnlinkSendListSms.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x1C00439D0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     CleanInputMessage @ 0x1C0104D3C (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01A9078 (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C01EFEF0 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
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
