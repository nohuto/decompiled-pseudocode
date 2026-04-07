/*
 * XREFs of ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004C2E0
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18004DA34 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18002F46C (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18004C5C4 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCDesktopRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCDesktopRenderTargetProxy@@@Z @ 0x18004CF0C (--$CreateProxyFromSharedHandle@VCDesktopRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCDeskto.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x18004D06C (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18007FF8C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnsureDesktopRenderTarget(CDesktopManager *this)
{
  CDesktopManager *v1; // rdi
  int v2; // ebx
  _QWORD *v3; // rsi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // r15
  int v9; // eax
  BOOL v10; // r14d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int ProxyFromShared; // eax
  _QWORD *v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  void *v22; // [rsp+28h] [rbp-10h]
  CDesktopManager *v23; // [rsp+70h] [rbp+38h] BYREF
  HANDLE hObject; // [rsp+78h] [rbp+40h] BYREF
  HANDLE v25; // [rsp+80h] [rbp+48h] BYREF
  __int64 v26; // [rsp+88h] [rbp+50h] BYREF

  v23 = this;
  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  hObject = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v3 = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 80);
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 10) )
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 26))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
           &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0,
           &v26);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x560u, v22);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 26)
                                                               + 216LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
             &GUID_6c4d5135_93f5_4576_adf1_5060105c55bd,
             v3);
      v6 = FailFastIfAccessDenied(v5);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x562u, v22);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 32LL))(*v3, 66584LL);
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x564u, v22);
        }
        else
        {
          v8 = (_QWORD *)((char *)v1 + 96);
          v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 648LL))(v26, (__int64)v1 + 96);
          v2 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x566u, v22);
          }
          else
          {
            v10 = 1;
            v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 24LL))(*v8, 1LL);
            v2 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x568u, v22);
            }
            else
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 64LL))(*v3, *v8);
              v2 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x56Au, v22);
              }
              else
              {
                if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ConfigureInput", (unsigned int *)&v23) )
                  v10 = (_DWORD)v23 == 0;
                v13 = (*(__int64 (__fastcall **)(_QWORD, BOOL))(*(_QWORD *)*v3 + 80LL))(*v3, v10);
                v2 = v13;
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x573u, v22);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
                  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 26)
                                                                            + 224LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                          *v3,
                          &hObject);
                  v2 = v14;
                  if ( v14 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x578u, v22);
                  }
                  else
                  {
                    ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CDesktopRenderTargetProxy>(
                                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                                        hObject,
                                        (char *)v1 + 72);
                    v2 = ProxyFromShared;
                    if ( ProxyFromShared < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProxyFromShared, 0x57Au, v22);
                    }
                    else
                    {
                      v16 = (_QWORD *)((char *)v1 + 136);
                      v17 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 26)
                                                                               + 216LL))(
                              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                              &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
                              (__int64)v1 + 136);
                      v2 = v17;
                      if ( v17 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x57Cu, v22);
                      }
                      else
                      {
                        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26)
                                                       + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 26));
                        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                     + 26)
                                                                                  + 224LL))(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                                *v16,
                                &v25);
                        v2 = v18;
                        if ( v18 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x580u, v22);
                        }
                        else
                        {
                          v19 = CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(
                                  *((_QWORD *)v1 + 5),
                                  v25,
                                  (char *)v1 + 144);
                          v2 = v19;
                          if ( v19 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x582u, v22);
                          }
                          else
                          {
                            v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, *v16);
                            v2 = v20;
                            if ( v20 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x584u, v22);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( hObject )
    {
      CloseHandle(hObject);
      hObject = 0LL;
    }
    if ( v25 )
    {
      CloseHandle(v25);
      v25 = 0LL;
    }
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      v26 = 0LL;
    }
    if ( v2 < 0 )
      CDesktopManager::ReleaseDesktopRenderTarget(v1);
  }
  return (unsigned int)v2;
}
