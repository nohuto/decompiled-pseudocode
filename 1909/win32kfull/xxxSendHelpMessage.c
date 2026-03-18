/*
 * XREFs of xxxSendHelpMessage @ 0x1C024814C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetMessagePos @ 0x1C00F1E60 (_GetMessagePos.c)
 */

__int64 __fastcall xxxSendHelpMessage(__int64 *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int MessagePos; // eax
  _DWORD v8[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+74h] [rbp-14h]

  v8[3] = 0;
  v8[0] = 40;
  v8[1] = a2;
  v8[2] = a3;
  v9 = a4;
  v10 = a5;
  MessagePos = GetMessagePos((__int64)BugCheckParameter2, a2, a3);
  v12 = SHIWORD(MessagePos);
  v11 = (__int16)MessagePos;
  _InterlockedAdd(&glSendMessage, 1u);
  return xxxSendTransformableMessageTimeout(
           BugCheckParameter2,
           0x53u,
           0LL,
           (struct _LARGE_STRING *)v8,
           0,
           0,
           0LL,
           1u,
           1);
}
