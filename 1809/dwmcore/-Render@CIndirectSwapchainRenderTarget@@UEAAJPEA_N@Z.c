/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x18015C980
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C094 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015CBA0 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Render(CIndirectSwapchainRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v5; // rbp
  int Buffer; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v2 = 0;
  *a2 = 0;
  if ( *((_BYTE *)this + 202) )
  {
    v5 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
    Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
    v2 = Buffer;
    if ( Buffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Buffer, 0xE4u);
    }
    else if ( *((_BYTE *)this + 202) && *((_QWORD *)this + 58) )
    {
      v8 = COffScreenRenderTarget::Render(this, a2);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xF0u);
      }
      else
      {
        *((_BYTE *)this + 450) = 1;
        v10 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v5);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xF4u);
        else
          *a2 = 1;
      }
    }
    if ( v2 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(v5);
  }
  return v2;
}
