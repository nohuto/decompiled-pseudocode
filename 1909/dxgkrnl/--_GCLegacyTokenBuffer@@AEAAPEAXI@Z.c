/*
 * XREFs of ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00136D8
 * Callers:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C001351C (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C001370C (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00160E0 (-Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00135D4 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

CLegacyTokenBuffer *__fastcall CLegacyTokenBuffer::`scalar deleting destructor'(CLegacyTokenBuffer *P)
{
  CLegacyTokenBuffer::Reset(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
