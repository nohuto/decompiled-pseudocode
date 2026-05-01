/*
 * XREFs of ?SetBand@CFrameApplicationPresentation@@UEAAJW4ZBID@@@Z @ 0x18006CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBand(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  HWND ForegroundWindow; // rax
  HWND v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( a2 == 1 )
  {
    v2 = -2LL;
    ForegroundWindow = GetForegroundWindow();
    v6 = ForegroundWindow;
    if ( ForegroundWindow )
    {
      if ( *(HWND *)(a1 + 128) != ForegroundWindow && (GetWindowLongPtrW(ForegroundWindow, -20) & 8) == 0 )
        v2 = (__int64)v6;
    }
  }
  result = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                                     + 32LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             *(_QWORD *)(a1 + 128),
             v2,
             a2);
  if ( (int)result >= 0 )
  {
    if ( a2 == 1 && ((v2 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                             + 48LL))(
             CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
             *(_QWORD *)(a1 + 128),
             v2);
      if ( v9 < 0 )
      {
        v10 = 1554LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    v8 = **(_QWORD **)(a1 + 104);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, a2);
      if ( v9 < 0 )
      {
        v10 = 1563LL;
        goto LABEL_17;
      }
    }
    return 0LL;
  }
  return result;
}
