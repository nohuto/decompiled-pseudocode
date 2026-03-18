/*
 * XREFs of zzzImeSetOwnerWindow @ 0x1C000CB74
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C000CA40 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     GetWindowCloakStateComponentUIAware @ 0x1C000CCBC (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C000CD3C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     DwmAsyncOwnerChange @ 0x1C001CB10 (DwmAsyncOwnerChange.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  char v12[24]; // [rsp+30h] [rbp-18h] BYREF

  result = *(_QWORD *)(a2 + 112);
  v4 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v4 + 10) & 1) == 0 )
  {
    result = gpsi;
    if ( *(_WORD *)v4 != *(_WORD *)(gpsi + 898LL) )
    {
      NonChildAncestor = GetNonChildAncestor(a2);
      v7 = NonChildAncestor;
      while ( NonChildAncestor )
      {
        if ( **(_WORD **)(*(_QWORD *)(NonChildAncestor + 112) + 8LL) == v6 )
        {
          v7 = 0LL;
          break;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 96);
      }
      v8 = v7;
      if ( v7 )
      {
        while ( a1 != (struct tagWND *)v8 )
        {
          v8 = *(_QWORD *)(v8 + 80);
          if ( !v8 )
            goto LABEL_10;
        }
        UserSetLastError(87LL);
        v7 = 0LL;
LABEL_10:
        if ( v7 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) )
          SetWindowGroupBand(a1);
      }
      v11 = *(_OWORD *)LockPointer(v12, (char *)a1 + 96, v7);
      HMAssignmentLock(&v11);
      if ( v7 )
      {
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v7);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
      }
      result = IsWindowDesktopComposed(a1);
      if ( (_DWORD)result )
      {
        v10 = (void *)ReferenceDwmApiPort();
        return DwmAsyncOwnerChange(v10);
      }
    }
  }
  return result;
}
