/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C0017114
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0018E90 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C001C420 (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C0019924 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001ABAC (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001AC2C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     DwmAsyncOwnerChange @ 0x1C0036950 (DwmAsyncOwnerChange.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C006078C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v22[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 5);
    v4 = *((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(v2 + 31) & 0x40) == 0 )
    {
      v5 = *((_QWORD *)a2 + 15);
      v6 = a2;
      while ( v5 && *(_QWORD *)(v5 + 16) == v4 )
      {
        v6 = (struct tagWND *)v5;
        v5 = *(_QWORD *)(v5 + 120);
      }
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 20LL) & 0x20) != 0 && (*(_BYTE *)(v2 + 20) & 0x20) == 0 )
        v6 = a2;
      v7 = *(_QWORD *)(*((_QWORD *)v6 + 17) + 8LL);
      if ( (*(_BYTE *)(v7 + 10) & 1) != 0 || *(_WORD *)v7 == *(_WORD *)(gpsi + 898LL) )
        v6 = a2;
      if ( a2 == v6 )
      {
        v8 = *((_QWORD *)v6 + 13);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 112);
          if ( v9 )
          {
            v10 = *((_QWORD *)v6 + 2);
            while ( 1 )
            {
              if ( v10 == *(_QWORD *)(v9 + 16) )
              {
                v17 = *(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL);
                if ( *(_WORD *)v17 != *(_WORD *)(gpsi + 906LL)
                  && (*(_BYTE *)(v17 + 10) & 1) == 0
                  && *(_WORD *)v17 != *(_WORD *)(gpsi + 898LL)
                  && *(char *)(*(_QWORD *)(v9 + 40) + 20LL) >= 0 )
                {
                  if ( (unsigned int)WantImeWindow(*(struct tagWND **)(v9 + 104), (struct tagWND *)v9) )
                  {
                    if ( (*(_BYTE *)(v18 + 31) & 0x40) == 0 && v6 != (struct tagWND *)v9 )
                    {
                      v20 = *(_QWORD *)(v9 + 120);
                      if ( !v20 || v19 != *(_QWORD *)(v20 + 16) )
                        break;
                    }
                  }
                }
              }
              v9 = *(_QWORD *)(v9 + 88);
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
          v11 = (struct tagWND *)*((_QWORD *)v11 + 15);
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
        v21 = *(_OWORD *)LockPointer(v22, (char *)a1 + 120, v6);
        HMAssignmentLock(&v21);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v6);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v16 = (void *)ReferenceDwmApiPort(v14, v13, v15);
          DwmAsyncOwnerChange(v16);
        }
      }
    }
  }
}
