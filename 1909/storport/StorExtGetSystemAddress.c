/*
 * XREFs of StorExtGetSystemAddress @ 0x1C003C1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall StorExtGetSystemAddress(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v1 = *(_BYTE *)(a1 + 2) == 40 ? *(_QWORD *)(a1 + 96) : *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 104);
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    return *(PVOID *)(v2 + 24);
  return MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0x40000010u);
}
