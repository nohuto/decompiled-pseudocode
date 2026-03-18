/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015DC10
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x18015D3D0 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015CF10 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x18015DD40 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015DE50 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     McTemplateU0xddd @ 0x18015DEAC (McTemplateU0xddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Slice(CMagnifierRenderTarget *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx

  v2 = CMagnifierRenderTarget::EnsureRenderTargets(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x29Bu);
  }
  else
  {
    v5 = *((_DWORD *)this + 168);
    if ( v5 < *((_DWORD *)this + 166) )
    {
      v6 = *((_DWORD *)this + 169);
      if ( v6 < *((_DWORD *)this + 167) )
      {
        *((_DWORD *)this + 169) = v6 + 1;
      }
      else
      {
        v7 = *((_DWORD *)this + 164) - *((_DWORD *)this + 162);
        v8 = *((_DWORD *)this + 90) / v7;
        *((_DWORD *)this + 172) = v5 / v8 * (*((_DWORD *)this + 165) - *((_DWORD *)this + 163));
        *((_DWORD *)this + 171) = v7 * (v5 % v8);
        v9 = CMagnifierRenderTarget::SliceRect(this);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x2B1u);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xddd(
              v11,
              v10,
              *((_QWORD *)this + 44),
              *((_DWORD *)this + 168),
              *((_DWORD *)this + 171),
              *((_DWORD *)this + 172));
          ++*((_DWORD *)this + 168);
          *((_DWORD *)this + 169) = 0;
        }
      }
    }
  }
  if ( v4 < 0 || *((int *)this + 174) < 0 || *((_DWORD *)this + 168) >= *((_DWORD *)this + 166) )
    CMagnifierRenderTarget::StopSlicer(this);
  return (unsigned int)v4;
}
