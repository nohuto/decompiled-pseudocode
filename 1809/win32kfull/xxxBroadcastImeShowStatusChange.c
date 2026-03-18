/*
 * XREFs of xxxBroadcastImeShowStatusChange @ 0x1C01CFFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01CF9E0 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxBroadcastImeShowStatusChange(__int64 a1, int a2)
{
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x2A9 )
  {
    gfIMEShowStatus = a2 != 0;
    xxxNotifyImeShowStatus((struct tagWND *)a1);
  }
  return 1LL;
}
