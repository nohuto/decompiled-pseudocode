/*
 * XREFs of xxxSetWindowStyle @ 0x1C002C580
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01D3FD0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01E205C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01E21C4 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C007239C (IsTopLevelOrLayeredChildWindow.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     DecVisWindows @ 0x1C007A0CC (DecVisWindows.c)
 *     IncVisWindows @ 0x1C007A3C8 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C007A504 (ComposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     _IsWindowVisible @ 0x1C0125C64 (_IsWindowVisible.c)
 *     VerifyChildMenu @ 0x1C015E6C4 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01C6FD0 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01D4704 (xxxTurnOffCompositing.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v5; // r12d
  int v6; // r15d
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // ecx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r11
  char v20; // dl
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r10
  struct tagWND *i; // rdx
  __int64 v25; // rcx
  int v26; // r14d
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // edi
  struct tagWND *j; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // edi
  int v41; // edx
  int v42; // edx
  __int64 v43; // r13
  int v44; // edi
  int v45; // r14d
  unsigned int v46; // ecx
  unsigned int v47; // edx
  __int64 v48; // rdx
  int v49; // r8d
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // esi
  __int64 v55; // r14
  __int64 v56; // rax
  void *v57; // rdi
  int v58; // r14d
  __int64 v59; // rdx
  unsigned int v60; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v61; // [rsp+44h] [rbp-35h]
  _QWORD v62[5]; // [rsp+48h] [rbp-31h] BYREF
  int v63; // [rsp+70h] [rbp-9h]
  __int64 v64; // [rsp+74h] [rbp-5h]
  int v65; // [rsp+7Ch] [rbp+3h]
  unsigned int v66; // [rsp+80h] [rbp+7h]
  int v67; // [rsp+E0h] [rbp+67h]
  int v69; // [rsp+F0h] [rbp+77h]
  unsigned int v70; // [rsp+F0h] [rbp+77h]
  unsigned int v71; // [rsp+F0h] [rbp+77h]
  int v72; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  v5 = 0;
  v67 = 0;
  v6 = 0;
  v7 = *((_QWORD *)a1 + 5);
  v69 = (*(_DWORD *)(v7 + 28) >> 26) & 4 | (*(_DWORD *)(v7 + 24) >> 22) & 8;
  if ( (_DWORD)v3 == -16 )
  {
    v8 = *(_DWORD *)(v7 + 28);
    v60 = v8;
    if ( (*(_DWORD *)(v7 + 24) & 0x800) == 0 )
      goto LABEL_6;
    v8 |= 0x10000000u;
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 24);
    v60 = v9 & 0xA7F77FF;
    v8 = v9 & (((~(unsigned __int8)*(_DWORD *)(v7 + 232) & 0x20) << 14) | 0xA7777FF);
  }
  v60 = v8;
LABEL_6:
  v61 = a3;
  if ( (*(_BYTE *)(v7 + 21) & 2) != 0 )
  {
    xxxSendMessage(a1, 124LL, v3, &v60);
    if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                   + *((_QWORD *)&gSharedInfo + 1)
                   + 25LL) & 1) != 0 )
      return v8;
    v60 = v8;
  }
  v72 = IsTrayWindow(a1);
  if ( (_DWORD)v3 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
      v40 = v61 & 0x777FF;
    else
      v40 = v61 & 0xA7F77FF;
    v41 = v60 & 8;
    v61 = v40;
    if ( v41 != (v40 & 8) && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 || !HIWORD(v40)) )
    {
      v40 = v41 | v40 & 0xFFFFFFF7;
      v61 = v40;
    }
    v42 = v40 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) << 14) & *(_DWORD *)(*((_QWORD *)a1 + 5)
                                                                                                  + 24LL)) != 0 )
    {
      if ( v42 )
        goto LABEL_85;
      if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !(unsigned int)IsTopLevelWindow((__int64)a1) )
        v6 = 1;
      UnsetLayeredWindow(a1, v6);
    }
    else
    {
      if ( !v42 )
        goto LABEL_85;
      if ( (int)xxxSetLayeredWindow(a1) < 0 )
        return 0LL;
    }
    v40 = v61;
LABEL_85:
    v43 = *((_QWORD *)a1 + 5);
    if ( ((*(_DWORD *)(v43 + 24) & 0x200000) != 0) != ((v40 >> 21) & 1)
      || (*(_DWORD *)(v43 + 24) & 0x200000) != 0 && (v40 & 0x2000000) != 0 )
    {
      v14 = 87LL;
      goto LABEL_126;
    }
    v44 = v40 & 0x2000000;
    v45 = *(_DWORD *)(v43 + 24) & 0x2000000;
    if ( !v45 && v44 && GetStyleWindow(*((_QWORD *)a1 + 10), 2818LL) )
      return 0LL;
    v71 = (*(_DWORD *)(v43 + 28) >> 28) & 1 | v69 & 0xFFFFFFFC | (v44 != 0 ? 2 : 0);
    if ( v45 )
    {
      if ( !v44 )
      {
        UnsetRedirectedWindow(a1, 2);
        ClrWFNoDwmNotify(a1, 2818LL);
      }
      goto LABEL_97;
    }
    if ( !v44 )
    {
LABEL_97:
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v71])(a1);
      if ( v67 )
        xxxTurnOffCompositing(a1, 1LL);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = v61 & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
      v46 = v61;
      v47 = v60;
      if ( ((v60 ^ v61) & 0x407000) != 0 )
      {
        xxxSetWindowPos(a1, 0, 0, 55);
        v46 = v61;
        v47 = v60;
      }
      if ( ((v47 ^ v46) & 0x80000) != 0 && v6 )
        xxxRedrawWindow(a1);
      goto LABEL_104;
    }
    if ( (int)SetRedirectedWindow(a1) >= 0 )
    {
      SetOrClrWF(1, (__int64)a1, 0xB02u, 0);
      v67 = 1;
      goto LABEL_97;
    }
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  v13 = v61;
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
    && *(_WORD *)(gpsi + 870LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 2LL)
    && (v60 & 0x20) != 0
    && (v61 & 0x20) == 0 )
  {
    v14 = 5LL;
LABEL_126:
    UserSetLastError(v14);
    return 0LL;
  }
  v15 = *((_QWORD *)a1 + 3);
  v16 = 0LL;
  v17 = *((_QWORD *)a1 + 10);
  if ( v15 )
  {
    v18 = *(_QWORD *)(v15 + 8);
    if ( v18 )
      v16 = *(_QWORD *)(v18 + 24);
  }
  if ( v17 == v16 )
  {
    v13 = v61 | 0x4000000;
    v61 |= 0x4000000u;
  }
  if ( ((v60 ^ v13) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
    v17 = *((_QWORD *)a1 + 10);
    v13 = v61;
  }
  v19 = *((_QWORD *)a1 + 5);
  v20 = *(_BYTE *)(v19 + 31);
  if ( (v20 & 0x40) == 0 && (v20 & 0x20) != 0 && (*(_BYTE *)(v19 + 16) & 8) == 0 && (v13 & 0x20000000) == 0 )
  {
    v13 |= 0x20000000u;
    v61 = v13;
  }
  if ( v17 )
  {
    v21 = *((_QWORD *)a1 + 3);
    v22 = 0LL;
    if ( v21 )
    {
      v23 = *(_QWORD *)(v21 + 8);
      if ( v23 )
        v22 = *(_QWORD *)(v23 + 24);
    }
    if ( v17 == v22 && (*(_DWORD *)(v19 + 28) & 0x30000000) == 0x10000000 )
      v6 = 1;
  }
  if ( v72 )
  {
    for ( i = a1; ; i = (struct tagWND *)*((_QWORD *)i + 10) )
    {
      v25 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v25 + 31) & 0x10) == 0 && (*(_BYTE *)(v25 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v25 + 42) & 0x2FFF) == 0x29D )
      {
        v26 = 1;
        goto LABEL_43;
      }
    }
  }
  v26 = 0;
LABEL_43:
  *(_DWORD *)(v19 + 28) = v13;
  v27 = *((_QWORD *)a1 + 5);
  v28 = *(_DWORD *)(v27 + 24);
  if ( (*(_DWORD *)(v27 + 28) & 0x10000000) != 0 )
    v29 = v28 | 0x800;
  else
    v29 = v28 & 0xFFFFF7FF;
  *(_DWORD *)(v27 + 24) = v29;
  v30 = *((_QWORD *)a1 + 10);
  v31 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  if ( !v30 )
    goto LABEL_52;
  v32 = *((_QWORD *)a1 + 3);
  v33 = 0LL;
  if ( v32 )
  {
    v34 = *(_QWORD *)(v32 + 8);
    if ( v34 )
      v33 = *(_QWORD *)(v34 + 24);
  }
  if ( v30 != v33 || (v35 = 1, (v31 & 0x30000000) != 0x10000000) )
LABEL_52:
    v35 = 0;
  v70 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 2 | v69 & 0xFFFFFFFC | (v31 >> 28) & 1;
  VerifyChildMenu(a1);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v70])(a1);
  if ( v6 != v35 )
  {
    if ( v6 )
    {
      DecVisWindows(a1);
    }
    else
    {
      IncVisWindows(a1);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded(a1, 0LL);
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 10) )
    {
      v37 = *((_QWORD *)j + 5);
      if ( (*(_BYTE *)(v37 + 31) & 0x10) == 0 && (*(_BYTE *)(v37 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v37 + 42) & 0x2FFF) == 0x29D )
      {
        v5 = 1;
        break;
      }
    }
    if ( v26 != v5 )
    {
      v38 = *(_QWORD *)a1;
      v39 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v26 )
        PostIAMShellHookMessageEx(v39, 22LL, v38);
      else
        PostIAMShellHookMessageEx(v39, 17LL, v38);
    }
  }
LABEL_104:
  v48 = *((_QWORD *)a1 + 5);
  v49 = *(_DWORD *)(v48 + 24);
  v50 = *(_DWORD *)(v48 + 28);
  if ( (v49 & 1) != 0
    || (v49 & 0x20000) == 0
    && ((v50 & 0x40000) != 0
     || (v51 = v50 & 0xC00000, v51 == 0x400000)
     || v51 == 12582912 && (*(_BYTE *)(v48 + 21) & 2) != 0) )
  {
    *(_BYTE *)(v48 + 25) = BYTE1(v49) | 1;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1)
    && (v54 = v61,
        v55 = *(_QWORD *)a1,
        v56 = ReferenceDwmApiPort(v53, v52),
        v57 = (void *)v56,
        _InterlockedIncrement64(&g_cDWMWindowUniqueness),
        v56) )
  {
    v66 = v54;
    memset(&v62[1], 0, 32);
    v64 = v55;
    v58 = a2;
    v65 = a2;
    v62[0] = 0x8000003C0014LL;
    v63 = 1073741846;
    LpcRequestPort(v56, v62);
    ObfDereferenceObject(v57);
  }
  else
  {
    v58 = a2;
  }
  if ( v72 == (unsigned int)IsTrayWindow(a1) )
    goto LABEL_122;
  if ( v72 )
  {
    v59 = 18LL;
LABEL_121:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v59, *(_QWORD *)a1);
    goto LABEL_122;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v59 = 17LL;
    goto LABEL_121;
  }
LABEL_122:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
    xxxSendMessage(a1, 125LL, v58, &v60);
  return v60;
}
