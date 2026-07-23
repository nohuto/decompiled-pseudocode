/*
 * XREFs of sub_180105FE0 @ 0x180105FE0
 * Callers:
 *     sub_1800F14C0 @ 0x1800F14C0 (sub_1800F14C0.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

char __fastcall sub_180105FE0(_DWORD *a1)
{
  int v1; // edi
  char v2; // bl

  v1 = (int)a1;
  v2 = 0;
  if ( sub_180019C74(a1, "RtlWalkHeap") )
    return sub_1801061B8(v1);
  return v2;
}
