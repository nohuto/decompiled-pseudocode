/*
 * XREFs of _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x18004DC4C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468__&___ptr64__1_long_::Invoke @ 0x18004DB10 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18004DB10.c)
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18004DB40 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 * Callees:
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180068BD0 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180068C68 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator()(__int64 a1, DWORD a2)
{
  __int64 v2; // rdi
  HWND v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // esi
  int v7; // edx
  enum ORIENTATION_PREFERENCE v9; // edi
  DWORD Ptr_high; // edx
  enum ORIENTATION_PREFERENCE v11; // [rsp+40h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  dwProcessId = a2;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = *(_QWORD *)(v2 + 160);
  if ( v5 )
  {
    if ( *(_DWORD *)(v2 + 124) )
    {
      if ( (*(int (__fastcall **)(__int64, HWND *, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v5 + 528LL))(
             v5,
             &hWnd,
             &v11) >= 0 )
      {
        v9 = ORIENTATION_PREFERENCE_NONE;
        dwProcessId = 0;
        if ( hWnd )
        {
          GetWindowThreadProcessId(hWnd, &dwProcessId);
          Ptr_high = dwProcessId;
          v4 = hWnd;
        }
        else
        {
          v9 = v11;
          Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
          dwProcessId = Ptr_high;
        }
        CRotationManagerSync::_SetAutoRotationConfiguration(*(CRotationManagerSync **)(a1 + 8), Ptr_high, v4, v9);
      }
    }
    else
    {
      v6 = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      if ( *(_DWORD *)(v2 + 120) )
      {
        *(_DWORD *)(v2 + 112) = 0;
      }
      else if ( *(_DWORD *)(v2 + 100) || !*(_BYTE *)(v2 + 104) )
      {
        *(_DWORD *)(v2 + 100) = 0;
        *(_BYTE *)(v2 + 104) = 0;
        if ( !*(_BYTE *)(v2 + 105) )
        {
          SetDisplayAutoRotationPreferences(ORIENTATION_PREFERENCE_NONE);
          *(_BYTE *)(v2 + 104) = 1;
        }
      }
      if ( v6 )
      {
        v7 = *(_DWORD *)(v2 + 120);
        if ( v6 != *(_DWORD *)((v7 != 0 ? 0xC : 0) + v2 + 96) )
        {
          if ( !v7 )
          {
            CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)v2, v6);
            v7 = *(_DWORD *)(v2 + 120);
          }
          *(_DWORD *)((v7 != 0 ? 0xC : 0) + v2 + 96) = v6;
        }
      }
    }
  }
  return 0LL;
}
