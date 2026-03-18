/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001C028
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AD00 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00100E8 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00172E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x1C001C1CC (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001C27C (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkGetPresentStats @ 0x1C0152640 (DxgkGetPresentStats.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD, _QWORD, __int64, __int64); // rbx
  unsigned int v22; // eax
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  struct CToken *v25; // [rsp+38h] [rbp-41h] BYREF
  void *hCompSurf; // [rsp+40h] [rbp-39h]
  _DWORD v27[4]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h]
  __int64 v29; // [rsp+60h] [rbp-19h]
  _QWORD v30[5]; // [rsp+68h] [rbp-11h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  v4 = hCompSurf;
  memset(v30, 0, sizeof(v30));
  DxgkGetPresentStats(a4);
  v10 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2u, v9, (struct CompositionSurfaceObject **)&Object);
  if ( v10 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v27[3] = 0;
    v27[2] = v30[2];
    v27[0] = PresentCount;
    v28 = v30[3];
    v29 = v30[3];
    v27[1] = HIDWORD(v30[0]);
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(Object, a2, v27, LODWORD(v30[4]));
    v12 = a3->PresentCount;
    compSurfLuid = a3->compSurfLuid;
    v25 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, v12, &v25);
    v14 = v25;
    if ( v25 )
    {
      v15 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v25 + 136LL))(v25, LODWORD(v30[2]));
      v16 = v15 + 1;
      if ( v15 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v16);
        v17 = *((_QWORD *)v14 + 5);
        v18 = *(_QWORD *)(*((_QWORD *)v14 + 4) + 24LL);
        v21 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19)
                                                                        + 38000)
                                                                      + 112LL);
        v22 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v14 + 112LL))(v14);
        v21(v16, v22, v18, v17);
        v4 = hCompSurf;
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v14)(v14, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(v4, 1);
  }
  return (unsigned int)v10;
}
