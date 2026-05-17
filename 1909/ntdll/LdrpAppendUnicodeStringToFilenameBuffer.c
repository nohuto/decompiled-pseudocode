/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x180025788
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpPreprocessDllName @ 0x180025240 (LdrpPreprocessDllName.c)
 *     LdrpBuildSystem32FileName @ 0x180025714 (LdrpBuildSystem32FileName.c)
 * Callees:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18002580C (LdrpAllocateFileNameBufferIfNeeded.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int FileNameBufferIfNeeded; // edi

  FileNameBufferIfNeeded = 0;
  if ( *a2 )
  {
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, *a1 + 2 + (unsigned int)*a2);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), *((const void **)a2 + 1), *a2);
      *a1 += *a2;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
