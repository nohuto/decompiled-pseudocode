/*
 * XREFs of ?SendEndOfUpdates@CDWMOffScreenSwapChain@@UEAAJXZ @ 0x1800DDE80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::SendEndOfUpdates(CDWMOffScreenSwapChain *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  signed int v3; // eax
  __int64 v4; // rcx
  _DWORD v6[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)this + 68);
  v2 = 0;
  if ( v1 )
  {
    memset_0(v6, 0, 0x30uLL);
    v6[0] = 5;
    v3 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v1 + 56LL))(v1, v6, 1LL);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x2F3u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
  }
  return v2;
}
