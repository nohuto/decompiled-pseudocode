/*
 * XREFs of FreeImeHotKeys @ 0x1C013EEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *FreeImeHotKeys()
{
  __int64 *result; // rax
  __int64 v1; // rbx

  result = (__int64 *)gpImeHotKeyListHeader;
  if ( gpImeHotKeyListHeader )
  {
    do
    {
      v1 = *result;
      Win32FreePool(result);
      gpImeHotKeyListHeader = v1;
      result = (__int64 *)v1;
    }
    while ( v1 );
  }
  return result;
}
