/*
 * XREFs of ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x18015C290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x18015C310 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015CBA0 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::PostPresent(CIndirectSwapchainRenderTarget *this, char a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v4; // rcx
  int Buffer; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  if ( a2 )
  {
    v4 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
    if ( *((_BYTE *)this + 448) || *((_BYTE *)this + 449) )
    {
      if ( *((_QWORD *)this + 58)
        || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(v4), v2 = Buffer, Buffer >= 0) )
      {
        v7 = CIndirectSwapchainRenderTarget::Present(this, 0, 0);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x133u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Buffer, 0x12Eu);
      }
    }
  }
  return v2;
}
