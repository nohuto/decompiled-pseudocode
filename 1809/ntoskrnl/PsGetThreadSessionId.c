/*
 * XREFs of PsGetThreadSessionId @ 0x1405F7300
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
