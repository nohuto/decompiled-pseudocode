/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C008B6E0
 * Callers:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     zzzImeSetFutureOwner @ 0x1C0086C10 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00892FC (zzzImeSetOwnerWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C023B2D8 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     FVisCountable @ 0x1C002CD50 (FVisCountable.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C008BA50 (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008BAAC (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C008BB10 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     SetWindowCompositionInfo @ 0x1C008BDD4 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008BE98 (DwmAsyncSetCompositionAttribute.c)
 *     WindowHasShadow @ 0x1C008C214 (WindowHasShadow.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C023AB94 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C023B2D8 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int v6; // ebx
  unsigned int v7; // esi
  int v8; // r9d
  unsigned int CloakFlags; // r15d
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
  __int64 v21; // r8
  void *v22; // rax
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // r14
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // eax
  const struct tagWND *v30; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  __int64 v36; // r14
  _DWORD v37[10]; // [rsp+48h] [rbp-28h] BYREF

  v6 = -1073741816;
  memset(v37, 0, sizeof(v37));
  v7 = 0;
  if ( a2 )
    LOBYTE(v7) = *a2 != 0;
  else
    LOBYTE(v7) = a3 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v37) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v37);
    if ( (v7 || !a2) && a3 == CloakFlags )
    {
      v6 = 0;
LABEL_8:
      if ( (unsigned int)CoreWindowProp::IsHost((const struct tagWND *)a1) )
      {
        v30 = 0LL;
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow((const struct tagWND *)a1, v30);
          v30 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          v32 = *((_QWORD *)NextComponentWindow + 13);
          v33 = (__int64)NextComponentWindow;
          for ( i = 0LL; ; i = v36 )
          {
            OwnedWindow = NextOwnedWindow(i, v33, v32);
            v36 = OwnedWindow;
            if ( !OwnedWindow )
              break;
            v6 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
            if ( v6 < 0 )
              break;
            v32 = *(_QWORD *)(a1 + 104);
            v33 = a1;
          }
        }
      }
      if ( v6 >= 0 )
      {
        for ( j = 0LL; ; j = v12 )
        {
          v11 = NextOwnedWindow(j, a1, *(_QWORD *)(a1 + 104));
          v12 = v11;
          if ( !v11 )
            break;
          v6 = zzzSetWindowCompositionCloak(v11, a2, a3);
          if ( v6 < 0 )
            break;
        }
      }
LABEL_12:
      zzzEndDeferWinEventNotify();
      return (unsigned int)v6;
    }
    v14 = v8 & a3;
    if ( a2 )
    {
      v15 = v37[0];
      if ( v14 )
      {
        v15 = (v7 << 10) | v37[0] & 0xFFFFFBFF;
        v37[0] = v15;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_20:
        if ( !__CFSHR__(v15, 12) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) |= 0x10u;
        if ( (unsigned int)SetWindowCompositionInfo(a1, v37) )
        {
          v18 = (v15 & 0x400) != 0 || __CFSHR__(v15, 12);
          if ( (CloakFlags == 0) == v18 )
          {
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              v22 = (void *)ReferenceDwmApiPort(v20, v19, v21);
              v6 = DwmAsyncSetCompositionAttribute(v22);
            }
            else
            {
              v6 = 0;
            }
            if ( (unsigned int)WindowHasShadow(a1) )
              zzzCloakShadow(a1, v7);
            if ( FVisCountable(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
              v26 = *(_DWORD *)(v25 + 1020);
              v27 = *(_DWORD *)(v25 + 1016);
              if ( v7 )
              {
                v29 = v26 + 1;
                *(_DWORD *)(v25 + 1020) = v29;
                if ( v27 <= v29 && (*(_DWORD *)(v25 + 812) & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*(_QWORD *)v25, 5LL);
                  GreDxgkSetProcessStatus(v25, 2LL, 0LL);
                  *(_DWORD *)(v25 + 812) &= ~0x4000u;
                }
              }
              else
              {
                v28 = v26 - 1;
                *(_DWORD *)(v25 + 1020) = v28;
                if ( v27 > v28 && (*(_DWORD *)(v25 + 812) & 0x4000) == 0 )
                {
                  LOBYTE(v23) = 1;
                  GreDxgkSetProcessStatus(v25, 2LL, v23);
                  PsUpdateComponentPower(*(_QWORD *)v25, 5LL);
                  *(_DWORD *)(v25 + 812) |= 0x4000u;
                }
              }
            }
            v24 = 3;
            if ( !gdwDeferWinEvent )
              v24 = 1;
            xxxWindowEvent((v7 ^ 1) + 32791, v24);
          }
          else
          {
            v6 = 0;
          }
        }
        else
        {
          v6 = -1073741801;
        }
        if ( v6 < 0 )
          goto LABEL_12;
        goto LABEL_8;
      }
      v16 = v15 & 0xFFFFF7FF;
      v17 = v7 << 11;
    }
    else
    {
      v16 = ((v14 & 0xFFFFFFFD) << 10) | ((a3 & 2) << 10);
      v17 = v37[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    v37[0] = v15;
    goto LABEL_20;
  }
  return (unsigned int)v6;
}
