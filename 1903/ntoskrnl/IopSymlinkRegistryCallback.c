/*
 * XREFs of IopSymlinkRegistryCallback @ 0x140784D80
 * Callers:
 *     IopSymlinkRegistryInitCallback @ 0x14019AD20 (IopSymlinkRegistryInitCallback.c)
 * Callees:
 *     IopSymlinkQueryEnabledClasses @ 0x140784DAC (IopSymlinkQueryEnabledClasses.c)
 */

__int64 IopSymlinkRegistryCallback()
{
  __int64 result; // rax

  result = IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\FileSystems\\NTFS");
  if ( (int)result < 0 )
    return IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem");
  return result;
}
