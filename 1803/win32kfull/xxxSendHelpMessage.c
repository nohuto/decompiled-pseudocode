/*
 * XREFs of xxxSendHelpMessage @ 0x1C0206B18
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     _GetMessagePos @ 0x1C00F5880 (_GetMessagePos.c)
 */

__int64 __fastcall xxxSendHelpMessage(__int64 *BugCheckParameter2, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  int MessagePos; // eax
  _DWORD v8[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+74h] [rbp-14h]

  v8[0] = 40;
  v8[1] = a2;
  v8[2] = a3;
  v9 = a4;
  v10 = a5;
  MessagePos = GetMessagePos((__int64)BugCheckParameter2, a2);
  v12 = SHIWORD(MessagePos);
  v11 = (__int16)MessagePos;
  _InterlockedAdd(&glSendMessage, 1u);
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x53u, 0LL, (__int64)v8, 0, 0, 0LL, 1, 1);
}
