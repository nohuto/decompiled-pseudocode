/*
 * XREFs of PsGetThreadSessionId @ 0x1405ECB60
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
