/*
 * XREFs of ?RecordCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAXPEAUHMONITOR__@@W4BufferCompositionMode@@_N@Z @ 0x180017760
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180017840 (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x180187B04 (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::RecordCompositionMode(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  CComposition *v8; // rax
  __int64 v9; // rax

  if ( !a3 && *(_BYTE *)(a1 + 108) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
    CRenderTargetManager::SetIndependentFlipNotifyMode(*(CRenderTargetManager **)(v9 + 64), *(struct _LUID *)(a1 + 40));
  }
  if ( a4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 232) + 24LL))(
           *(_QWORD *)(a1 + 232),
           a2,
           a3) )
    {
      v8 = (CComposition *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
      CComposition::AddCompSurfInfoUpdate(v8, (struct CCompositionSurfaceInfo *)a1);
    }
  }
}
