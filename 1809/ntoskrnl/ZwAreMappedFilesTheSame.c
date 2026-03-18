/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1401B92F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(File1MappedAsAnImage, File2MappedAsFile, v2);
}
