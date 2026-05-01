/*
 * XREFs of ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180010420
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468__&__1_long___lambda_f6f69901abcf4556c2ac2b4f02b3e468__&_ @ 0x180010570 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180010570.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18006652C (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800665C4 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800724C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CRotationManagerSync::ReconcileModernOrientationPreferences(CRotationManagerSync *this)
{
  _QWORD *v2; // rdi
  PSRWLOCK v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // edx
  _DWORD *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  HWND v13; // r8
  enum ORIENTATION_PREFERENCE v14; // ebx
  unsigned int Ptr_high; // edx
  _QWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 dwProcessId; // [rsp+70h] [rbp+28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+30h] BYREF
  HWND hWnd; // [rsp+80h] [rbp+38h] BYREF
  char *v20; // [rsp+88h] [rbp+40h]

  v2 = (_QWORD *)((char *)this - 72);
  v20 = (char *)this - 72;
  if ( this != (CRotationManagerSync *)72 )
    (*(void (__fastcall **)(char *))(*v2 + 8LL))((char *)this - 72);
  v16[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  v16[1] = v2;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( LODWORD(v3[11].Ptr) == GetCurrentThreadId() )
  {
    v4 = v2[20];
    if ( v4 )
    {
      if ( *((_DWORD *)v2 + 31) )
      {
        if ( (*(int (__fastcall **)(__int64, HWND *, __int64 *))(*(_QWORD *)v4 + 528LL))(v4, &hWnd, &v18) >= 0 )
        {
          LODWORD(dwProcessId) = 0;
          v13 = 0LL;
          v14 = ORIENTATION_PREFERENCE_NONE;
          if ( hWnd )
          {
            GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
            v13 = hWnd;
            Ptr_high = dwProcessId;
          }
          else
          {
            Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
            LODWORD(dwProcessId) = Ptr_high;
            v14 = (int)v18;
          }
          CRotationManagerSync::_SetAutoRotationConfiguration((CRotationManagerSync *)v2, Ptr_high, v13, v14);
        }
      }
      else
      {
        v5 = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
        if ( *((_DWORD *)v2 + 30) )
        {
          *((_DWORD *)v2 + 28) = 0;
        }
        else if ( *((_DWORD *)v2 + 25) || !*((_BYTE *)v2 + 104) )
        {
          *((_DWORD *)v2 + 25) = 0;
          *((_BYTE *)v2 + 104) = 0;
          if ( !*((_BYTE *)v2 + 105) )
          {
            SetDisplayAutoRotationPreferences(ORIENTATION_PREFERENCE_NONE);
            *((_BYTE *)v2 + 104) = 1;
          }
        }
        if ( v5 )
        {
          v6 = *((_DWORD *)v2 + 30);
          v7 = v2 + 12;
          if ( v6 )
            v7 = (_DWORD *)v2 + 27;
          if ( v5 != *v7 )
          {
            if ( !v6 )
            {
              CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)v2, v5);
              v6 = *((_DWORD *)v2 + 30);
            }
            *(_DWORD *)((char *)v2 + (v6 != 0 ? 0xC : 0) + 96) = v5;
          }
        }
      }
    }
  }
  else
  {
    v8 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468_____1_long___lambda_f6f69901abcf4556c2ac2b4f02b3e468____(
                      &dwProcessId,
                      v16);
    v11 = *v8;
    v18 = *v8;
    *v8 = 0LL;
    v12 = dwProcessId;
    if ( dwProcessId )
    {
      dwProcessId = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::Release(
        v12,
        v9,
        v10);
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
        *((_QWORD *)this + 9),
        v11,
        0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  }
}
