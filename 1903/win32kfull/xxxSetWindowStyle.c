/*
 * XREFs of xxxSetWindowStyle @ 0x1C009B250
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E9150 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F837C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F84E4 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     ComposeWindowIfNeeded @ 0x1C0022350 (ComposeWindowIfNeeded.c)
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     DecVisWindows @ 0x1C002CB50 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C002CC3C (IncVisWindows.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00C7314 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     _IsWindowVisible @ 0x1C0130C0C (_IsWindowVisible.c)
 *     VerifyChildMenu @ 0x1C0164690 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01DA394 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01E9C9C (xxxTurnOffCompositing.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r13d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // esi
  __int64 v28; // r11
  char v29; // dl
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r10
  struct tagWND *i; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // edi
  struct tagWND *j; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned int v48; // edi
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // r13
  int v52; // edi
  int v53; // r14d
  int v54; // ecx
  int v55; // edx
  __int64 v56; // rdx
  int v57; // r8d
  int v58; // eax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // esi
  __int64 v64; // r14
  void *v65; // rdi
  int v66; // r14d
  unsigned int v67; // edx
  int v68; // [rsp+40h] [rbp-29h] BYREF
  __int16 v69; // [rsp+44h] [rbp-25h]
  __int128 v70; // [rsp+46h] [rbp-23h]
  __int128 v71; // [rsp+56h] [rbp-13h]
  __int16 v72; // [rsp+66h] [rbp-3h]
  int v73; // [rsp+68h] [rbp-1h]
  __int64 v74; // [rsp+6Ch] [rbp+3h]
  int v75; // [rsp+74h] [rbp+Bh]
  int v76; // [rsp+78h] [rbp+Fh]
  int v77; // [rsp+D0h] [rbp+67h]
  int v79; // [rsp+E0h] [rbp+77h]
  unsigned int v80; // [rsp+E0h] [rbp+77h]
  unsigned int v81; // [rsp+E0h] [rbp+77h]
  __int64 v82; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v4 = 0;
  v82 = 0LL;
  v6 = 0;
  v7 = a2;
  v8 = 0;
  v9 = *((_QWORD *)a1 + 5);
  v79 = (*(_DWORD *)(v9 + 28) >> 26) & 4 | (*(_DWORD *)(v3 + 24) >> 22) & 8;
  if ( (_DWORD)v7 == -16 )
  {
    v10 = *(_DWORD *)(v9 + 28);
    LODWORD(v82) = v10;
    if ( (*(_DWORD *)(v9 + 24) & 0x800) == 0 )
      goto LABEL_6;
    v10 |= 0x10000000u;
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 24);
    LODWORD(v82) = v11 & 0xA7F77FF;
    v10 = v11 & (((~(unsigned __int8)*(_DWORD *)(v9 + 232) & 0x20) << 14) | 0xA7777FF);
  }
  LODWORD(v82) = v10;
LABEL_6:
  HIDWORD(v82) = a3;
  if ( (*(_BYTE *)(v9 + 21) & 2) != 0 )
  {
    xxxSendMessage(a1, 124LL, v7, &v82);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      return v10;
    LODWORD(v82) = v10;
  }
  v77 = IsTrayWindow(a1);
  v17 = v77;
  if ( (_DWORD)v7 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL, v13, v15, v16) & 4) != 0 )
      v48 = HIDWORD(v82) & 0x777FF;
    else
      v48 = HIDWORD(v82) & 0xA7F77FF;
    v49 = v82 & 8;
    HIDWORD(v82) = v48;
    if ( v49 != (v48 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v48)) )
    {
      v48 = v49 | v48 & 0xFFFFFFF7;
      HIDWORD(v82) = v48;
    }
    v50 = v48 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) << 14) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                                  + 24LL)) != 0 )
    {
      if ( (_DWORD)v50 )
        goto LABEL_85;
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1, v50, v20) && !(unsigned int)IsTopLevelWindow(a1) )
        v8 = 1;
      UnsetLayeredWindow(a1, v8);
    }
    else
    {
      if ( !(_DWORD)v50 )
        goto LABEL_85;
      if ( (int)xxxSetLayeredWindow(a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v48 = HIDWORD(v82);
LABEL_85:
    v51 = *((_QWORD *)a1 + 5);
    v21 = *(_DWORD *)(v51 + 24) & 0x200000;
    if ( ((*(_DWORD *)(v51 + 24) & 0x200000) != 0) != ((v48 >> 21) & 1) || (_DWORD)v21 && (v48 & 0x2000000) != 0 )
    {
      v22 = 87LL;
      goto LABEL_127;
    }
    v52 = v48 & 0x2000000;
    v53 = *(_DWORD *)(v51 + 24) & 0x2000000;
    if ( !v53 && v52 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
      return 0LL;
    v81 = (*(_DWORD *)(v51 + 28) >> 28) & 1 | v79 & 0xFFFFFFFC | (v52 != 0 ? 2 : 0);
    if ( v53 )
    {
      if ( !v52 )
      {
        UnsetRedirectedWindow(a1, 2);
        ClrWFNoDwmNotify(a1, 2818LL);
      }
      goto LABEL_97;
    }
    if ( !v52 )
    {
LABEL_97:
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v81])(a1);
      if ( v6 )
        xxxTurnOffCompositing(a1, 1LL);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v82) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
      v54 = HIDWORD(v82);
      v55 = v82;
      if ( (((unsigned int)v82 ^ HIDWORD(v82)) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0, 0, 55);
        v54 = HIDWORD(v82);
        v55 = v82;
      }
      if ( ((v55 ^ v54) & 0x80000) != 0 && v8 )
        xxxRedrawWindow(a1);
      v17 = v77;
      goto LABEL_105;
    }
    if ( (int)SetRedirectedWindow(a1, 2) >= 0 )
    {
      SetOrClrWF(1, (__int64)a1, 0xB02u, 0);
      v6 = 1;
      goto LABEL_97;
    }
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13);
  v20 = HIDWORD(v82);
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
  {
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
    if ( *(_WORD *)(gpsi + 870LL) == *(_WORD *)(v21 + 2) && (v82 & 0x20) != 0 && (v82 & 0x2000000000LL) == 0 )
    {
      v22 = 5LL;
LABEL_127:
      UserSetLastError(v22, v21, v20, v19);
      return 0LL;
    }
  }
  v23 = *((_QWORD *)a1 + 3);
  v24 = 0LL;
  v25 = *((_QWORD *)a1 + 13);
  if ( v23 )
  {
    v26 = *(_QWORD *)(v23 + 8);
    if ( v26 )
      v24 = *(_QWORD *)(v26 + 24);
  }
  if ( v25 == v24 )
  {
    LODWORD(v20) = HIDWORD(v82) | 0x4000000;
    HIDWORD(v82) |= 0x4000000u;
  }
  v27 = 1;
  if ( (((unsigned int)v82 ^ (unsigned int)v20) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
    v25 = *((_QWORD *)a1 + 13);
    LODWORD(v20) = HIDWORD(v82);
  }
  v28 = *((_QWORD *)a1 + 5);
  v29 = *(_BYTE *)(v28 + 31);
  if ( (v29 & 0x40) == 0 && (v29 & 0x20) != 0 && (*(_BYTE *)(v28 + 16) & 8) == 0 && (v20 & 0x20000000) == 0 )
  {
    LODWORD(v20) = v20 | 0x20000000;
    HIDWORD(v82) = v20;
  }
  if ( v25 )
  {
    v30 = *((_QWORD *)a1 + 3);
    v31 = 0LL;
    if ( v30 )
    {
      v32 = *(_QWORD *)(v30 + 8);
      if ( v32 )
        v31 = *(_QWORD *)(v32 + 24);
    }
    if ( v25 == v31 && (*(_DWORD *)(v28 + 28) & 0x30000000) == 0x10000000 )
      v8 = 1;
  }
  if ( v77 )
  {
    for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      v34 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v34 + 31) & 0x10) == 0 && (*(_BYTE *)(v34 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v34 + 42) & 0x3FFF) == 0x29D )
      {
        v4 = 1;
        break;
      }
    }
  }
  *(_DWORD *)(v28 + 28) = v20;
  v35 = *((_QWORD *)a1 + 5);
  v36 = *(_DWORD *)(v35 + 24);
  if ( (*(_DWORD *)(v35 + 28) & 0x10000000) != 0 )
    v37 = v36 | 0x800;
  else
    v37 = v36 & 0xFFFFF7FF;
  *(_DWORD *)(v35 + 24) = v37;
  v38 = *((_QWORD *)a1 + 13);
  v39 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  if ( !v38 )
    goto LABEL_52;
  v40 = *((_QWORD *)a1 + 3);
  v41 = 0LL;
  if ( v40 )
  {
    v42 = *(_QWORD *)(v40 + 8);
    if ( v42 )
      v41 = *(_QWORD *)(v42 + 24);
  }
  if ( v38 == v41 && (v39 & 0x30000000) == 0x10000000 )
    v43 = 1;
  else
LABEL_52:
    v43 = 0;
  v80 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2 | v79 & 0xFFFFFFFC | (v39 >> 28) & 1;
  VerifyChildMenu(a1);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v80])(a1);
  if ( v8 != v43 )
  {
    if ( v8 )
    {
      DecVisWindows((__int64)a1);
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
      v45 = *((_QWORD *)j + 5);
      if ( (*(_BYTE *)(v45 + 31) & 0x10) == 0 && (*(_BYTE *)(v45 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v45 + 42) & 0x3FFF) == 0x29D )
        goto LABEL_65;
    }
    v27 = 0;
LABEL_65:
    if ( v4 != v27 )
    {
      v46 = *(_QWORD *)a1;
      v47 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v4 )
        PostIAMShellHookMessageEx(v47, 0x16u, v46);
      else
        PostIAMShellHookMessageEx(v47, 0x11u, v46);
    }
  }
LABEL_105:
  v56 = *((_QWORD *)a1 + 5);
  v57 = *(_DWORD *)(v56 + 24);
  v58 = *(_DWORD *)(v56 + 28);
  if ( (v57 & 1) != 0
    || (v57 & 0x20000) == 0
    && ((v58 & 0x40000) != 0
     || (v59 = v58 & 0xC00000, v59 == 0x400000)
     || v59 == 12582912 && (*(_BYTE *)(v56 + 21) & 2) != 0) )
  {
    *(_BYTE *)(v56 + 25) = BYTE1(v57) | 1;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1)
    && (v63 = HIDWORD(v82),
        v64 = *(_QWORD *)a1,
        v65 = (void *)ReferenceDwmApiPort(v61, v60, v62),
        _InterlockedIncrement64(&g_cDWMWindowUniqueness),
        v65) )
  {
    v74 = v64;
    v66 = a2;
    v72 = 0;
    v68 = 3932180;
    v69 = 0x8000;
    v73 = 1073741846;
    v70 = 0LL;
    v75 = a2;
    v71 = 0LL;
    v76 = v63;
    LpcRequestPort(v65, &v68);
    ObfDereferenceObject(v65);
  }
  else
  {
    v66 = a2;
  }
  if ( v17 == (unsigned int)IsTrayWindow(a1) )
    goto LABEL_123;
  if ( v17 )
  {
    v67 = 18;
LABEL_122:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v67, *(_QWORD *)a1);
    goto LABEL_123;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v67 = 17;
    goto LABEL_122;
  }
LABEL_123:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage(a1, 125LL, v66, &v82);
  return (unsigned int)v82;
}
