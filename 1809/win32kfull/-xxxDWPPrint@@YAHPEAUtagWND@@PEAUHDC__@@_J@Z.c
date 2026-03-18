/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C920
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     GreSaveDC @ 0x1C0056E34 (GreSaveDC.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GreSetWindowOrg @ 0x1C010CD44 (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1C0125C64 (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, char a3)
{
  char v3; // si
  struct tagWND *v5; // rbx
  BOOL v6; // r13d
  char v7; // r14
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rcx
  struct tagBWL *v12; // rax
  __int64 v13; // rdx
  struct tagBWL *v14; // r15
  unsigned __int64 *i; // r12
  __int64 DesktopWindow; // rax
  struct tagBWL *v17; // rax
  __int64 v18; // rdx
  struct tagBWL *v19; // rbx
  unsigned __int64 *v20; // rsi
  unsigned __int64 v21; // rcx
  struct tagWND *v22; // r12
  __int64 v23; // rax
  ULONG_PTR v24; // r14
  unsigned int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // r13d
  __int64 v33; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r12d
  __int64 v38; // r9
  struct tagBWL *v39; // rcx
  int v40; // r14d
  unsigned int v41; // r13d
  __int64 v42; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR v43; // [rsp+40h] [rbp-10h]
  unsigned int v44; // [rsp+90h] [rbp+40h]
  int v45; // [rsp+A0h] [rbp+50h] BYREF
  int v46; // [rsp+A4h] [rbp+54h]
  struct tagWND *v47; // [rsp+A8h] [rbp+58h]

  v47 = a1;
  v3 = a3;
  v5 = a1;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible(a1) )
    return 0LL;
  v6 = (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v3 & 2) != 0 )
  {
    v7 = *(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10;
    if ( !v7 )
      SetVisible(v5, 5u);
    SetOrClrWF(1, (__int64)v5, 0x180u, 1);
    v9 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v37 = *(_DWORD *)(v9 + 96) - *(_DWORD *)(v9 + 88);
      v44 = GreSetLayout(a2, (unsigned int)(v37 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((ULONG_PTR)v5, a2, (*(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40) != 0, v38);
      else
        xxxSendMessage((ULONG_PTR)v5);
      GreSetLayout(a2, (unsigned int)(v37 - 1), v44);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame((ULONG_PTR)v5, a2, (*(_BYTE *)(v9 + 16) & 0x40) != 0, v8);
    }
    else
    {
      xxxSendMessage((ULONG_PTR)v5);
    }
    SetOrClrWF(0, (__int64)v5, 0x180u, 1);
    if ( !v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v10 = GreSaveDC(a2);
  if ( !v10 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v45);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(a2);
  if ( v6 )
  {
    v40 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v41 = GreSetLayout(a2, (unsigned int)(v40 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
    GreSetLayout(a2, (unsigned int)(v40 - 1), v41);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
  }
  GreRestoreDC(a2, v10);
  v11 = *((_QWORD *)v5 + 5);
  v45 += *(_DWORD *)(v11 + 88);
  v46 += *(_DWORD *)(v11 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v12 = BuildHwndList(*((struct tagWND **)v5 + 11), 2, 0LL);
    v14 = v12;
    if ( v12 )
    {
      for ( i = (unsigned __int64 *)((char *)v12 + 32); *i != 1; ++i )
      {
        LOBYTE(v13) = 1;
        v31 = HMValidateHandleNoSecure(*i, v13);
        v5 = (struct tagWND *)v31;
        if ( v31 && (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 0x10) != 0 )
        {
          v32 = GreSaveDC(a2);
          if ( !v32 )
          {
            v39 = v14;
            goto LABEL_54;
          }
          GreSetWindowOrg(a2);
          v33 = *(_QWORD *)(*((_QWORD *)v5 + 14) + 8LL);
          if ( *(char *)(v33 + 8) >= 0 )
            GreIntersectClipRect(a2);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33);
          v42 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v42;
          v43 = (ULONG_PTR)v5;
          _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
          xxxSendMessage((ULONG_PTR)v5);
          ThreadUnlock1(v36, v35);
          GreRestoreDC(a2, v32);
        }
      }
      FreeHwndList(v14);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v17 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 88), 2, 0LL);
  v19 = v17;
  if ( !v17 )
    return 1LL;
  v20 = (unsigned __int64 *)((char *)v17 + 32);
  v21 = *((_QWORD *)v17 + 4);
  if ( v21 == 1 )
  {
LABEL_32:
    FreeHwndList(v19);
    return 1LL;
  }
  v22 = v47;
  while ( 1 )
  {
    LOBYTE(v18) = 1;
    v23 = HMValidateHandleNoSecure(v21, v18);
    v24 = v23;
    if ( !v23 || *(struct tagWND **)(v23 + 96) != v22 || (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v26 = GreSaveDC(a2);
    if ( !v26 )
      break;
    GreSetWindowOrg(a2);
    v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27);
    v42 = *(_QWORD *)(v28 + 416);
    *(_QWORD *)(v28 + 416) = &v42;
    v43 = v24;
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    xxxSendMessage(v24);
    ThreadUnlock1(v30, v29);
    GreRestoreDC(a2, v26);
LABEL_31:
    v21 = *++v20;
    if ( *v20 == 1 )
      goto LABEL_32;
  }
  v39 = v19;
LABEL_54:
  FreeHwndList(v39);
  return 0LL;
}
