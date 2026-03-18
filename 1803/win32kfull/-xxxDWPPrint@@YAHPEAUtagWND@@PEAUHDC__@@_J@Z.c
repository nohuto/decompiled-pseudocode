/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     GreSaveDC @ 0x1C0078AB8 (GreSaveDC.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     GreSetWindowOrg @ 0x1C00F2B74 (GreSetWindowOrg.c)
 *     _IsWindowVisible @ 0x1C0105790 (_IsWindowVisible.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, char a3)
{
  char v3; // si
  struct tagWND *v5; // rbx
  BOOL v6; // r13d
  char v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  struct tagBWL *v11; // rax
  __int64 v12; // rdx
  struct tagBWL *v13; // r15
  unsigned __int64 *i; // r12
  __int64 DesktopWindow; // rax
  struct tagBWL *v16; // rax
  __int64 v17; // rdx
  struct tagBWL *v18; // rbx
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rcx
  struct tagWND *v21; // r12
  __int64 v22; // rax
  ULONG_PTR v23; // r14
  unsigned int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned int v33; // r13d
  __int64 v34; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct tagBWL *v39; // rcx
  int v40; // r12d
  int v41; // r14d
  unsigned int v42; // r13d
  __int64 v43; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR v44; // [rsp+40h] [rbp-10h]
  unsigned int v45; // [rsp+90h] [rbp+40h]
  int v46; // [rsp+A0h] [rbp+50h] BYREF
  int v47; // [rsp+A4h] [rbp+54h]
  struct tagWND *v48; // [rsp+A8h] [rbp+58h]

  v48 = a1;
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
    SetOrClrWF(1, (__int64)v5, 384, 1);
    v8 = *((_QWORD *)v5 + 5);
    if ( v6 )
    {
      v40 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88);
      v45 = GreSetLayout(a2, (unsigned int)(v40 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((ULONG_PTR)v5, a2, (*(_BYTE *)(*((_QWORD *)v5 + 5) + 16LL) & 0x40) != 0);
      else
        xxxSendMessage((ULONG_PTR)v5);
      GreSetLayout(a2, (unsigned int)(v40 - 1), v45);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame((ULONG_PTR)v5, a2, (*(_BYTE *)(v8 + 16) & 0x40) != 0);
    }
    else
    {
      xxxSendMessage((ULONG_PTR)v5);
    }
    SetOrClrWF(0, (__int64)v5, 384, 1);
    if ( !v7 )
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v9 = GreSaveDC(a2);
  if ( !v9 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v46);
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
    v41 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v5 + 5) + 104LL);
    v42 = GreSetLayout(a2, (unsigned int)(v41 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
    GreSetLayout(a2, (unsigned int)(v41 - 1), v42);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage((ULONG_PTR)v5);
    xxxSendMessage((ULONG_PTR)v5);
  }
  GreRestoreDC(a2, v9);
  v10 = *((_QWORD *)v5 + 5);
  v46 += *(_DWORD *)(v10 + 88);
  v47 += *(_DWORD *)(v10 + 92);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xF4 | 0xA;
    v11 = BuildHwndList(*((_QWORD **)v5 + 11), 2, 0LL);
    v13 = v11;
    if ( v11 )
    {
      for ( i = (unsigned __int64 *)((char *)v11 + 32); *i != 1; ++i )
      {
        LOBYTE(v12) = 1;
        v31 = HMValidateHandleNoSecure(*i, v12);
        v5 = (struct tagWND *)v31;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 40);
          if ( (*(_BYTE *)(v32 + 31) & 0x10) != 0 )
          {
            v33 = GreSaveDC(a2);
            if ( !v33 )
            {
              v39 = v13;
              goto LABEL_47;
            }
            GreSetWindowOrg(a2);
            v34 = *(_QWORD *)(*((_QWORD *)v5 + 14) + 8LL);
            if ( *(char *)(v34 + 8) >= 0 )
              GreIntersectClipRect(
                a2,
                0LL,
                0LL,
                (unsigned int)(*(_DWORD *)(v32 + 96) - *(_DWORD *)(v32 + 88)),
                *(_DWORD *)(v32 + 100) - *(_DWORD *)(v32 + 92));
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34);
            v43 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v43;
            v44 = (ULONG_PTR)v5;
            _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
            xxxSendMessage((ULONG_PTR)v5);
            ThreadUnlock1(v37, v36, v38);
            GreRestoreDC(a2, v33);
          }
        }
      }
      FreeHwndList(v13);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v16 = BuildHwndList(*(_QWORD **)(DesktopWindow + 88), 2, 0LL);
  v18 = v16;
  if ( !v16 )
    return 1LL;
  v19 = (unsigned __int64 *)((char *)v16 + 32);
  v20 = *((_QWORD *)v16 + 4);
  if ( v20 == 1 )
  {
LABEL_32:
    FreeHwndList(v18);
    return 1LL;
  }
  v21 = v48;
  while ( 1 )
  {
    LOBYTE(v17) = 1;
    v22 = HMValidateHandleNoSecure(v20, v17);
    v23 = v22;
    if ( !v22 || *(struct tagWND **)(v22 + 96) != v21 || (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_31;
    v25 = GreSaveDC(a2);
    if ( !v25 )
      break;
    GreSetWindowOrg(a2);
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
    v43 = *(_QWORD *)(v27 + 408);
    *(_QWORD *)(v27 + 408) = &v43;
    v44 = v23;
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    xxxSendMessage(v23);
    ThreadUnlock1(v29, v28, v30);
    GreRestoreDC(a2, v25);
LABEL_31:
    v20 = *++v19;
    if ( *v19 == 1 )
      goto LABEL_32;
  }
  v39 = v18;
LABEL_47:
  FreeHwndList(v39);
  return 0LL;
}
