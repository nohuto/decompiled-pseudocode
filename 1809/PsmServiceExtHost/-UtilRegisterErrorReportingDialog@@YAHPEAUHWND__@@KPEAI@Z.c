/*
 * XREFs of ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x1800748BC
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x18007461C (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     SetLastError_0 @ 0x1800487AC (SetLastError_0.c)
 *     GetProcAddress_0 @ 0x1800487C4 (GetProcAddress_0.c)
 *     FreeLibrary_0 @ 0x1800487D0 (FreeLibrary_0.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x18004917C (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x18004925C (IsRegisterWindowMessageWPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UtilRegisterErrorReportingDialog(HWND hwnd, unsigned int a2, unsigned int *a3)
{
  HMODULE Library; // rdi
  DWORD v6; // ecx
  unsigned int v7; // ebx
  UINT v8; // eax
  FARPROC RegisterErrorReportingDialog; // rax

  Library = 0LL;
  if ( !hwnd || !a2 )
    goto LABEL_13;
  if ( !IsRegisterWindowMessageWPresent() || !IsChangeWindowMessageFilterExPresent() )
  {
    v6 = 127;
    goto LABEL_7;
  }
  Library = LoadLibraryExW(L"user32.dll", 0LL, 0x800u);
  if ( !Library )
  {
    v6 = 126;
LABEL_7:
    v7 = 0;
    SetLastError_0(v6);
    return v7;
  }
  v8 = RegisterWindowMessageW(L"WerHangRepMessage");
  if ( !v8 )
    goto LABEL_13;
  v7 = ChangeWindowMessageFilterEx(hwnd, v8, 1u, 0LL);
  if ( !v7 )
    goto LABEL_14;
  RegisterErrorReportingDialog = GetProcAddress_0(Library, "RegisterErrorReportingDialog");
  if ( RegisterErrorReportingDialog )
    v7 = ((__int64 (__fastcall *)(HWND, _QWORD))RegisterErrorReportingDialog)(hwnd, a2);
  else
LABEL_13:
    v7 = 0;
LABEL_14:
  if ( Library )
    FreeLibrary_0(Library);
  return v7;
}
