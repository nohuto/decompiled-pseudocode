/*
 * XREFs of _FreeGestureInfo @ 0x1C01D8130
 * Callers:
 *     UnlinkSendListSms @ 0x1C00222EC (UnlinkSendListSms.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPMSG @ 0x1C00439D0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     CleanInputMessage @ 0x1C0104D3C (CleanInputMessage.c)
 *     SendGestureMessage @ 0x1C01D7DEC (SendGestureMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C01EE510 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01EE650 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C01F1540 (NtUserInjectGesture.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  LOBYTE(a2) = 21;
  v2 = (_DWORD *)HMValidateHandleNoSecure(a1, a2);
  if ( !v2 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v2 + gSharedInfo[1] + 24LL) != 21 )
    return 0LL;
  HMDestroyObject(v2);
  return 1LL;
}
