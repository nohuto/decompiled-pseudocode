/*
 * XREFs of ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180022B44
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180022740 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001B8E4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SendTopLevelWindowCommand(CTopLevelWindow *this, HWND a2, struct CWindowData *a3)
{
  unsigned int v3; // edi
  CBaseObject *v4; // rbx
  HWND v6; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  int v12; // eax
  __int64 v13; // rcx
  CDesktopManager *v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  struct CResource *v23; // [rsp+38h] [rbp-8h] BYREF
  HANDLE hObject; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+38h] BYREF

  v3 = 0;
  v4 = 0LL;
  hObject = 0LL;
  v25 = 0;
  v6 = a2;
  v23 = 0LL;
  if ( a2
    && ((v8 = *((_QWORD *)this + 2)) == 0 ? (v9 = 0LL) : (v9 = *(unsigned int *)(v8 + 24)),
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND, __int64))(**(_QWORD **)(v8 + 16) + 472LL))(
                *(_QWORD *)(v8 + 16),
                v9,
                v6,
                1LL),
        v3 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1DDu);
  }
  else if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 7) >= 2 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 26)
                                                               + 216LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
            &GUID_17614f67_bd00_4b81_8e8b_f29ac22f1d1b,
            &v22);
    v3 = v12;
    if ( v12 >= 0 )
    {
      v13 = v22;
      v14 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)this + 104) = v22;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, *((_QWORD *)v14 + 10));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 48LL))(v22, *((_QWORD *)a3 + 5));
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
      v3 = v15;
      if ( v15 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 26)
                                                                   + 224LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
                v22,
                &hObject);
        v3 = v16;
        if ( v16 >= 0 )
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                   + 120LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                  hObject,
                  28LL,
                  &v25);
          v3 = v17;
          if ( v17 >= 0 )
          {
            v18 = CResource::WrapExistingResource(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), v25, &v23);
            v3 = v18;
            if ( v18 >= 0 )
            {
              v4 = v23;
              v19 = *((_QWORD *)this + 2);
              if ( v19 )
                v20 = *(unsigned int *)(v19 + 24);
              else
                v20 = 0LL;
              v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v23 + 2) + 736LL))(
                      *((_QWORD *)v23 + 2),
                      *((unsigned int *)v23 + 6),
                      v20);
              v3 = v21;
              if ( v21 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1FAu);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1F6u);
              v4 = v23;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1F4u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1F0u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1EDu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1E6u);
    }
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v25 )
    (*(void (__fastcall **)(_QWORD, _QWORD, HWND))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 128LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      v25,
      v6);
  if ( v4 )
    CBaseObject::Release(v4);
  return v3;
}
