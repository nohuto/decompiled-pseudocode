/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180026728
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800263B0 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxyFromSharedHandle@VCRemotingRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemotingRenderTargetProxy@@@Z @ 0x1800B6068 (--$CreateProxyFromSharedHandle@VCRemotingRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemot.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CTopLevelWindow *this, HWND a2, struct CWindowData *a3)
{
  unsigned int v3; // edi
  CBaseObject *v4; // rbx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v13; // eax
  __int64 v14; // rcx
  CDesktopManager *v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  void *v20; // [rsp+28h] [rbp-18h]
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v22; // [rsp+38h] [rbp-8h] BYREF
  HANDLE hObject; // [rsp+68h] [rbp+28h] BYREF

  v3 = 0;
  v4 = 0LL;
  hObject = 0LL;
  v22 = 0LL;
  if ( a2
    && (v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        v9 = *(_QWORD *)(v8 + 16),
        v10 = *(unsigned int *)(v8 + 24),
        LOBYTE(v8) = 1,
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, HWND, __int64))(*(_QWORD *)v9 + 496LL))(v9, v10, a2, v8),
        v3 = v11,
        v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1D0u, v20);
  }
  else if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 7) >= 2 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 26)
                                                               + 216LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
            &GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b,
            &v21);
    v3 = v13;
    if ( v13 >= 0 )
    {
      v14 = v21;
      v15 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)this + 104) = v21;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, *((_QWORD *)v15 + 10));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 48LL))(v21, *((_QWORD *)a3 + 5));
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
      v3 = v16;
      if ( v16 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 26)
                                                                   + 224LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                v21,
                &hObject);
        v3 = v17;
        if ( v17 >= 0 )
        {
          v18 = CCompositor::CreateProxyFromSharedHandle<CRemotingRenderTargetProxy>(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                  hObject,
                  &v22);
          v3 = v18;
          if ( v18 >= 0 )
          {
            v4 = v22;
            v19 = (*(__int64 (__fastcall **)(CBaseObject *, _QWORD))(*(_QWORD *)v22 + 8LL))(v22, *((_QWORD *)this + 2));
            v3 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1E7u, v20);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1E5u, v20);
            v4 = v22;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1E3u, v20);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1E0u, v20);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1D9u, v20);
    }
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v3;
}
