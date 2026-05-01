/*
 * XREFs of _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x1800685EC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468__&__1_long_::Invoke @ 0x1800685C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1800685C0.c)
 * Callees:
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18006863C (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator()(__int64 a1, DWORD a2)
{
  HWND v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9
  enum ORIENTATION_PREFERENCE v6; // r9d
  HWND v7; // r8
  DWORD Ptr_high; // edx
  enum ORIENTATION_PREFERENCE v10; // edi
  enum ORIENTATION_PREFERENCE v11; // [rsp+40h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+50h] [rbp+18h] BYREF

  dwProcessId = a2;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 160);
  if ( v5 )
  {
    if ( *(_DWORD *)(v4 + 124) )
    {
      if ( (*(int (__fastcall **)(_QWORD, HWND *, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v5 + 528LL))(
             *(_QWORD *)(v4 + 160),
             &hWnd,
             &v11) < 0 )
        return 0LL;
      v10 = ORIENTATION_PREFERENCE_NONE;
      dwProcessId = 0;
      if ( hWnd )
      {
        GetWindowThreadProcessId(hWnd, &dwProcessId);
        Ptr_high = dwProcessId;
        v3 = hWnd;
      }
      else
      {
        v10 = v11;
        Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
        dwProcessId = Ptr_high;
      }
      v4 = *(_QWORD *)(a1 + 8);
      v6 = v10;
      v7 = v3;
    }
    else
    {
      v6 = ORIENTATION_PREFERENCE_NONE;
      v7 = 0LL;
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
    }
    CRotationManagerSync::_SetAutoRotationConfiguration((CRotationManagerSync *)v4, Ptr_high, v7, v6);
  }
  return 0LL;
}
