/*
 * XREFs of SetUnavailableInputSource @ 0x1C007AF50
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall SetUnavailableInputSource(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0;
    a1[1] = 0;
  }
}
