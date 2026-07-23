/*
 * XREFs of KeAbEntryFree @ 0x140109E08
 * Callers:
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 */

__int64 __fastcall KeAbEntryFree(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ecx

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1);
  result = *(_DWORD *)(a1 + 88) & 0x1FFFF;
  v6 = *(_DWORD *)(a1 + 88) & 0xFFFE0000;
  *(_BYTE *)(a1 + 25) &= ~1u;
  *a3 = result;
  *(_DWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
