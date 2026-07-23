/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1401B9470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(File1MappedAsAnImage);
}
