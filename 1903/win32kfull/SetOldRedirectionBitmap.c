/*
 * XREFs of SetOldRedirectionBitmap @ 0x1C0041B78
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1C0044BD0 (DeleteOldRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

__int64 __fastcall SetOldRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax

  v3 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
  {
    *(_QWORD *)(Prop + 8) = a2;
    return 1;
  }
  return v3;
}
