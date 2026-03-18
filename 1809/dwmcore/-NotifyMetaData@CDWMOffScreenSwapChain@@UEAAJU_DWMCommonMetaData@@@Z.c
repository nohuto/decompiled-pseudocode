/*
 * XREFs of ?NotifyMetaData@CDWMOffScreenSwapChain@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180204820
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxx @ 0x1801BA300 (McTemplateU0xxx.c)
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1802050C0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::NotifyMetaData(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  if ( *(_DWORD *)a2 == 4 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxx(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
        *(_QWORD *)(a2 + 8),
        a2,
        1LL);
  }
  else if ( *(int *)a2 <= 5 || *(int *)a2 > 7 )
  {
    v4 = *(_OWORD *)(a2 + 16);
    v12[0] = *(_OWORD *)a2;
    v5 = *(_OWORD *)(a2 + 32);
    v12[1] = v4;
    *(_QWORD *)&v4 = *(_QWORD *)(a2 + 48);
    v12[2] = v5;
    v13 = v4;
    v6 = CSwapChainBase::NotifyMetaData(a1, v12);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x39Du);
    return v8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 544) + 56LL))(
         *(_QWORD *)(a1 + 544),
         a2,
         1LL);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x399u);
  return v8;
}
