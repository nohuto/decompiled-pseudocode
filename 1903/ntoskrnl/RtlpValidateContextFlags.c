/*
 * XREFs of RtlpValidateContextFlags @ 0x140016F90
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140016918 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140016D1C (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x140016D58 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140016E3C (RtlInitializeExtendedContext2.c)
 *     RtlpReadExtendedContext @ 0x1405E76E4 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1405E7C38 (RtlCopyContext.c)
 *     RtlpWriteExtendedContext @ 0x1406C9E54 (RtlpWriteExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406CA2C8 (RtlpWow64SanitizeContextFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r8d

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
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
