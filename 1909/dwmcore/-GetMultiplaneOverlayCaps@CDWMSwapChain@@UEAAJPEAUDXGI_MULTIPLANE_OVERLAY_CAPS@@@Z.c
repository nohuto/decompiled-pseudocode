/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDWMSwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800D8860
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetMultiplaneOverlayCaps(
        CDWMSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi

  *((_DWORD *)this + 147) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 168LL))(*((_QWORD *)this + 53));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x41Du, 0LL);
  }
  else if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 )
  {
    *((_DWORD *)this + 147) = 2;
  }
  else if ( *(_DWORD *)a2 > 1u && (*((_DWORD *)a2 + 1) || *((_DWORD *)a2 + 2)) )
  {
    *((_DWORD *)this + 147) = 1;
  }
  return v6;
}
