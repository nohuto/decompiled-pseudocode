/*
 * XREFs of ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180049F04
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18004B55C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001B8E4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18002C5A0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18004A26C (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x1800797A8 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnsureDesktopRenderTarget(CDesktopManager *this)
{
  struct IDwmChannel **v1; // rdi
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
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // r14
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  HANDLE v24; // [rsp+30h] [rbp-18h] BYREF
  __int64 v25; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+38h] BYREF
  int v27; // [rsp+84h] [rbp+3Ch]
  unsigned int v28; // [rsp+88h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+48h] BYREF
  HANDLE hObject; // [rsp+98h] [rbp+50h] BYREF

  v27 = HIDWORD(this);
  v1 = (struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  hObject = 0LL;
  v26 = 0;
  v24 = 0LL;
  v28 = 0;
  v3 = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 80);
  v25 = 0LL;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 10) )
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 26))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
           &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0,
           &v25);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x578u);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x57Au);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 32LL))(*v3, 66584LL);
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x57Cu);
        }
        else
        {
          v8 = v1 + 12;
          v9 = (*(__int64 (__fastcall **)(__int64, struct IDwmChannel **))(*(_QWORD *)v25 + 648LL))(v25, v1 + 12);
          v2 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x57Eu);
          }
          else
          {
            v10 = 1;
            v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 24LL))(*v8, 1LL);
            v2 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x580u);
            }
            else
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 64LL))(*v3, *v8);
              v2 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x582u);
              }
              else
              {
                if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ConfigureInput", &v29) )
                  v10 = v29 == 0;
                v13 = (*(__int64 (__fastcall **)(_QWORD, BOOL))(*(_QWORD *)*v3 + 80LL))(*v3, v10);
                v2 = v13;
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x58Bu);
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
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x590u);
                  }
                  else
                  {
                    v15 = (*(__int64 (__fastcall **)(struct IDwmChannel *, HANDLE, __int64, unsigned int *))(*(_QWORD *)v1[5] + 120LL))(
                            v1[5],
                            hObject,
                            9LL,
                            &v26);
                    v2 = v15;
                    if ( v15 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x594u);
                    }
                    else
                    {
                      v16 = CResource::WrapExistingResource(v1[5], v26, v1 + 9);
                      v2 = v16;
                      if ( v16 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x596u);
                      }
                      else
                      {
                        v17 = v1 + 17;
                        v18 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct IDwmChannel **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                                  + 26)
                                                                                               + 216LL))(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                                &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3,
                                v1 + 17);
                        v2 = v18;
                        if ( v18 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x598u);
                        }
                        else
                        {
                          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26)
                                                         + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 26));
                          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 26)
                                                                                    + 224LL))(
                                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                                  *v17,
                                  &v24);
                          v2 = v19;
                          if ( v19 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x59Cu);
                          }
                          else
                          {
                            v20 = (*(__int64 (__fastcall **)(struct IDwmChannel *, HANDLE, __int64, unsigned int *))(*(_QWORD *)v1[5] + 120LL))(
                                    v1[5],
                                    v24,
                                    38LL,
                                    &v28);
                            v2 = v20;
                            if ( v20 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x5A0u);
                            }
                            else
                            {
                              v21 = CResource::WrapExistingResource(v1[5], v28, v1 + 18);
                              v2 = v21;
                              if ( v21 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x5A2u);
                              }
                              else
                              {
                                v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, *v17);
                                v2 = v22;
                                if ( v22 < 0 )
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x5A4u);
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
      }
    }
    if ( hObject )
    {
      CloseHandle(hObject);
      hObject = 0LL;
    }
    if ( v24 )
    {
      CloseHandle(v24);
      v24 = 0LL;
    }
    if ( v25 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v25 = 0LL;
    }
    if ( v26 )
      (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v1[5] + 128LL))(v1[5]);
    if ( v28 )
      (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v1[5] + 128LL))(v1[5]);
    if ( v2 < 0 )
      CDesktopManager::ReleaseDesktopRenderTarget((CDesktopManager *)v1);
  }
  return (unsigned int)v2;
}
