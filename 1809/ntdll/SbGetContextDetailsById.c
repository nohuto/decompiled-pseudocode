/*
 * XREFs of SbGetContextDetailsById @ 0x180027C44
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800279F0 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbpDetermineDllContext @ 0x180028934 (SbpDetermineDllContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SbGetContextDetailsById(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 <= 4 )
  {
    *a2 = (char *)&SbSupportedOsList + 32 * (int)a1;
    return 1LL;
  }
  return result;
}
