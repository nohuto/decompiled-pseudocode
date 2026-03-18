/*
 * XREFs of ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x180193EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180193F40 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801948EC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::PostPresent(CIndirectSwapchainRenderTarget *this, char a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v4; // rcx
  signed int Buffer; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  if ( a2 )
  {
    v4 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
    if ( *((_BYTE *)this + 440) || *((_BYTE *)this + 441) )
    {
      if ( *((_QWORD *)this + 57)
        || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(v4), v2 = Buffer, Buffer >= 0) )
      {
        v7 = CIndirectSwapchainRenderTarget::Present(this, 0, 0);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x131u, 0LL);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Buffer, 0x12Cu, 0LL);
      }
    }
  }
  return v2;
}
