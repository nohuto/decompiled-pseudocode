/*
 * XREFs of InitFunctionTables @ 0x1C036E6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *InitFunctionTables())(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *result)(struct tagWND *, __int64, __int64, __int64, ULONG64); // rax

  v0 = 0LL;
  v1 = 304LL;
  *(_QWORD *)(gpsi + 272LL) = 4LL;
  *(_QWORD *)(gpsi + 280LL) = 0LL;
  *(_QWORD *)(gpsi + 288LL) = 3LL;
  *(_QWORD *)(gpsi + 296LL) = 1LL;
  do
  {
    *(_QWORD *)(v1 + gpsi) = 0LL;
    v1 += 8LL;
  }
  while ( v1 < 320 );
  *(_WORD *)(gpsi + 334LL) = 320;
  *(_WORD *)(gpsi + 340LL) = 336;
  *(_WORD *)(gpsi + 328LL) = 400;
  *(_WORD *)(gpsi + 332LL) = 344;
  *(_WORD *)(gpsi + 384LL) = 376;
  v2 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 320;
  do
  {
    v3 = v0++ & 0x1F;
    mpFnidPfn[v3] = (__int64)IsMulDestroyBrushInternalSupported;
    --v2;
  }
  while ( v2 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C0316748 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0316750 = (__int64)xxxWrapMenuWindowProc;
  qword_1C0316758 = (__int64)xxxWrapDesktopWndProc;
  qword_1C03167F8 = (__int64)xxxWrapSendMessage;
  qword_1C03167C8 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C03167D0 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C0316800 = (__int64)xxxSendMessageFF;
  qword_1C0316808 = (__int64)xxxSendMessageEx;
  qword_1C0316810 = (__int64)xxxWrapCallWindowProc;
  qword_1C0316818 = (__int64)xxxWrapSendMessageBSM;
  qword_1C0316770 = (__int64)xxxWrapSwitchWndProc;
  qword_1C0316828 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0316830 = (__int64)xxxWrapSendMessageCallback;
  qword_1C0316760 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0316768 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}
