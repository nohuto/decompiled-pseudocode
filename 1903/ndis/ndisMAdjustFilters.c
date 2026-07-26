/*
 * XREFs of ndisMAdjustFilters @ 0x1C012E614
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMAdjustFilters(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_QWORD *)(a1 + 400) = *a2;
  return result;
}
