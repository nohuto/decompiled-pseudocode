/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180060610
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180029C10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18013B65C (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18013C16C (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x180140F24 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(__int64 a1, __int64 a2, HWND a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r9d
  unsigned int v12; // eax
  unsigned __int64 i; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, HWND *, __int64 *); // rdi
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]
  __int64 v23; // [rsp+38h] [rbp-28h]
  HWND v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  char v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF

  v23 = -2LL;
  v21 = -1LL;
  v20 = 0LL;
  result = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
             a2,
             &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1,
             &v20);
  if ( (int)result < 0 )
    goto LABEL_20;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v21);
  if ( (int)result < 0 )
    goto LABEL_20;
  v9 = 0LL;
  v22 = 0LL;
  v10 = *(_QWORD *)(a1 + 1016);
  if ( !v10 )
    goto LABEL_18;
  v11 = *(_DWORD *)(a1 + 1004);
  v12 = 314159269;
  for ( i = 0LL; i < 8; ++i )
    v12 ^= (v12 >> 2) + 2080 * v12 + *((unsigned __int8 *)&v21 + i);
  v14 = (v12 & 0x7FFFFFFF) % v11;
  v15 = -1;
  while ( 1 )
  {
    result = *(unsigned int *)(v10 + 24 * v14);
    if ( (_DWORD)result == 2 && v15 == -1 )
    {
      v15 = v14;
      goto LABEL_9;
    }
    if ( !(_DWORD)result )
      break;
LABEL_9:
    if ( (_DWORD)result == 1 && *(_QWORD *)(v10 + 24 * v14 + 8) == v21 )
      goto LABEL_11;
    v14 = ((int)v14 + 1) % v11;
  }
  if ( v15 != -1 )
    v14 = v15;
LABEL_11:
  if ( *(_DWORD *)(v10 + 24 * v14) == 1 )
  {
    v16 = *(_QWORD *)(v10 + 24 * v14 + 16);
    if ( v16 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v9 = v16;
      v22 = v16;
    }
    if ( *(_QWORD *)(v9 + 24) || a4 )
    {
      if ( *(HWND *)(v9 + 24) == a3 && a4 == 1 )
      {
        *(_QWORD *)(v9 + 24) = 0LL;
        result = (__int64)Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(v9 + 16), 0LL);
        *(_BYTE *)(v9 + 32) = 0;
      }
    }
    else
    {
      result = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result != 1 )
          goto LABEL_18;
      }
      else
      {
        result = CApplicationManagerUtility::ValidateWindowProcess(a3, 2LL);
        if ( (_BYTE)result )
          goto LABEL_18;
        SetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
      }
      v27 = 0LL;
      v18 = *(void (__fastcall **)(__int64, HWND *, __int64 *))(*(_QWORD *)a2 + 304LL);
      v24 = a3;
      v25 = 0LL;
      v26 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      v18(a2, &v24, &v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v19 = v27;
      *(_QWORD *)(v9 + 24) = a3;
      Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(v9 + 16), v19);
      if ( !*(_BYTE *)(v9 + 36) )
        *(_BYTE *)(v9 + 32) = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
      *(_BYTE *)(v9 + 33) = GetPropW(a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    }
  }
LABEL_18:
  if ( v9 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_20:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return result;
}
