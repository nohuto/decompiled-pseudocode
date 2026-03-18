/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreSaveDC @ 0x1C008DF10 (GreSaveDC.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     GreSetWindowOrg @ 0x1C00F8EE8 (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1C0130C0C (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, char a3)
{
  char v3; // si
  struct tagWND *v5; // rbx
  BOOL v6; // r12d
  int v7; // r13d
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagBWL *v15; // r15
  unsigned __int64 *i; // r12
  __int64 DesktopWindow; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct tagBWL *v22; // rbx
  unsigned __int64 *v23; // rsi
  unsigned __int64 v24; // rcx
  struct tagWND *v25; // r12
  __int64 v26; // rax
  ULONG_PTR v27; // r14
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r14
  unsigned int v39; // r13d
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r15d
  struct tagBWL *v48; // rcx
  int v49; // r14d
  unsigned int v50; // r12d
  __int64 v51; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR v52; // [rsp+40h] [rbp-10h]
  __int64 v53; // [rsp+48h] [rbp-8h]
  unsigned int v54; // [rsp+90h] [rbp+40h]
  __int64 v55; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v56; // [rsp+A8h] [rbp+58h]

  v55 = 0LL;
  v56 = a1;
  v3 = a3;
  v51 = 0LL;
  v5 = a1;
  v52 = 0LL;
  v53 = 0LL;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
    return 0LL;
  v6 = (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v3 & 2) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      SetVisible(v5, 5u);
    }
    SetOrClrWF(1, (__int64)v5, 0x180u, 1);
    v8 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v47 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v54 = GreSetLayout(a2, (unsigned int)(v47 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, a2, (*(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40) != 0);
      else
        xxxSendMessage((ULONG_PTR)v5);
      GreSetLayout(a2, (unsigned int)(v47 - 1), v54);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame(v5, a2, (*(_BYTE *)(v8 + 16) & 0x40) != 0);
    }
    else
    {
      xxxSendMessage((ULONG_PTR)v5);
    }
    SetOrClrWF(0, (__int64)v5, 0x180u, 1);
    if ( v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v9 = GreSaveDC((__int64)a2, (__int64)a2);
  if ( !v9 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v55);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL)),
    *(_DWORD *)(*((_QWORD *)v5 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 108LL));
  if ( v6 )
  {
    v49 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v50 = GreSetLayout(a2, (unsigned int)(v49 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
    GreSetLayout(a2, (unsigned int)(v49 - 1), v50);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
  }
  GreRestoreDC(a2, v9);
  v10 = *((_QWORD *)v5 + 5);
  LODWORD(v55) = *(_DWORD *)(v10 + 88) + v55;
  HIDWORD(v55) += *(_DWORD *)(v10 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v11 = BuildHwndList(*((struct tagWND **)v5 + 14));
    v15 = (struct tagBWL *)v11;
    if ( v11 )
    {
      for ( i = (unsigned __int64 *)(v11 + 32); *i != 1; ++i )
      {
        LOBYTE(v12) = 1;
        v37 = HMValidateHandleNoSecure(*i, v12, v13, v14);
        v5 = (struct tagWND *)v37;
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 40);
          if ( (*(_BYTE *)(v38 + 31) & 0x10) != 0 )
          {
            v39 = GreSaveDC((__int64)a2, v12);
            if ( !v39 )
            {
              v48 = v15;
              goto LABEL_55;
            }
            GreSetWindowOrg(a2);
            v42 = *(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL);
            if ( *(char *)(v42 + 8) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v38 + 96) - *(_DWORD *)(v38 + 88)),
                *(_DWORD *)(v38 + 100) - *(_DWORD *)(v38 + 92));
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v40, v41);
            v51 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v51;
            v52 = (ULONG_PTR)v5;
            HMLockObject(v5);
            xxxSendMessage((ULONG_PTR)v5);
            ThreadUnlock1(v45, v44, v46);
            GreRestoreDC(a2, v39);
          }
        }
      }
      FreeHwndList(v15);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v18 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112));
  v22 = (struct tagBWL *)v18;
  if ( !v18 )
    return 1LL;
  v23 = (unsigned __int64 *)(v18 + 32);
  v24 = *(_QWORD *)(v18 + 32);
  if ( v24 == 1 )
  {
LABEL_32:
    FreeHwndList(v22);
    return 1LL;
  }
  v25 = v56;
  while ( 1 )
  {
    LOBYTE(v19) = 1;
    v26 = HMValidateHandleNoSecure(v24, v19, v20, v21);
    v27 = v26;
    if ( !v26 || *(struct tagWND **)(v26 + 120) != v25 || (*(_BYTE *)(*(_QWORD *)(v26 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v29 = GreSaveDC((__int64)a2, v19);
    if ( !v29 )
      break;
    GreSetWindowOrg(a2);
    v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32);
    v51 = *(_QWORD *)(v33 + 408);
    *(_QWORD *)(v33 + 408) = &v51;
    v52 = v27;
    HMLockObject(v27);
    xxxSendMessage(v27);
    ThreadUnlock1(v35, v34, v36);
    GreRestoreDC(a2, v29);
LABEL_31:
    v24 = *++v23;
    if ( *v23 == 1 )
      goto LABEL_32;
  }
  v48 = v22;
LABEL_55:
  FreeHwndList(v48);
  return 0LL;
}
