/*
 * XREFs of DestroyThreadsMessages @ 0x1C000C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0006580 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     FreeQEntry @ 0x1C000F9A0 (FreeQEntry.c)
 */

_UNKNOWN **__fastcall DestroyThreadsMessages(_QWORD *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  struct tagMLIST *v3; // r14
  struct tagQMSG *v5; // rbx
  __int64 v7; // rbx
  struct tagQMSG *v8; // rsi
  __int64 v9; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (struct tagMLIST *)(a1 + 3);
  v5 = (struct tagQMSG *)a1[3];
  if ( v5 )
  {
    do
    {
      v8 = *(struct tagQMSG **)v5;
      if ( *((_QWORD *)v5 + 13) == a2 )
      {
        if ( (struct tagQMSG *)a1[10] == v5 )
          a1[10] = 0LL;
        CleanEventMessage(v5);
        result = (_UNKNOWN **)DelQEntry(v3, v5, 1LL);
      }
      v5 = v8;
    }
    while ( v8 );
  }
  v7 = a1[6];
  if ( v7 )
  {
    do
    {
      v9 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(v3, (struct tagQMSG *)v7);
        CleanEventMessage((struct tagQMSG *)v7);
        result = (_UNKNOWN **)FreeQEntry(v7);
      }
      v7 = v9;
    }
    while ( v9 );
  }
  return result;
}
