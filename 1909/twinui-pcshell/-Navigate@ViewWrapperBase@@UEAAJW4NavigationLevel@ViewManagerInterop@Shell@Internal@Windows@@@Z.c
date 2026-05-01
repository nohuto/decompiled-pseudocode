/*
 * XREFs of ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802B7CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802B6B00 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802B83D8 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::Navigate(__int64 a1, int a2)
{
  int v4; // esi
  RTL_SRWLOCK *v5; // rdi
  HWND v6; // rbp
  int v7; // eax
  __int16 v9; // ax
  int v10; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 4;
  if ( a2 != 5 )
    v4 = a2;
  v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
  AcquireSRWLockExclusive(v5);
  v6 = *(HWND *)(a1 + 264);
  v7 = *(_DWORD *)(a1 + 280);
  if ( v4 != v7 )
  {
    if ( !v7 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CE,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)0x8007139FLL);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      return 2147947423LL;
    }
    *(_DWORD *)(a1 + 280) = v4;
    if ( (*(_BYTE *)(a1 + 456) & 4) == 0 )
    {
      if ( (unsigned int)(v4 - 4) <= 1 )
      {
        v9 = 2;
        v10 = 4;
      }
      else
      {
        v9 = 0;
        v10 = 2;
      }
      if ( v10 != ((*(unsigned __int16 *)(a1 + 348) >> 1) & 7) )
      {
        *(_WORD *)(a1 + 348) = (2 * (v9 + 2)) | *(_WORD *)(a1 + 348) & 0xFFF1;
        ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
      }
    }
    ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( a2 == 5 && v6 )
    SetForegroundWindow(v6);
  return 0LL;
}
