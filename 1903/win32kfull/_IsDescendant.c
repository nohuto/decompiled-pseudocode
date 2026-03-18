/*
 * XREFs of _IsDescendant @ 0x1C00247A4
 * Callers:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C002473C (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     CalcVisRgn @ 0x1C00C4BF0 (CalcVisRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDescendant(__int64 a1, __int64 a2)
{
  while ( a1 != a2 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(a2 + 40) + 42LL) & 0x3FFF) == 0x29D )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 104);
  }
  return 1LL;
}
