/*
 * XREFs of IsWindowDestroyed @ 0x1C00C47A8
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDestroyed(__int64 a1)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 19LL) >> 7;
}
