/*
 * XREFs of xxxSetWindowStyle @ 0x1C003C020
 * Callers:
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E8FD0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F80CC (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F8234 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     IncVisWindows @ 0x1C0027544 (IncVisWindows.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00689E4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     DecVisWindows @ 0x1C00F8FD8 (DecVisWindows.c)
 *     _IsWindowVisible @ 0x1C010B4FC (_IsWindowVisible.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     VerifyChildMenu @ 0x1C0165C60 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01DA214 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01E9B1C (xxxTurnOffCompositing.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // r14d
  int v6; // r12d
  __int64 v7; // rsi
  int v8; // r15d
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r13d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // esi
  __int64 v26; // r11
  char v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r10
  struct tagWND *i; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // r8
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // edi
  struct tagWND *j; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // edi
  int v47; // edx
  int v48; // edx
  __int64 v49; // r13
  int v50; // edi
  int v51; // r14d
  int v52; // ecx
  int v53; // edx
  __int64 v54; // rdx
  int v55; // r8d
  int v56; // eax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // esi
  __int64 v62; // r14
  void *v63; // rdi
  int v64; // r14d
  __int64 v65; // rdx
  int v66; // [rsp+40h] [rbp-29h] BYREF
  __int16 v67; // [rsp+44h] [rbp-25h]
  __int128 v68; // [rsp+46h] [rbp-23h]
  __int128 v69; // [rsp+56h] [rbp-13h]
  __int16 v70; // [rsp+66h] [rbp-3h]
  int v71; // [rsp+68h] [rbp-1h]
  __int64 v72; // [rsp+6Ch] [rbp+3h]
  int v73; // [rsp+74h] [rbp+Bh]
  int v74; // [rsp+78h] [rbp+Fh]
  int v75; // [rsp+D0h] [rbp+67h]
  int v77; // [rsp+E0h] [rbp+77h]
  unsigned int v78; // [rsp+E0h] [rbp+77h]
  unsigned int v79; // [rsp+E0h] [rbp+77h]
  __int64 v80; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v4 = 0;
  v80 = 0LL;
  v6 = 0;
  v7 = a2;
  v8 = 0;
  v9 = *((_QWORD *)a1 + 5);
  v77 = (*(_DWORD *)(v9 + 28) >> 26) & 4 | (*(_DWORD *)(v3 + 24) >> 22) & 8;
  if ( (_DWORD)v7 == -16 )
  {
    v10 = *(_DWORD *)(v9 + 28);
    LODWORD(v80) = v10;
    if ( (*(_DWORD *)(v9 + 24) & 0x800) == 0 )
      goto LABEL_6;
    v10 |= 0x10000000u;
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 24);
    LODWORD(v80) = v11 & 0xA7F77FF;
    v10 = v11 & (((~(unsigned __int8)*(_DWORD *)(v9 + 232) & 0x20) << 14) | 0xA7777FF);
  }
  LODWORD(v80) = v10;
LABEL_6:
  HIDWORD(v80) = a3;
  if ( (*(_BYTE *)(v9 + 21) & 2) != 0 )
  {
    xxxSendMessage(a1, 124LL, v7, &v80);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v10;
    LODWORD(v80) = v10;
  }
  v75 = IsTrayWindow(a1);
  v15 = v75;
  if ( (_DWORD)v7 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
      v46 = HIDWORD(v80) & 0x777FF;
    else
      v46 = HIDWORD(v80) & 0xA7F77FF;
    v47 = v80 & 8;
    HIDWORD(v80) = v46;
    if ( v47 != (v46 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v46)) )
    {
      v46 = v47 | v46 & 0xFFFFFFF7;
      HIDWORD(v80) = v46;
    }
    v48 = v46 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) << 14) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                                  + 24LL)) != 0 )
    {
      if ( v48 )
        goto LABEL_85;
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow(a1) )
        v8 = 1;
      UnsetLayeredWindow(a1);
    }
    else
    {
      if ( !v48 )
        goto LABEL_85;
      if ( (int)xxxSetLayeredWindow((ULONG_PTR)a1) < 0 )
        return 0LL;
    }
    v46 = HIDWORD(v80);
LABEL_85:
    v49 = *((_QWORD *)a1 + 5);
    v19 = *(_DWORD *)(v49 + 24) & 0x200000;
    if ( ((*(_DWORD *)(v49 + 24) & 0x200000) != 0) != ((v46 >> 21) & 1) || (_DWORD)v19 && (v46 & 0x2000000) != 0 )
    {
      v20 = 87LL;
      goto LABEL_127;
    }
    v50 = v46 & 0x2000000;
    v51 = *(_DWORD *)(v49 + 24) & 0x2000000;
    if ( !v51 && v50 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
      return 0LL;
    v79 = (*(_DWORD *)(v49 + 28) >> 28) & 1 | v77 & 0xFFFFFFFC | (v50 != 0 ? 2 : 0);
    if ( v51 )
    {
      if ( !v50 )
      {
        UnsetRedirectedWindow(a1);
        ClrWFNoDwmNotify(a1, 2818LL);
      }
      goto LABEL_97;
    }
    if ( !v50 )
    {
LABEL_97:
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v79])(a1);
      if ( v6 )
        xxxTurnOffCompositing(a1, 1LL);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v80) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
      v52 = HIDWORD(v80);
      v53 = v80;
      if ( (((unsigned int)v80 ^ HIDWORD(v80)) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0, 0, 55);
        v52 = HIDWORD(v80);
        v53 = v80;
      }
      if ( ((v53 ^ v52) & 0x80000) != 0 && v8 )
        xxxRedrawWindow(a1);
      v15 = v75;
      goto LABEL_105;
    }
    if ( (int)SetRedirectedWindow(a1, 2) >= 0 )
    {
      SetOrClrWF(1LL, a1, 2818LL, 0LL);
      v6 = 1;
      goto LABEL_97;
    }
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13);
  v18 = HIDWORD(v80);
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
  {
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( *(_WORD *)(gpsi + 870LL) == *(_WORD *)(v19 + 2) && (v80 & 0x20) != 0 && (v80 & 0x2000000000LL) == 0 )
    {
      v20 = 5LL;
LABEL_127:
      UserSetLastError(v20, v19, v18, v17);
      return 0LL;
    }
  }
  v21 = *((_QWORD *)a1 + 3);
  v22 = 0LL;
  v23 = *((_QWORD *)a1 + 13);
  if ( v21 )
  {
    v24 = *(_QWORD *)(v21 + 8);
    if ( v24 )
      v22 = *(_QWORD *)(v24 + 24);
  }
  if ( v23 == v22 )
  {
    LODWORD(v18) = HIDWORD(v80) | 0x4000000;
    HIDWORD(v80) |= 0x4000000u;
  }
  v25 = 1;
  if ( (((unsigned int)v80 ^ (unsigned int)v18) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
    v23 = *((_QWORD *)a1 + 13);
    LODWORD(v18) = HIDWORD(v80);
  }
  v26 = *((_QWORD *)a1 + 5);
  v27 = *(_BYTE *)(v26 + 31);
  if ( (v27 & 0x40) == 0 && (v27 & 0x20) != 0 && (*(_BYTE *)(v26 + 16) & 8) == 0 && (v18 & 0x20000000) == 0 )
  {
    LODWORD(v18) = v18 | 0x20000000;
    HIDWORD(v80) = v18;
  }
  if ( v23 )
  {
    v28 = *((_QWORD *)a1 + 3);
    v29 = 0LL;
    if ( v28 )
    {
      v30 = *(_QWORD *)(v28 + 8);
      if ( v30 )
        v29 = *(_QWORD *)(v30 + 24);
    }
    if ( v23 == v29 && (*(_DWORD *)(v26 + 28) & 0x30000000) == 0x10000000 )
      v8 = 1;
  }
  if ( v75 )
  {
    for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      v32 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v32 + 31) & 0x10) == 0 && (*(_BYTE *)(v32 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v32 + 42) & 0x3FFF) == 0x29D )
      {
        v4 = 1;
        break;
      }
    }
  }
  *(_DWORD *)(v26 + 28) = v18;
  v33 = *((_QWORD *)a1 + 5);
  v34 = *(_DWORD *)(v33 + 24);
  if ( (*(_DWORD *)(v33 + 28) & 0x10000000) != 0 )
    v35 = v34 | 0x800;
  else
    v35 = v34 & 0xFFFFF7FF;
  *(_DWORD *)(v33 + 24) = v35;
  v36 = *((_QWORD *)a1 + 13);
  v37 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  if ( !v36 )
    goto LABEL_52;
  v38 = *((_QWORD *)a1 + 3);
  v39 = 0LL;
  if ( v38 )
  {
    v40 = *(_QWORD *)(v38 + 8);
    if ( v40 )
      v39 = *(_QWORD *)(v40 + 24);
  }
  if ( v36 == v39 && (v37 & 0x30000000) == 0x10000000 )
    v41 = 1;
  else
LABEL_52:
    v41 = 0;
  v78 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2 | v77 & 0xFFFFFFFC | (v37 >> 28) & 1;
  VerifyChildMenu(a1);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v78])(a1);
  if ( v8 != v41 )
  {
    if ( v8 )
    {
      DecVisWindows(a1);
    }
    else
    {
      IncVisWindows((__int64)a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1);
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 13) )
    {
      v43 = *((_QWORD *)j + 5);
      if ( (*(_BYTE *)(v43 + 31) & 0x10) == 0 && (*(_BYTE *)(v43 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v43 + 42) & 0x3FFF) == 0x29D )
        goto LABEL_65;
    }
    v25 = 0;
LABEL_65:
    if ( v4 != v25 )
    {
      v44 = *(_QWORD *)a1;
      v45 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v4 )
        PostIAMShellHookMessageEx(v45, 22LL, v44);
      else
        PostIAMShellHookMessageEx(v45, 17LL, v44);
    }
  }
LABEL_105:
  v54 = *((_QWORD *)a1 + 5);
  v55 = *(_DWORD *)(v54 + 24);
  v56 = *(_DWORD *)(v54 + 28);
  if ( (v55 & 1) != 0
    || (v55 & 0x20000) == 0
    && ((v56 & 0x40000) != 0
     || (v57 = v56 & 0xC00000, v57 == 0x400000)
     || v57 == 12582912 && (*(_BYTE *)(v54 + 21) & 2) != 0) )
  {
    *(_BYTE *)(v54 + 25) = BYTE1(v55) | 1;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1)
    && (v61 = HIDWORD(v80),
        v62 = *(_QWORD *)a1,
        v63 = (void *)ReferenceDwmApiPort(v59, v58, v60),
        _InterlockedIncrement64(&g_cDWMWindowUniqueness),
        v63) )
  {
    v72 = v62;
    v64 = a2;
    v70 = 0;
    v66 = 3932180;
    v67 = 0x8000;
    v71 = 1073741846;
    v68 = 0LL;
    v73 = a2;
    v69 = 0LL;
    v74 = v61;
    LpcRequestPort(v63, &v66);
    ObfDereferenceObject(v63);
  }
  else
  {
    v64 = a2;
  }
  if ( v15 == (unsigned int)IsTrayWindow(a1) )
    goto LABEL_123;
  if ( v15 )
  {
    v65 = 18LL;
LABEL_122:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v65, *(_QWORD *)a1);
    goto LABEL_123;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v65 = 17LL;
    goto LABEL_122;
  }
LABEL_123:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage(a1, 125LL, v64, &v80);
  return (unsigned int)v80;
}
