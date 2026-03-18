/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801AAD50
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1801AA4A0 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801A9FA0 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x1801AAE88 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801AAFA0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     McTemplateU0xddd @ 0x1801AAFFC (McTemplateU0xddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Slice(CMagnifierRenderTarget *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  signed int v9; // eax
  int v10; // edx
  __int64 v11; // rcx

  v2 = CMagnifierRenderTarget::EnsureRenderTargets(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x29Fu, 0LL);
  }
  else
  {
    v5 = *((_DWORD *)this + 166);
    if ( v5 < *((_DWORD *)this + 164) )
    {
      v6 = *((_DWORD *)this + 167);
      if ( v6 < *((_DWORD *)this + 165) )
      {
        *((_DWORD *)this + 167) = v6 + 1;
      }
      else
      {
        v7 = *((_DWORD *)this + 162) - *((_DWORD *)this + 160);
        v8 = *((_DWORD *)this + 22) / v7;
        *((_DWORD *)this + 170) = v5 / v8 * (*((_DWORD *)this + 163) - *((_DWORD *)this + 161));
        *((_DWORD *)this + 169) = v7 * (v5 % v8);
        v9 = CMagnifierRenderTarget::SliceRect(this);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x2B5u, 0LL);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xddd(
              v11,
              v10,
              *((_QWORD *)this + 44),
              *((_DWORD *)this + 166),
              *((_DWORD *)this + 169),
              *((_DWORD *)this + 170));
          ++*((_DWORD *)this + 166);
          *((_DWORD *)this + 167) = 0;
        }
      }
    }
  }
  if ( v4 < 0 || *((int *)this + 172) < 0 || *((_DWORD *)this + 166) >= *((_DWORD *)this + 164) )
    CMagnifierRenderTarget::StopSlicer(this);
  return (unsigned int)v4;
}
