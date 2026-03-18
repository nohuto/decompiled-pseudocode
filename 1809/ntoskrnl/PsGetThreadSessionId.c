/*
 * XREFs of PsGetThreadSessionId @ 0x1405F6300
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x1400897B0 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
