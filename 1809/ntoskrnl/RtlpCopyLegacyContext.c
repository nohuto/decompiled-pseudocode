/*
 * XREFs of RtlpCopyLegacyContext @ 0x1400A21D4
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400A210C (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x140620E78 (RtlCopyContext.c)
 *     KeCopyContextFromUmsContext @ 0x140846424 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x140846844 (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x140846AC4 (KeUpdatePrimaryThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x1400A2204 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x14012E30C (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x1402F6358 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1402F64B8 (RtlpCopyLegacyContextArm64.c)
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
