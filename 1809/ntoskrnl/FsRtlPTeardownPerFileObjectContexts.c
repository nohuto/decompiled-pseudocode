/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x140698850
 * Callers:
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x140114214 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x140114284 (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
