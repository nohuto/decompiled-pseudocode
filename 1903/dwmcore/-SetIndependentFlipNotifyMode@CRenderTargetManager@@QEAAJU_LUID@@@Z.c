/*
 * XREFs of ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x1801891E4
 * Callers:
 *     ?RecordCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180018E90 (-RecordCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x18018747C (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CRenderTargetManager::SetIndependentFlipNotifyMode(CRenderTargetManager *this, struct _LUID a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v6; // rcx
  COverlayContext *v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3);
      v7 = (COverlayContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
      if ( v7 )
      {
        v8 = COverlayContext::SetIndependentFlipNotifyMode(v7, a2);
        v2 = v8;
        if ( v8 < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x359u, 0LL);
  }
  return v2;
}
