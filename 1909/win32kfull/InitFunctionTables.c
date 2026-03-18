/*
 * XREFs of InitFunctionTables @ 0x1C037FBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 */

__int64 (__fastcall *__fastcall InitFunctionTables(
        int a1))(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *result)(struct tagWND *, unsigned int, __int64, __int64, ULONG64); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 3, 11, (__int64)&WPP_d004ad31927635d751620a95da27af8f_Traceguids);
  v1 = 0LL;
  v2 = 304LL;
  *(_QWORD *)(gpsi + 272LL) = 4LL;
  *(_QWORD *)(gpsi + 280LL) = 0LL;
  *(_QWORD *)(gpsi + 288LL) = 3LL;
  *(_QWORD *)(gpsi + 296LL) = 1LL;
  do
  {
    *(_QWORD *)(v2 + gpsi) = 0LL;
    v2 += 8LL;
  }
  while ( v2 < 320 );
  *(_WORD *)(gpsi + 334LL) = 320;
  *(_WORD *)(gpsi + 340LL) = 336;
  *(_WORD *)(gpsi + 328LL) = 400;
  *(_WORD *)(gpsi + 332LL) = 344;
  *(_WORD *)(gpsi + 384LL) = 376;
  v3 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 320;
  do
  {
    v4 = v1++ & 0x1F;
    mpFnidPfn[v4] = (__int64)IsMulDestroyBrushInternalSupported;
    --v3;
  }
  while ( v3 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C0329778 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0329780 = (__int64)xxxWrapMenuWindowProc;
  qword_1C0329788 = (__int64)xxxWrapDesktopWndProc;
  qword_1C0329828 = (__int64)xxxWrapSendMessage;
  qword_1C03297F8 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C0329800 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C0329830 = (__int64)xxxSendMessageFF;
  qword_1C0329838 = (__int64)xxxSendMessageEx;
  qword_1C0329840 = (__int64)xxxWrapCallWindowProc;
  qword_1C0329848 = (__int64)xxxWrapSendMessageBSM;
  qword_1C03297A0 = (__int64)xxxWrapSwitchWndProc;
  qword_1C0329858 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0329860 = (__int64)xxxWrapSendMessageCallback;
  qword_1C0329790 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0329798 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}
