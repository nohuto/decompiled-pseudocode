/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x140699A10
 * Callers:
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x140114284 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x1401142F4 (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExFreePoolWithTag(P, 0);
  }
}
