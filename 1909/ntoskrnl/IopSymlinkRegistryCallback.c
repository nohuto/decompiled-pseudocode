/*
 * XREFs of IopSymlinkRegistryCallback @ 0x1407870E0
 * Callers:
 *     IopSymlinkRegistryInitCallback @ 0x14019B380 (IopSymlinkRegistryInitCallback.c)
 * Callees:
 *     IopSymlinkQueryEnabledClasses @ 0x14078710C (IopSymlinkQueryEnabledClasses.c)
 */

__int64 IopSymlinkRegistryCallback()
{
  __int64 result; // rax

  result = IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\FileSystems\\NTFS");
  if ( (int)result < 0 )
    return IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem");
  return result;
}
