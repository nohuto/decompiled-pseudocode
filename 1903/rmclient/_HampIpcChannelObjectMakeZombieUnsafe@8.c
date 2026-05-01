/*
 * XREFs of _HampIpcChannelObjectMakeZombieUnsafe@8 @ 0x100135F1
 * Callers:
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 * Callees:
 *     <none>
 */

int __fastcall HampIpcChannelObjectMakeZombieUnsafe(int a1, int a2)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx

  RtlRbRemoveNode(a2 + 16, a1);
  v4 = (_DWORD *)(a1 + 12);
  v5 = *(_DWORD **)(a2 + 28);
  if ( *v5 != a2 + 24 )
    __fastfail(3u);
  *v4 = a2 + 24;
  v4[1] = v5;
  *v5 = v4;
  *(_DWORD *)(a2 + 28) = v4;
  return RmpClientWnfDoWork(*(_DWORD **)a2);
}
