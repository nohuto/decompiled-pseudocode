/*
 * XREFs of PsGetThreadFreezeCount @ 0x1401396C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadFreezeCount(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 544) + 624LL) + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 440LL) >> 3) & 1u);
}
