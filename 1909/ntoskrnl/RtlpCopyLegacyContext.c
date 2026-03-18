/*
 * XREFs of RtlpCopyLegacyContext @ 0x140016DD0
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140016D08 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x1405E8408 (RtlCopyContext.c)
 *     KeCopyContextFromUmsContext @ 0x140880F84 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1408813A4 (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x140881624 (KeUpdatePrimaryThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x140016E00 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x14012B864 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x140314994 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x140314AF4 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86();
  if ( (a3 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64();
  if ( (a3 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm();
  if ( (a3 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64();
  return result;
}
