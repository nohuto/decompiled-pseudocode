/*
 * XREFs of PopResetRangeEnum @ 0x14013D798
 * Callers:
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResetRangeEnum(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[8];
  a1[14] = 0LL;
  a1[13] = result;
  return result;
}
