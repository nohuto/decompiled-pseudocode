/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C000C0C4
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C000CA40 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00AD67C (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     GetWindowCloakStateComponentUIAware @ 0x1C000CCBC (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C000CD3C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C000EE84 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     DwmAsyncOwnerChange @ 0x1C001CB10 (DwmAsyncOwnerChange.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagWND *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rsi
  struct tagWND *v11; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 5);
    v4 = *((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(v2 + 31) & 0x40) == 0 )
    {
      v5 = *((_QWORD *)a2 + 12);
      v6 = a2;
      while ( v5 && *(_QWORD *)(v5 + 16) == v4 )
      {
        v6 = (struct tagWND *)v5;
        v5 = *(_QWORD *)(v5 + 96);
      }
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 20LL) & 0x20) != 0 && (*(_BYTE *)(v2 + 20) & 0x20) == 0 )
        v6 = a2;
      v7 = *(_QWORD *)(*((_QWORD *)v6 + 14) + 8LL);
      if ( (*(_BYTE *)(v7 + 10) & 1) != 0 || *(_WORD *)v7 == *(_WORD *)(gpsi + 898LL) )
        v6 = a2;
      if ( a2 == v6 )
      {
        v8 = *((_QWORD *)v6 + 10);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 88);
          if ( v9 )
          {
            v10 = *((_QWORD *)v6 + 2);
            while ( 1 )
            {
              if ( v10 == *(_QWORD *)(v9 + 16) )
              {
                v14 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 8LL);
                if ( *(_WORD *)v14 != *(_WORD *)(gpsi + 906LL)
                  && (*(_BYTE *)(v14 + 10) & 1) == 0
                  && *(_WORD *)v14 != *(_WORD *)(gpsi + 898LL)
                  && *(char *)(*(_QWORD *)(v9 + 40) + 20LL) >= 0 )
                {
                  if ( (unsigned int)WantImeWindow(*(struct tagWND **)(v9 + 80), (struct tagWND *)v9) )
                  {
                    if ( (*(_BYTE *)(v15 + 31) & 0x40) == 0 && v6 != (struct tagWND *)v9 )
                    {
                      v17 = *(_QWORD *)(v9 + 96);
                      if ( !v17 || v16 != *(_QWORD *)(v17 + 16) )
                        break;
                    }
                  }
                }
              }
              v9 = *(_QWORD *)(v9 + 64);
              if ( !v9 )
                goto LABEL_14;
            }
            v6 = (struct tagWND *)v9;
          }
        }
      }
LABEL_14:
      v11 = v6;
      if ( v6 )
      {
        while ( v11 != a1 )
        {
          v11 = (struct tagWND *)*((_QWORD *)v11 + 12);
          if ( !v11 )
            goto LABEL_17;
        }
        UserSetLastError(87LL);
      }
      else
      {
LABEL_17:
        if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL) )
          SetWindowGroupBand(a1);
        v18 = *(_OWORD *)LockPointer(v19, (char *)a1 + 96, v6);
        HMAssignmentLock(&v18);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v13 = (void *)ReferenceDwmApiPort();
          DwmAsyncOwnerChange(v13);
        }
      }
    }
  }
}
