/*
 * XREFs of FreeMessageList @ 0x1C000C730
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0006580 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     FreeQEntry @ 0x1C000F9A0 (FreeQEntry.c)
 */

__int64 __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  struct tagQMSG *v3; // rsi
  __int64 result; // rax
  struct tagQMSG *v5; // rbx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    result = DelQEntry(a1, i, 1LL);
  }
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v5 = (struct tagQMSG *)*((_QWORD *)v3 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, v3);
      CleanEventMessage(v3);
      result = FreeQEntry(v3);
      v3 = v5;
    }
    while ( v5 );
  }
  return result;
}
