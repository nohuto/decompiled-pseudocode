/*
 * XREFs of MultiUserGreDeleteScripts @ 0x1C011C040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 MultiUserGreDeleteScripts()
{
  __int64 result; // rax

  if ( qword_1C032A018 )
    return Win32FreePool(qword_1C032A018 - 2LL * gdwOffset);
  return result;
}
