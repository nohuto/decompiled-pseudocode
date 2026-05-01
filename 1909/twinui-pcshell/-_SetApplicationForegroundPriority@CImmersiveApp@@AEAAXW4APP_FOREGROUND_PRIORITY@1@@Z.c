/*
 * XREFs of ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18003CBAC
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18003C3E0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1801648A0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x180164B50 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180164D50 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800407D0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x18007F3A4 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 *     WPP_SF_lDqd @ 0x18016B79C (WPP_SF_lDqd.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::_SetApplicationForegroundPriority(__int64 a1, unsigned int a2)
{
  _UNKNOWN **v2; // rax
  unsigned int v5; // ebx
  CApplicationManagerUtility *v6; // rax
  HWND v7; // rdx
  HWND v8; // r15
  __int64 v9; // r8
  __int64 v10; // r8
  char *v11; // rbp
  int Error; // esi
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+8h] BYREF
  char *v16; // [rsp+90h] [rbp+18h]

  v2 = &retaddr;
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 808) || a2 == *(_DWORD *)(a1 + 812) )
    return (char)v2;
  if ( !*(_QWORD *)(a1 + 472)
    || (v6 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 464) + 32LL))(**(_QWORD **)(a1 + 464)),
        (v8 = (HWND)v6) == 0LL) )
  {
    v9 = *(_QWORD *)(a1 + 816);
    LOBYTE(v2) = v9 - 1;
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      LOBYTE(v2) = CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v9, 0LL, 0LL);
    return (char)v2;
  }
  LOBYTE(v2) = CApplicationManagerUtility::IsValidWindow(v6, v7);
  if ( !(_BYTE)v2 )
    return (char)v2;
  LODWORD(v2) = GetWindowThreadProcessId(v8, &dwProcessId);
  if ( !(_DWORD)v2 )
  {
    Error = -2147024890;
LABEL_19:
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LOBYTE(v5) = a2 == 0;
      LOBYTE(v2) = WPP_SF_lDqd(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v10, v5, dwProcessId, v8, Error);
    }
    return (char)v2;
  }
  v11 = (char *)OpenProcess(0x200u, 0, dwProcessId);
  v16 = v11;
  if ( v11 )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error >= 0 )
    CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v11, dwProcessId, v8);
  LOBYTE(v2) = (_BYTE)v11 - 1;
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    LOBYTE(v2) = CloseHandle(v11);
  if ( Error < 0 )
    goto LABEL_19;
  return (char)v2;
}
