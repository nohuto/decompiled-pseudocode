/*
 * XREFs of ParseInteger @ 0x1C002CB1C
 * Callers:
 *     ParseArg @ 0x1C0012808 (ParseArg.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 * Callees:
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall ParseInteger(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx

  v3 = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 2) = 1;
  memmove((void *)(a2 + 16), *a1, a3);
  *a1 = (char *)*a1 + v3;
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("0x%I64x");
  return 0LL;
}
