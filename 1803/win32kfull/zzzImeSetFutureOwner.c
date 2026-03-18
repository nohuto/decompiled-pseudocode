/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C006D7A0
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0070A70 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C0070C90 (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0034C20 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0070A0C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C0073B50 (GetWindowCloakStateComponentUIAware.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagWND *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rsi
  struct tagWND *v9; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // rax
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

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
        a2 = (struct tagWND *)*((_QWORD *)v6 + 10);
        if ( a2 )
        {
          a2 = (struct tagWND *)*((_QWORD *)a2 + 11);
          if ( a2 )
          {
            v8 = *((_QWORD *)v6 + 2);
            while ( 1 )
            {
              if ( v8 == *((_QWORD *)a2 + 2) )
              {
                v15 = *(_QWORD *)(*((_QWORD *)a2 + 14) + 8LL);
                if ( *(_WORD *)v15 != *(_WORD *)(gpsi + 906LL)
                  && (*(_BYTE *)(v15 + 10) & 1) == 0
                  && *(_WORD *)v15 != *(_WORD *)(gpsi + 898LL)
                  && *(char *)(*((_QWORD *)a2 + 5) + 20LL) >= 0 )
                {
                  if ( (unsigned int)WantImeWindow(*((struct tagWND **)a2 + 10), a2) )
                  {
                    if ( (*(_BYTE *)(v16 + 31) & 0x40) == 0 && v6 != a2 )
                    {
                      v18 = *((_QWORD *)a2 + 12);
                      if ( !v18 || v17 != *(_QWORD *)(v18 + 16) )
                        break;
                    }
                  }
                }
              }
              a2 = (struct tagWND *)*((_QWORD *)a2 + 8);
              if ( !a2 )
                goto LABEL_14;
            }
            v6 = a2;
          }
        }
      }
LABEL_14:
      v9 = v6;
      if ( v6 )
      {
        while ( v9 != a1 )
        {
          v9 = (struct tagWND *)*((_QWORD *)v9 + 12);
          if ( !v9 )
            goto LABEL_17;
        }
        UserSetLastError(87LL, (__int64)a2);
      }
      else
      {
LABEL_17:
        if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)v6 + 5) + 236LL) )
          SetWindowGroupBand(a1);
        v19 = *(_OWORD *)LockPointer(v20, (char *)a1 + 96, v6);
        HMAssignmentLock(&v19);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v14 = (void *)ReferenceDwmApiPort(v12, v11, v13);
          DwmAsyncOwnerChange(v14);
        }
      }
    }
  }
}
