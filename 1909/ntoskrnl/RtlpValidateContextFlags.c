/*
 * XREFs of RtlpValidateContextFlags @ 0x140017380
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140016D08 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14001710C (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength2 @ 0x140017148 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14001722C (RtlInitializeExtendedContext2.c)
 *     RtlpReadExtendedContext @ 0x1405E7EB4 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x1405E8408 (RtlCopyContext.c)
 *     RtlpWriteExtendedContext @ 0x1406C886C (RtlpWriteExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1406C8CE0 (RtlpWow64SanitizeContextFlags.c)
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
