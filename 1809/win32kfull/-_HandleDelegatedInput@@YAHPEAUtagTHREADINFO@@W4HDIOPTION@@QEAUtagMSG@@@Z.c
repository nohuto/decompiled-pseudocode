/*
 * XREFs of ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C000747C
 * Callers:
 *     NtUserUndelegateInput @ 0x1C012A800 (NtUserUndelegateInput.c)
 *     NtUserHandleDelegatedInput @ 0x1C0217B30 (NtUserHandleDelegatedInput.c)
 * Callees:
 *     ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01CEA54 (-_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01CEAF4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 */

__int64 __fastcall _HandleDelegatedInput(__int64 a1, unsigned int a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  struct tagQMSG *i; // rax
  __int64 result; // rax
  struct tagQMSG *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( a3 )
  {
    result = _FindQMsgFromMsg((struct tagTHREADINFO *const)a1, a3, &v8);
    if ( !(_DWORD)result )
      return result;
    v3 = v8;
  }
  for ( i = *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 24LL);
        i != v3;
        i = _HandleDelegatedInputWorker((struct tagTHREADINFO *)a1, a2, i) )
  {
    ;
  }
  return 1LL;
}
