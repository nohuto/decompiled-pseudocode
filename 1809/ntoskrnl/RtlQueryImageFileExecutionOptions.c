/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x140734ED4
 * Callers:
 *     PsBootPhaseComplete @ 0x140734C1C (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406B2CE4 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x1406BC640 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(void *a1, const WCHAR *a2, __int64 a3, ULONG *a4)
{
  int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = a1;
  ImageFileKeyOption = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( ImageFileKeyOption >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, 4, a4, 4u, 0LL);
    if ( RtlpDisableIFEOCaching )
      ZwClose(Handle);
  }
  return (unsigned int)ImageFileKeyOption;
}
