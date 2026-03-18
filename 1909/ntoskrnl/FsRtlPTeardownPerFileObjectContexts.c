/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1406BDF70
 * Callers:
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 * Callees:
 *     IoGetFileObjectFilterContext @ 0x1401164F4 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x140116564 (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
