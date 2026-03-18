/*
 * XREFs of ?SendEndOfUpdates@CDWMOffScreenSwapChain@@UEAAJXZ @ 0x1800EB120
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::SendEndOfUpdates(CDWMOffScreenSwapChain *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx
  _DWORD v6[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)this + 68);
  v2 = 0;
  if ( v1 )
  {
    memset_0(v6, 0, 0x30uLL);
    v6[0] = 5;
    v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v1 + 56LL))(v1, v6, 1LL);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x31Eu);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
  }
  return v2;
}
