/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18005B438
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800F6E9C (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F7904 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1800FBAB4 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(__int64 a1, __int64 a2, HWND a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  unsigned int v11; // r10d
  unsigned int v12; // eax
  unsigned __int64 i; // r9
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+38h] [rbp-28h]
  HWND v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  char v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+88h] [rbp+28h] BYREF

  v21 = -2LL;
  v19 = -1LL;
  v18 = 0LL;
  result = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
             a2,
             &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1,
             &v18);
  if ( (int)result < 0 )
    goto LABEL_20;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v19);
  if ( (int)result < 0 )
    goto LABEL_20;
  v9 = 0LL;
  v20 = 0LL;
  v10 = *(_QWORD *)(a1 + 1008);
  if ( !v10 )
    goto LABEL_18;
  v11 = *(_DWORD *)(a1 + 996);
  v12 = 314159269;
  for ( i = 0LL; i < 8; ++i )
    v12 ^= (v12 >> 2) + 2080 * v12 + *((unsigned __int8 *)&v19 + i);
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
    if ( (_DWORD)result == 1 && *(_QWORD *)(v10 + 24 * v14 + 8) == v19 )
      goto LABEL_11;
    v14 = ((int)v14 + 1) % v11;
  }
  if ( v15 != -1 )
    v14 = v15;
LABEL_11:
  if ( *(_DWORD *)(v10 + 24 * v14) == 1 )
  {
    result = *(_QWORD *)(v10 + 24 * v14 + 16);
    if ( result )
    {
      v9 = *(_QWORD *)(v10 + 24 * v14 + 16);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(v9);
      v20 = v9;
    }
    if ( *(_QWORD *)(v9 + 24) || a4 )
    {
      if ( *(HWND *)(v9 + 24) == a3 && a4 == 1 )
      {
        *(_QWORD *)(v9 + 24) = 0LL;
        result = (__int64)Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(v9 + 16), 0LL);
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
      v25 = 0LL;
      v22 = a3;
      v23 = 0LL;
      v24 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      (*(void (__fastcall **)(__int64, HWND *, __int64 *))(*(_QWORD *)a2 + 304LL))(a2, &v22, &v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      v17 = v25;
      *(_QWORD *)(v9 + 24) = a3;
      Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(v9 + 16), v17);
      if ( !*(_BYTE *)(v9 + 36) )
        *(_BYTE *)(v9 + 32) = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
      *(_BYTE *)(v9 + 33) = GetPropW(a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
  }
LABEL_18:
  if ( v9 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_20:
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return result;
}
