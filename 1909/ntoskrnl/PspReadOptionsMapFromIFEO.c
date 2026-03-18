/*
 * XREFs of PspReadOptionsMapFromIFEO @ 0x140685310
 * Callers:
 *     PspReadIFEOMitigationOptions @ 0x140685214 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140685294 (PspReadIFEOMitigationAuditOptions.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DD260 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadOptionsMapFromIFEO(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v5; // rcx
  int ImageFileKeyOption; // ebx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = a4;
  if ( !a1 )
    return 3221225485LL;
  v5 = *(void **)(a1 + 192);
  if ( !v5 )
    return 3221225485LL;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(v5, 16, (__int64)&v8);
  if ( ImageFileKeyOption == -2147483643 )
    ImageFileKeyOption = -1073741820;
  if ( ImageFileKeyOption >= 0 )
    memset((void *)(a3 + (unsigned int)v8), 0, (unsigned int)(16 - v8));
  return (unsigned int)ImageFileKeyOption;
}
