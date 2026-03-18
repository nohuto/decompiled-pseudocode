/*
 * XREFs of xxxBroadcastImeShowStatusChange @ 0x1C01ACE90
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01AC7CC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxBroadcastImeShowStatusChange(__int64 a1, int a2)
{
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x2A9 )
  {
    gfIMEShowStatus = a2 != 0;
    xxxNotifyImeShowStatus((struct tagWND *)a1);
  }
  return 1LL;
}
