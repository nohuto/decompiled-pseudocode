/*
 * XREFs of EngCTGetCurrentGamma @ 0x1C0112870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall EngCTGetCurrentGamma(HDEV hdev)
{
  ULONG result; // eax

  result = gulGamma;
  if ( gulGamma == 1200 )
  {
    result = *((_DWORD *)hdev + 612);
    if ( !result )
      return 1200;
  }
  return result;
}
