/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreSaveDC @ 0x1C00AD5CC (GreSaveDC.c)
 *     GreSetWindowOrg @ 0x1C00F043C (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1C010B4FC (_IsWindowVisible.c)
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
  struct tagBWL *v14; // r15
  unsigned __int64 *i; // r12
  __int64 DesktopWindow; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct tagBWL *v20; // rbx
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // rcx
  struct tagWND *v23; // r12
  __int64 v24; // rax
  ULONG_PTR v25; // r14
  unsigned int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned int v35; // r13d
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r15d
  struct tagBWL *v43; // rcx
  int v44; // r14d
  unsigned int v45; // r12d
  __int64 v46; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR v47; // [rsp+40h] [rbp-10h]
  __int64 v48; // [rsp+48h] [rbp-8h]
  unsigned int v49; // [rsp+90h] [rbp+40h]
  __int64 v50; // [rsp+A0h] [rbp+50h] BYREF
  struct tagWND *v51; // [rsp+A8h] [rbp+58h]

  v50 = 0LL;
  v51 = a1;
  v3 = a3;
  v46 = 0LL;
  v5 = a1;
  v47 = 0LL;
  v48 = 0LL;
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
      v42 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v49 = GreSetLayout(a2, (unsigned int)(v42 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame(v5, a2, (*(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40) != 0);
      else
        xxxSendMessage((ULONG_PTR)v5);
      GreSetLayout(a2, (unsigned int)(v42 - 1), v49);
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
  v9 = GreSaveDC(a2);
  if ( !v9 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v50);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(a2);
  if ( v6 )
  {
    v44 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v45 = GreSetLayout(a2, (unsigned int)(v44 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
    GreSetLayout(a2, (unsigned int)(v44 - 1), v45);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
  }
  GreRestoreDC(a2, v9);
  v10 = *((_QWORD *)v5 + 5);
  LODWORD(v50) = *(_DWORD *)(v10 + 88) + v50;
  HIDWORD(v50) += *(_DWORD *)(v10 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v11 = BuildHwndList(*((struct tagWND **)v5 + 14));
    v14 = (struct tagBWL *)v11;
    if ( v11 )
    {
      for ( i = (unsigned __int64 *)(v11 + 32); *i != 1; ++i )
      {
        LOBYTE(v12) = 1;
        v34 = HMValidateHandleNoSecure(*i, v12, v13);
        v5 = (struct tagWND *)v34;
        if ( v34 && (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 31LL) & 0x10) != 0 )
        {
          v35 = GreSaveDC(a2);
          if ( !v35 )
          {
            v43 = v14;
            goto LABEL_55;
          }
          GreSetWindowOrg(a2);
          v37 = *(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL);
          if ( *(char *)(v37 + 8) >= 0 )
            GreIntersectClipRect(a2);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v36);
          v46 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v46;
          v47 = (ULONG_PTR)v5;
          HMLockObject(v5);
          xxxSendMessage((ULONG_PTR)v5);
          ThreadUnlock1(v40, v39, v41);
          GreRestoreDC(a2, v35);
        }
      }
      FreeHwndList(v14);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v17 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112));
  v20 = (struct tagBWL *)v17;
  if ( !v17 )
    return 1LL;
  v21 = (unsigned __int64 *)(v17 + 32);
  v22 = *(_QWORD *)(v17 + 32);
  if ( v22 == 1 )
  {
LABEL_32:
    FreeHwndList(v20);
    return 1LL;
  }
  v23 = v51;
  while ( 1 )
  {
    LOBYTE(v18) = 1;
    v24 = HMValidateHandleNoSecure(v22, v18, v19);
    v25 = v24;
    if ( !v24 || *(struct tagWND **)(v24 + 120) != v23 || (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v27 = GreSaveDC(a2);
    if ( !v27 )
      break;
    GreSetWindowOrg(a2);
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29);
    v46 = *(_QWORD *)(v30 + 408);
    *(_QWORD *)(v30 + 408) = &v46;
    v47 = v25;
    HMLockObject(v25);
    xxxSendMessage(v25);
    ThreadUnlock1(v32, v31, v33);
    GreRestoreDC(a2, v27);
LABEL_31:
    v22 = *++v21;
    if ( *v21 == 1 )
      goto LABEL_32;
  }
  v43 = v20;
LABEL_55:
  FreeHwndList(v43);
  return 0LL;
}
