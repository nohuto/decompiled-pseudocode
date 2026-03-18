/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001B568
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000CF10 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0007730 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0015D90 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x1C001B708 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001B7B8 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkGetPresentStats @ 0x1C013DC90 (DxgkGetPresentStats.c)
 */

__int64 __fastcall CTokenManager::CompleteIndendentFlipToken(
        CTokenManager *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  void *v4; // rsi
  __int64 v9; // r8
  int v10; // r13d
  UINT PresentCount; // ecx
  UINT v12; // r8d
  LUID compSurfLuid; // rdx
  struct CToken *v14; // r14
  int v15; // eax
  unsigned int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  void (__fastcall *v20)(_QWORD, _QWORD, __int64, __int64); // rbx
  unsigned int v21; // eax
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  struct CToken *v24; // [rsp+38h] [rbp-41h] BYREF
  void *hCompSurf; // [rsp+40h] [rbp-39h]
  _DWORD v26[4]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v27; // [rsp+58h] [rbp-21h]
  __int64 v28; // [rsp+60h] [rbp-19h]
  _QWORD v29[5]; // [rsp+68h] [rbp-11h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  v4 = hCompSurf;
  memset(v29, 0, sizeof(v29));
  DxgkGetPresentStats(a4);
  v10 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2u, v9, (struct CompositionSurfaceObject **)&Object);
  if ( v10 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v26[2] = v29[2];
    v26[0] = PresentCount;
    v27 = v29[3];
    v28 = v29[3];
    v26[1] = HIDWORD(v29[0]);
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(Object, a2, v26, LODWORD(v29[4]));
    v12 = a3->PresentCount;
    compSurfLuid = a3->compSurfLuid;
    v24 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, v12, &v24);
    v14 = v24;
    if ( v24 )
    {
      v15 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v24 + 128LL))(v24, LODWORD(v29[2]));
      v16 = v15 + 1;
      if ( v15 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v16);
        v17 = *((_QWORD *)v14 + 5);
        v18 = *(_QWORD *)(*((_QWORD *)v14 + 4) + 24LL);
        v20 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal(v19) + 2541)
                                                                      + 72LL);
        v21 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v14 + 112LL))(v14);
        v20(v16, v21, v18, v17);
        v4 = hCompSurf;
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v14)(v14, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(v4, 1);
  }
  return (unsigned int)v10;
}
