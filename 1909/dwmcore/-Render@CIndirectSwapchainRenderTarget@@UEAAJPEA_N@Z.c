/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x1801946A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180193C34 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801948EC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801949D0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Render(CIndirectSwapchainRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v5; // rbp
  signed int Buffer; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Buffer, 0xE2u, 0LL);
    }
    else if ( *((_BYTE *)this + 202) && *((_QWORD *)this + 57) )
    {
      v8 = COffScreenRenderTarget::Render(this, a2);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xEEu, 0LL);
      }
      else
      {
        *((_BYTE *)this + 442) = 1;
        v10 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v5);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xF2u, 0LL);
        else
          *a2 = 1;
      }
    }
    if ( v2 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(v5);
  }
  return v2;
}
