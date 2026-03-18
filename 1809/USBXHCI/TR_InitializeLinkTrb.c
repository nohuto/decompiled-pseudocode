/*
 * XREFs of TR_InitializeLinkTrb @ 0x1C0024B1C
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C00273D4 (Control_Transfer_MapIntoRing.c)
 *     Isoch_InsertLinkTrb @ 0x1C0029A6C (Isoch_InsertLinkTrb.c)
 *     Bulk_InsertLinkTrb @ 0x1C002FA28 (Bulk_InsertLinkTrb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_InitializeLinkTrb(__int64 a1, int a2, __int64 a3, char a4)
{
  int v4; // r10d
  __int64 result; // rax

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 12) = 6144;
  if ( a4 )
    v4 = 6145 - (*(_DWORD *)(a1 + 200) != 0);
  else
    v4 = *(_DWORD *)(a1 + 200) & 1 | 0x1800;
  *(_DWORD *)(a3 + 12) = v4;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL) & 0x800LL) != 0 || !a4 && (unsigned int)(a2 - 5) <= 2 )
    v4 |= 0x10u;
  *(_DWORD *)(a3 + 12) = v4;
  result = *(_DWORD *)(a3 + 8) & 0x3FFFFF;
  *(_DWORD *)(a3 + 8) = result | (*(unsigned __int16 *)(a1 + 112) << 22);
  return result;
}
