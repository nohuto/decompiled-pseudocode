/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C006FAFC
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     zzzImeSetFutureOwner @ 0x1C006D7A0 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C006EBFC (zzzImeSetOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C01FACA4 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C006FE0C (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006FE5C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C006FE8C (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     SetWindowCompositionInfo @ 0x1C0070090 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00702C4 (DwmAsyncSetCompositionAttribute.c)
 *     FVisCountable @ 0x1C0075F80 (FVisCountable.c)
 *     WindowHasShadow @ 0x1C007CCEC (WindowHasShadow.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C01F9DC4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C01FACA4 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // ebx
  unsigned int CloakFlags; // eax
  int v7; // r9d
  unsigned int v8; // edx
  __int64 j; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // eax
  BOOL v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  void *v21; // rax
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // eax
  const struct tagWND *v29; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  _DWORD v35[12]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v38; // [rsp+B8h] [rbp+38h]
  __int64 v39; // [rsp+B8h] [rbp+38h]
  __int64 v40; // [rsp+B8h] [rbp+38h]

  v3 = 0;
  v5 = -1073741816;
  if ( a2 )
    LOBYTE(v3) = *a2 != 0;
  else
    LOBYTE(v3) = a3 != 0;
  if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v35) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v35);
    v38 = CloakFlags;
    if ( !v3 && a2 )
    {
      v8 = a3;
    }
    else
    {
      v8 = a3;
      if ( a3 == CloakFlags )
      {
        v5 = 0;
LABEL_8:
        if ( (unsigned int)CoreWindowProp::IsHost((const struct tagWND *)a1) )
        {
          v29 = 0LL;
          while ( 1 )
          {
            NextComponentWindow = CoreWindowProp::GetNextComponentWindow((const struct tagWND *)a1, v29);
            v29 = NextComponentWindow;
            if ( !NextComponentWindow )
              break;
            v31 = *((_QWORD *)NextComponentWindow + 10);
            v32 = (__int64)NextComponentWindow;
            for ( i = 0LL; ; i = v40 )
            {
              OwnedWindow = NextOwnedWindow(i, v32, v31);
              v40 = OwnedWindow;
              if ( !OwnedWindow )
                break;
              v5 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
              if ( v5 < 0 )
                break;
              v31 = *(_QWORD *)(a1 + 80);
              v32 = a1;
            }
          }
        }
        if ( v5 >= 0 )
        {
          for ( j = 0LL; ; j = v11 )
          {
            v10 = NextOwnedWindow(j, a1, *(_QWORD *)(a1 + 80));
            v11 = v10;
            if ( !v10 )
              break;
            v5 = zzzSetWindowCompositionCloak(v10, a2, a3);
            if ( v5 < 0 )
              break;
          }
        }
LABEL_12:
        zzzEndDeferWinEventNotify();
        return (unsigned int)v5;
      }
    }
    v13 = v7 & v8;
    if ( a2 )
    {
      v14 = v35[0];
      if ( v13 )
      {
        v14 = (v3 << 10) | v35[0] & 0xFFFFFBFF;
        v35[0] = v14;
      }
      if ( (v8 & 2) == 0 )
      {
LABEL_24:
        if ( !__CFSHR__(v14, 12) )
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) |= 0x10u;
        if ( (unsigned int)SetWindowCompositionInfo(a1, v35) )
        {
          v17 = (v14 & 0x400) != 0 || __CFSHR__(v14, 12);
          if ( (v38 == 0) == v17 )
          {
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              v21 = (void *)ReferenceDwmApiPort(v19, v18, v20);
              v5 = DwmAsyncSetCompositionAttribute(v21);
            }
            else
            {
              v5 = 0;
            }
            if ( (unsigned int)WindowHasShadow(a1) )
              zzzCloakShadow(a1, v3);
            if ( (unsigned int)FVisCountable(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
              v39 = v24;
              v25 = *(_DWORD *)(v24 + 1020);
              v26 = *(_DWORD *)(v24 + 1016);
              if ( v3 )
              {
                v28 = v25 + 1;
                *(_DWORD *)(v24 + 1020) = v28;
                if ( v26 <= v28 && (*(_DWORD *)(v24 + 812) & 0x4000) != 0 )
                {
                  PsUpdateComponentPower(*(_QWORD *)v24, 5LL);
                  GreDxgkSetProcessStatus(v39, 2LL, 0LL);
                  *(_DWORD *)(v39 + 812) &= ~0x4000u;
                }
              }
              else
              {
                v27 = v25 - 1;
                *(_DWORD *)(v24 + 1020) = v27;
                if ( v26 > v27 && (*(_DWORD *)(v24 + 812) & 0x4000) == 0 )
                {
                  LOBYTE(v22) = 1;
                  GreDxgkSetProcessStatus(v24, 2LL, v22);
                  PsUpdateComponentPower(*(_QWORD *)v39, 5LL);
                  *(_DWORD *)(v39 + 812) |= 0x4000u;
                }
              }
            }
            v23 = 3;
            if ( !gdwDeferWinEvent )
              v23 = 1;
            xxxWindowEvent((v3 ^ 1) + 32791, a1, 0, 0, v23);
          }
          else
          {
            v5 = 0;
          }
        }
        else
        {
          v5 = -1073741801;
        }
        if ( v5 < 0 )
          goto LABEL_12;
        goto LABEL_8;
      }
      v15 = v14 & 0xFFFFF7FF;
      v16 = v3 << 11;
    }
    else
    {
      v15 = ((v13 & 0xFFFFFFFD) << 10) | ((v8 & 2) << 10);
      v16 = v35[0] & 0xFFFFF3FF;
    }
    v14 = v16 | v15;
    v35[0] = v14;
    goto LABEL_24;
  }
  return (unsigned int)v5;
}
