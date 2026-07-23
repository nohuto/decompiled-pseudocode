/*
 * XREFs of IoSetFileObjectIgnoreSharing @ 0x14081DB40
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 */

NTSTATUS __stdcall IoSetFileObjectIgnoreSharing(PFILE_OBJECT FileObject)
{
  NTSTATUS result; // eax
  _DWORD *v2; // [rsp+38h] [rbp+10h] BYREF

  result = IopAllocateFileObjectExtension((__int64)FileObject, (__int64 *)&v2);
  if ( result >= 0 )
  {
    *v2 |= 1u;
    return 0;
  }
  return result;
}
