/*
 * XREFs of _GetParent @ 0x1C00F1134
 * Callers:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0008C1C (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     NtUserGetAncestor @ 0x1C00F1010 (NtUserGetAncestor.c)
 *     _GetAncestor @ 0x1C0124A04 (_GetAncestor.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetParent(_QWORD *a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
  if ( !v1 )
    return 0LL;
  if ( v1 == 64 )
    return a1[10];
  return a1[12];
}
