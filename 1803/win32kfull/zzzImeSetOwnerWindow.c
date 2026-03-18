/*
 * XREFs of zzzImeSetOwnerWindow @ 0x1C006EBFC
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0070A70 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0070A0C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C0073B50 (GetWindowCloakStateComponentUIAware.c)
 */

__int64 __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 NonChildAncestor; // rax
  _WORD *v6; // rdx
  __int16 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  char v16[24]; // [rsp+30h] [rbp-18h] BYREF

  result = *(_QWORD *)(a2 + 112);
  v4 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v4 + 10) & 1) == 0 )
  {
    result = gpsi;
    if ( *(_WORD *)v4 != *(_WORD *)(gpsi + 898LL) )
    {
      NonChildAncestor = GetNonChildAncestor(a2);
      v8 = NonChildAncestor;
      while ( NonChildAncestor )
      {
        v6 = *(_WORD **)(*(_QWORD *)(NonChildAncestor + 112) + 8LL);
        if ( *v6 == v7 )
        {
          v8 = 0LL;
          break;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 96);
      }
      v9 = v8;
      if ( v8 )
      {
        while ( a1 != (struct tagWND *)v9 )
        {
          v9 = *(_QWORD *)(v9 + 80);
          if ( !v9 )
            goto LABEL_10;
        }
        UserSetLastError(87LL, (__int64)v6);
        v8 = 0LL;
LABEL_10:
        if ( v8 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*(_QWORD *)(v8 + 40) + 236LL) )
          SetWindowGroupBand(a1);
      }
      v15 = *(_OWORD *)LockPointer(v16, (char *)a1 + 96, v8);
      HMAssignmentLock(&v15);
      if ( v8 )
      {
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v8);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
      }
      result = IsWindowDesktopComposed(a1);
      if ( (_DWORD)result )
      {
        v14 = (void *)ReferenceDwmApiPort(v12, v11, v13);
        return DwmAsyncOwnerChange(v14);
      }
    }
  }
  return result;
}
