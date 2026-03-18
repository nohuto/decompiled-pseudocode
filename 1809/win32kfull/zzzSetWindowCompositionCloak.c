/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C0072E2C
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C000C0C4 (zzzImeSetFutureOwner.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzImeSetOwnerWindow @ 0x1C000CB74 (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C0222C6C (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0072A2C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C0073170 (NextOwnedWindow.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00731CC (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     WindowHasShadow @ 0x1C0079DF8 (WindowHasShadow.c)
 *     FVisCountable @ 0x1C007A4C0 (FVisCountable.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00BA730 (DwmAsyncSetCompositionAttribute.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C02224BC (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C0222C6C (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v7; // ebx
  int v8; // r9d
  unsigned int CloakFlags; // r12d
  __int64 j; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  BOOL v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r14
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  const struct tagWND *v28; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  __int64 v34; // r14
  _DWORD v35[10]; // [rsp+48h] [rbp-28h] BYREF

  v3 = 0;
  v7 = -1073741816;
  if ( a2 )
    LOBYTE(v3) = *a2 != 0;
  else
    LOBYTE(v3) = a3 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v35) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v35);
    if ( (v3 || !a2) && a3 == CloakFlags )
    {
      v7 = 0;
LABEL_8:
      if ( (unsigned int)CoreWindowProp::IsHost((const struct tagWND *)a1) )
      {
        v28 = 0LL;
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow((const struct tagWND *)a1, v28);
          v28 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          v30 = *((_QWORD *)NextComponentWindow + 10);
          v31 = (__int64)NextComponentWindow;
          for ( i = 0LL; ; i = v34 )
          {
            OwnedWindow = NextOwnedWindow(i, v31, v30);
            v34 = OwnedWindow;
            if ( !OwnedWindow )
              break;
            v7 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
            if ( v7 < 0 )
              break;
            v30 = *(_QWORD *)(a1 + 80);
            v31 = a1;
          }
        }
      }
      if ( v7 >= 0 )
      {
        for ( j = 0LL; ; j = v12 )
        {
          v11 = NextOwnedWindow(j, a1, *(_QWORD *)(a1 + 80));
          v12 = v11;
          if ( !v11 )
            break;
          v7 = zzzSetWindowCompositionCloak(v11, a2, a3);
          if ( v7 < 0 )
            break;
        }
      }
LABEL_12:
      zzzEndDeferWinEventNotify();
      return (unsigned int)v7;
    }
    v14 = v8 & a3;
    if ( a2 )
    {
      v15 = v35[0];
      if ( v14 )
      {
        v15 = (v3 << 10) | v35[0] & 0xFFFFFBFF;
        v35[0] = v15;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_22:
        if ( !__CFSHR__(v15, 12) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) |= 0x10u;
        if ( (unsigned int)SetWindowCompositionInfo(a1, v35) )
        {
          v18 = (v15 & 0x400) != 0 || __CFSHR__(v15, 12);
          if ( (CloakFlags == 0) == v18 )
          {
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              v21 = (void *)ReferenceDwmApiPort(v20, v19);
              v7 = DwmAsyncSetCompositionAttribute(v21);
            }
            else
            {
              v7 = 0;
            }
            if ( (unsigned int)WindowHasShadow(a1) )
              zzzCloakShadow(a1, v3);
            if ( (unsigned int)FVisCountable(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
              v24 = *(_DWORD *)(v23 + 1028);
              v25 = *(_DWORD *)(v23 + 1024);
              if ( v3 )
              {
                v27 = v24 + 1;
                *(_DWORD *)(v23 + 1028) = v27;
                if ( v25 <= v27 && (*(_DWORD *)(v23 + 820) & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*(_QWORD *)v23, 5LL);
                  GreDxgkSetProcessStatus(v23, 2LL);
                  *(_DWORD *)(v23 + 820) &= ~0x4000u;
                }
              }
              else
              {
                v26 = v24 - 1;
                *(_DWORD *)(v23 + 1028) = v26;
                if ( v25 > v26 && (*(_DWORD *)(v23 + 820) & 0x4000) == 0 )
                {
                  GreDxgkSetProcessStatus(v23, 2LL);
                  PsUpdateComponentPower(*(_QWORD *)v23, 5LL);
                  *(_DWORD *)(v23 + 820) |= 0x4000u;
                }
              }
            }
            v22 = 3;
            if ( !gdwDeferWinEvent )
              v22 = 1;
            xxxWindowEvent((v3 ^ 1) + 32791, a1, 0, 0, v22);
          }
          else
          {
            v7 = 0;
          }
        }
        else
        {
          v7 = -1073741801;
        }
        if ( v7 < 0 )
          goto LABEL_12;
        goto LABEL_8;
      }
      v16 = v15 & 0xFFFFF7FF;
      v17 = v3 << 11;
    }
    else
    {
      v16 = ((v14 & 0xFFFFFFFD) << 10) | ((a3 & 2) << 10);
      v17 = v35[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    v35[0] = v15;
    goto LABEL_22;
  }
  return (unsigned int)v7;
}
