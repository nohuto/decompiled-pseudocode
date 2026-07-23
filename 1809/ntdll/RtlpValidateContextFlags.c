/*
 * XREFs of RtlpValidateContextFlags @ 0x180008730
 * Callers:
 *     RtlGetExtendedContextLength @ 0x1800033D0 (RtlGetExtendedContextLength.c)
 *     RtlGetExtendedContextLength2 @ 0x180003420 (RtlGetExtendedContextLength2.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlInitializeExtendedContext @ 0x18007C0B0 (RtlInitializeExtendedContext.c)
 *     RtlCopyContext @ 0x18008A620 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x1800F4F74 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r9d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x27FFFFA0) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFE0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v2 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
