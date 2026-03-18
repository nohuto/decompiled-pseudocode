/*
 * XREFs of InitFunctionTables @ 0x1C037F620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *InitFunctionTables())(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4, ULONG64 a5)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *result)(struct tagWND *, __int64, unsigned __int64, __int64, ULONG64); // rax

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
  *(_WORD *)(gpsi + 334LL) = 312;
  *(_WORD *)(gpsi + 340LL) = 328;
  *(_WORD *)(gpsi + 328LL) = 392;
  *(_WORD *)(gpsi + 332LL) = 336;
  *(_WORD *)(gpsi + 384LL) = 368;
  v2 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 312;
  do
  {
    v3 = v0++ & 0x1F;
    mpFnidPfn[v3] = (__int64)IsMulDestroyBrushInternalSupported;
    --v2;
  }
  while ( v2 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C03260A8 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C03260B0 = (__int64)xxxWrapMenuWindowProc;
  qword_1C03260B8 = (__int64)xxxWrapDesktopWndProc;
  qword_1C0326158 = (__int64)xxxWrapSendMessage;
  qword_1C0326128 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C0326130 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C0326160 = (__int64)xxxSendMessageFF;
  qword_1C0326168 = (__int64)xxxSendMessageEx;
  qword_1C0326170 = (__int64)xxxWrapCallWindowProc;
  qword_1C0326178 = (__int64)xxxWrapSendMessageBSM;
  qword_1C03260D0 = (__int64)xxxWrapSwitchWndProc;
  qword_1C0326188 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0326190 = (__int64)xxxWrapSendMessageCallback;
  qword_1C03260C0 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C03260C8 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}
