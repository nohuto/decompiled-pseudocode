/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C0019FCC
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C0017114 (zzzImeSetFutureOwner.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzImeSetOwnerWindow @ 0x1C0018FCC (zzzImeSetOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C023ACB8 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C00191E8 (DwmAsyncSetCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C001A340 (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C001A39C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001A400 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     SetWindowCompositionInfo @ 0x1C001A5F4 (SetWindowCompositionInfo.c)
 *     WindowHasShadow @ 0x1C001A824 (WindowHasShadow.c)
 *     FVisCountable @ 0x1C0027660 (FVisCountable.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C023A574 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C023ACB8 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, __int64 a2, unsigned int a3)
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
  bool v19; // zf
  __int64 v20; // xmm1_8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v24; // rax
  int v25; // edx
  __int64 v26; // r14
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  const struct tagWND *v31; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v33; // r8
  struct tagWND *v34; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  __int64 v37; // r14
  __int128 v38; // [rsp+30h] [rbp-40h] BYREF
  __int64 v39; // [rsp+40h] [rbp-30h]
  _DWORD v40[10]; // [rsp+48h] [rbp-28h] BYREF

  v38 = 0uLL;
  v39 = 0LL;
  v6 = -1073741816;
  memset(v40, 0, sizeof(v40));
  v7 = 0;
  if ( a2 )
  {
    v19 = *(_DWORD *)a2 == 0;
    v20 = *(_QWORD *)(a2 + 16);
    v38 = *(_OWORD *)a2;
    LOBYTE(v7) = !v19;
    v39 = v20;
  }
  else
  {
    LOBYTE(v7) = a3 != 0;
    LODWORD(v38) = v7;
  }
  if ( (unsigned int)GetWindowCompositionInfo(a1, v40) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v40);
    if ( (v7 || !a2) && a3 == CloakFlags )
    {
      v6 = 0;
LABEL_8:
      if ( (unsigned int)CoreWindowProp::IsHost((const struct tagWND *)a1) )
      {
        v31 = 0LL;
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow((const struct tagWND *)a1, v31);
          v31 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          v33 = *((_QWORD *)NextComponentWindow + 13);
          v34 = NextComponentWindow;
          for ( i = 0LL; ; i = v37 )
          {
            OwnedWindow = NextOwnedWindow(i, v34, v33);
            v37 = OwnedWindow;
            if ( !OwnedWindow )
              break;
            v6 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
            if ( v6 < 0 )
              break;
            v33 = *(_QWORD *)(a1 + 104);
            v34 = (struct tagWND *)a1;
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
      v15 = v40[0];
      if ( v14 )
      {
        v15 = (v7 << 10) | v40[0] & 0xFFFFFBFF;
        v40[0] = v15;
      }
      if ( (a3 & 2) == 0 )
      {
LABEL_20:
        if ( !__CFSHR__(v15, 12) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) |= 0x10u;
        if ( (unsigned int)SetWindowCompositionInfo(a1, v40) )
        {
          v18 = (v15 & 0x400) != 0 || __CFSHR__(v15, 12);
          if ( (CloakFlags == 0) == v18 )
          {
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              v24 = (void *)ReferenceDwmApiPort(v22, v21, v23);
              v6 = DwmAsyncSetCompositionAttribute(v24, *(_QWORD *)a1, 17, &v38);
            }
            else
            {
              v6 = 0;
            }
            if ( (unsigned int)WindowHasShadow(a1) )
              zzzCloakShadow(a1, v7);
            if ( (unsigned int)FVisCountable(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
              v27 = *(_DWORD *)(v26 + 1020);
              v28 = *(_DWORD *)(v26 + 1016);
              if ( v7 )
              {
                v30 = v27 + 1;
                *(_DWORD *)(v26 + 1020) = v30;
                if ( v28 <= v30 && (*(_DWORD *)(v26 + 812) & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*(_QWORD *)v26, 5LL);
                  GreDxgkSetProcessStatus(v26, 2LL);
                  *(_DWORD *)(v26 + 812) &= ~0x4000u;
                }
              }
              else
              {
                v29 = v27 - 1;
                *(_DWORD *)(v26 + 1020) = v29;
                if ( v28 > v29 && (*(_DWORD *)(v26 + 812) & 0x4000) == 0 )
                {
                  GreDxgkSetProcessStatus(v26, 2LL);
                  PsUpdateComponentPower(*(_QWORD *)v26, 5LL);
                  *(_DWORD *)(v26 + 812) |= 0x4000u;
                }
              }
            }
            v25 = 3;
            if ( !gdwDeferWinEvent )
              v25 = 1;
            xxxWindowEvent((v7 ^ 1) + 32791, v25);
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
      v17 = v40[0] & 0xFFFFF3FF;
    }
    v15 = v17 | v16;
    v40[0] = v15;
    goto LABEL_20;
  }
  return (unsigned int)v6;
}
