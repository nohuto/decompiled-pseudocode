/*
 * XREFs of AudioDGGetStartupStatus @ 0x140014A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( hHandle )
    WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  return (unsigned int)dword_140085FE0;
}
