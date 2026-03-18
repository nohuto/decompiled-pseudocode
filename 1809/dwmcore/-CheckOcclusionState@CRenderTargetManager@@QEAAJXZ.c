/*
 * XREFs of ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x1800CE604
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18015CA98 (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 */

__int64 __fastcall CRenderTargetManager::CheckOcclusionState(CRenderTargetManager *this)
{
  char v2; // r14
  __int64 v3; // rbp
  struct CRenderTarget *v4; // r15
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  bool v8; // r13
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v12; // rcx
  int v13; // eax

  v2 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v3 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    do
    {
      v4 = *(struct CRenderTarget **)(*((_QWORD *)this + 3) + 8 * v3);
      v5 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v4 + 8) + 48LL))((_QWORD *)v4 + 8);
      v7 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802925D8, 2u, v5, 0x547u);
        goto LABEL_12;
      }
      v8 = v5 == 142213121;
      v2 = v5 == 142213121 ? v2 : 0;
      if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v4 + 48LL))(v4, 76LL) )
      {
        v10 = *((_DWORD *)this + 24);
        v7 = 0;
        while ( v10 < *((_DWORD *)this + 12) )
        {
          v12 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v10);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 48LL))(v12, 80LL) )
          {
            v13 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                    *(CIndirectSwapchainRenderTarget **)(*((_QWORD *)this + 3) + 8LL * v10),
                    v4,
                    v8);
            v7 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, 0x321u);
              break;
            }
          }
          ++v10;
        }
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802925D8, 2u, v7, 0x542u);
          goto LABEL_12;
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)this + 12) );
    if ( v2 )
      goto LABEL_15;
    goto LABEL_11;
  }
LABEL_15:
  if ( *((_BYTE *)this + 113) )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v7 = 142213121;
LABEL_12:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
  return (unsigned int)v7;
}
