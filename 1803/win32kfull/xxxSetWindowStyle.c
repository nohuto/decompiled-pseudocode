/*
 * XREFs of xxxSetWindowStyle @ 0x1C00442C0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005B60 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01B13B0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01BF488 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01BF73C (xxxSetBridgeWindowChild.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C002DE64 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     DecVisWindows @ 0x1C0075BD4 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0075E9C (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C0075FC4 (ComposeWindowIfNeeded.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     _IsWindowVisible @ 0x1C0105790 (_IsWindowVisible.c)
 *     VerifyChildMenu @ 0x1C013B334 (VerifyChildMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01A4E40 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01B1ECC (xxxTurnOffCompositing.c)
 */

__int64 __fastcall xxxSetWindowStyle(_QWORD *BugCheckParameter2, int a2, unsigned int a3)
{
  HWND v3; // rsi
  int v5; // r12d
  int v6; // r14d
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // ecx
  __int64 v11; // rcx
  int v12; // r13d
  __int64 CurrentProcessWin32Process; // rax
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r11
  char v21; // dl
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r10
  _QWORD *i; // rdx
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // edi
  _QWORD *j; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // edi
  int v41; // edx
  int v42; // edx
  __int64 v43; // r15
  __int64 v44; // rdx
  int v45; // edi
  int v46; // esi
  unsigned int v47; // ecx
  unsigned int v48; // edx
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  char v51; // al
  __int64 ThreadWin32Thread; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  int v57; // r8d
  int v58; // eax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned int v63; // esi
  __int64 v64; // r14
  __int64 v65; // rax
  void *v66; // rdi
  int v67; // r14d
  __int64 v68; // rdx
  _QWORD v69[3]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v70[5]; // [rsp+68h] [rbp-31h] BYREF
  int v71; // [rsp+90h] [rbp-9h]
  __int64 v72; // [rsp+94h] [rbp-5h]
  int v73; // [rsp+9Ch] [rbp+3h]
  unsigned int v74; // [rsp+A0h] [rbp+7h]
  int v76; // [rsp+110h] [rbp+77h]
  unsigned int v77; // [rsp+110h] [rbp+77h]
  unsigned int v78; // [rsp+110h] [rbp+77h]
  unsigned int v79; // [rsp+118h] [rbp+7Fh] BYREF
  unsigned int v80; // [rsp+11Ch] [rbp+83h]

  v3 = (HWND)a2;
  v5 = 0;
  v6 = 0;
  v7 = BugCheckParameter2[5];
  v76 = (*(_DWORD *)(v7 + 28) >> 26) & 4 | (*(_DWORD *)(v7 + 24) >> 22) & 8;
  if ( (_DWORD)v3 == -16 )
  {
    v8 = *(_DWORD *)(v7 + 28);
    v79 = v8;
    if ( (*(_DWORD *)(v7 + 24) & 0x800) == 0 )
      goto LABEL_6;
    v8 |= 0x10000000u;
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 24);
    v79 = v9 & 0xA7F77FF;
    v8 = v9 & (((~(unsigned __int8)*(_DWORD *)(v7 + 232) & 0x20) << 14) | 0xA7777FF);
  }
  v79 = v8;
LABEL_6:
  v80 = a3;
  if ( (*(_BYTE *)(v7 + 21) & 2) != 0 )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x7Cu, v3, (__int64)&v79, 0, 0, 0LL, 1, 1);
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)BugCheckParameter2
                   + gSharedInfo[1]
                   + 25LL) & 1) != 0 )
      return v8;
    v79 = v8;
  }
  v12 = IsTrayWindow(BugCheckParameter2);
  if ( (_DWORD)v3 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
      v40 = v80 & 0x777FF;
    else
      v40 = v80 & 0xA7F77FF;
    v41 = v79 & 8;
    v80 = v40;
    if ( v41 != (v40 & 8) && ((*(_BYTE *)(BugCheckParameter2[5] + 21LL) & 2) != 0 || !HIWORD(v40)) )
    {
      v40 = v41 | v40 & 0xFFFFFFF7;
      v80 = v40;
    }
    v42 = v40 & 0x80000;
    if ( (((~(unsigned __int8)*(_DWORD *)(BugCheckParameter2[5] + 232LL) & 0x20) << 14) & *(_DWORD *)(BugCheckParameter2[5] + 24LL)) != 0 )
    {
      if ( v42 )
        goto LABEL_86;
      if ( IsTopLevelOrLayeredChildWindow((__int64)BugCheckParameter2)
        && !(unsigned int)IsTopLevelWindow((__int64)BugCheckParameter2) )
      {
        v6 = 1;
      }
      UnsetLayeredWindow((struct tagWND *)BugCheckParameter2);
    }
    else
    {
      if ( !v42 )
        goto LABEL_86;
      if ( (int)xxxSetLayeredWindow((struct tagWND *)BugCheckParameter2) < 0 )
        return 0LL;
    }
    v40 = v80;
LABEL_86:
    v43 = BugCheckParameter2[5];
    v44 = *(_DWORD *)(v43 + 24) & 0x200000;
    if ( ((*(_DWORD *)(v43 + 24) & 0x200000) != 0) == ((v40 >> 21) & 1) && (!(_DWORD)v44 || (v40 & 0x2000000) == 0) )
    {
      v45 = v40 & 0x2000000;
      v46 = *(_DWORD *)(v43 + 24) & 0x2000000;
      if ( !v46 && v45 && GetStyleWindow(BugCheckParameter2[10], 2818) )
        return 0LL;
      v78 = (*(_DWORD *)(v43 + 28) >> 28) & 1 | v76 & 0xFFFFFFFC | (v45 != 0 ? 2 : 0);
      if ( v46 )
      {
        if ( !v45 )
        {
          UnsetRedirectedWindow((struct tagWND *)BugCheckParameter2);
          ClrWFNoDwmNotify(BugCheckParameter2, 2818LL);
        }
      }
      else if ( v45 )
      {
        if ( (int)SetRedirectedWindow((struct tagWND *)BugCheckParameter2) < 0 )
          return 0LL;
        SetOrClrWF(1LL, BugCheckParameter2, 2818LL, 0LL);
        v5 = 1;
      }
      ((void (__fastcall *)(_QWORD *))(&grpVisCompStyleChangeAction)[v78])(BugCheckParameter2);
      if ( v5 )
        xxxTurnOffCompositing(BugCheckParameter2, 1LL);
      *(_DWORD *)(BugCheckParameter2[5] + 24LL) = v80 & 0xFDF7FFFF | *(_DWORD *)(BugCheckParameter2[5] + 24LL) & 0xF7888800;
      v47 = v80;
      v48 = v79;
      if ( ((v79 ^ v80) & 0x407000) != 0 )
      {
        xxxSetWindowPos((struct tagWND *)BugCheckParameter2, 0LL, 0LL, 0LL, 0, 0, 55);
        v47 = v80;
        v48 = v79;
      }
      if ( ((v48 ^ v47) & 0x80000) != 0 && v6 )
      {
        v49 = BugCheckParameter2;
        while ( 1 )
        {
          v50 = v49[5];
          v51 = *(_BYTE *)(v50 + 31);
          if ( (v51 & 0x10) == 0 || (v51 & 0x20) != 0 && v49 != BugCheckParameter2 )
            break;
          if ( (*(_WORD *)(v50 + 42) & 0x3FFF) != 0x29D )
          {
            v49 = (_QWORD *)v49[10];
            if ( v49 )
              continue;
          }
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50);
          v69[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v69;
          v69[1] = BugCheckParameter2;
          _InterlockedIncrement((volatile signed __int32 *)BugCheckParameter2 + 2);
          xxxInternalInvalidate((struct tagWND *)BugCheckParameter2, (HRGN)1, 0x1485u);
          ThreadUnlock1(v54, v53, v55);
          goto LABEL_110;
        }
      }
      goto LABEL_110;
    }
    UserSetLastError(87LL, v44);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  v14 = v80;
  if ( CurrentProcessWin32Process != *(_QWORD *)(BugCheckParameter2[2] + 416LL) )
  {
    v15 = *(_QWORD *)(BugCheckParameter2[14] + 8LL);
    if ( *(_WORD *)(gpsi + 870LL) == *(_WORD *)(v15 + 2) && (v79 & 0x20) != 0 && (v80 & 0x20) == 0 )
    {
      UserSetLastError(5LL, v15);
      return 0LL;
    }
  }
  v16 = BugCheckParameter2[3];
  v17 = 0LL;
  v18 = BugCheckParameter2[10];
  if ( v16 )
  {
    v19 = *(_QWORD *)(v16 + 8);
    if ( v19 )
      v17 = *(_QWORD *)(v19 + 24);
  }
  if ( v18 == v17 )
  {
    v14 = v80 | 0x4000000;
    v80 |= 0x4000000u;
  }
  if ( ((v79 ^ v14) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)BugCheckParameter2, 1, 0LL);
    v18 = BugCheckParameter2[10];
    v14 = v80;
  }
  v20 = BugCheckParameter2[5];
  v21 = *(_BYTE *)(v20 + 31);
  if ( (v21 & 0x40) == 0 && (v21 & 0x20) != 0 && (*(_BYTE *)(v20 + 16) & 8) == 0 && (v14 & 0x20000000) == 0 )
  {
    v14 |= 0x20000000u;
    v80 = v14;
  }
  if ( v18 )
  {
    v22 = BugCheckParameter2[3];
    v23 = 0LL;
    if ( v22 )
    {
      v24 = *(_QWORD *)(v22 + 8);
      if ( v24 )
        v23 = *(_QWORD *)(v24 + 24);
    }
    if ( v18 == v23 && (*(_DWORD *)(v20 + 28) & 0x30000000) == 0x10000000 )
      v6 = 1;
  }
  if ( v12 )
  {
    for ( i = BugCheckParameter2; ; i = (_QWORD *)i[10] )
    {
      v26 = i[5];
      if ( (*(_BYTE *)(v26 + 31) & 0x10) == 0 && (*(_BYTE *)(v26 + 25) & 8) == 0 )
        break;
      if ( (*(_WORD *)(v26 + 42) & 0x3FFF) == 0x29D )
      {
        v27 = 1;
        goto LABEL_43;
      }
    }
  }
  v27 = 0;
LABEL_43:
  *(_DWORD *)(v20 + 28) = v14;
  v28 = BugCheckParameter2[5];
  if ( (*(_DWORD *)(v28 + 28) & 0x10000000) != 0 )
    *(_DWORD *)(v28 + 24) |= 0x800u;
  else
    *(_DWORD *)(v28 + 24) &= ~0x800u;
  v29 = BugCheckParameter2[10];
  v30 = *(_DWORD *)(BugCheckParameter2[5] + 28LL);
  if ( !v29 )
    goto LABEL_52;
  v31 = BugCheckParameter2[3];
  v32 = 0LL;
  if ( v31 )
  {
    v33 = *(_QWORD *)(v31 + 8);
    if ( v33 )
      v32 = *(_QWORD *)(v33 + 24);
  }
  if ( v29 != v32 || (v34 = 1, (v30 & 0x30000000) != 0x10000000) )
LABEL_52:
    v34 = 0;
  v77 = *(_BYTE *)(BugCheckParameter2[5] + 27LL) & 2 | v76 & 0xFFFFFFFC | (v30 >> 28) & 1;
  VerifyChildMenu((struct tagWND *)BugCheckParameter2);
  ((void (__fastcall *)(_QWORD *))(&grpVisCompStyleChangeAction)[v77])(BugCheckParameter2);
  if ( v6 != v34 )
  {
    if ( v6 )
    {
      DecVisWindows(BugCheckParameter2);
    }
    else
    {
      IncVisWindows(BugCheckParameter2);
      if ( (*(_BYTE *)(BugCheckParameter2[5] + 26LL) & 8) == 0 )
        ComposeWindowIfNeeded((struct tagWND *)BugCheckParameter2);
    }
  }
  if ( (unsigned int)IsTrayWindow(BugCheckParameter2) )
  {
    for ( j = BugCheckParameter2; ; j = (_QWORD *)j[10] )
    {
      v36 = j[5];
      if ( (*(_BYTE *)(v36 + 31) & 0x10) == 0 && (*(_BYTE *)(v36 + 25) & 8) == 0 )
      {
        v37 = 0;
        goto LABEL_66;
      }
      if ( (*(_WORD *)(v36 + 42) & 0x3FFF) == 0x29D )
        break;
    }
    v37 = 1;
LABEL_66:
    if ( v27 != v37 )
    {
      v38 = *BugCheckParameter2;
      v39 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( v27 )
        PostIAMShellHookMessageEx(v39, 22LL, v38);
      else
        PostIAMShellHookMessageEx(v39, 17LL, v38);
    }
  }
LABEL_110:
  v56 = BugCheckParameter2[5];
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
    ClrWFNoDwmNotify(BugCheckParameter2, 2305LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(BugCheckParameter2)
    && (v63 = v80,
        v64 = *BugCheckParameter2,
        v65 = ReferenceDwmApiPort(v61, v60, v62),
        v66 = (void *)v65,
        _InterlockedIncrement64(&g_cDWMWindowUniqueness),
        v65) )
  {
    v74 = v63;
    memset(&v70[1], 0, 32);
    v72 = v64;
    v67 = a2;
    v73 = a2;
    v70[0] = 0x8000003C0014LL;
    v71 = 1073741846;
    LpcRequestPort(v65, v70);
    ObfDereferenceObject(v66);
  }
  else
  {
    v67 = a2;
  }
  if ( v12 == (unsigned int)IsTrayWindow(BugCheckParameter2) )
    goto LABEL_131;
  if ( v12 )
  {
    v68 = 18LL;
LABEL_130:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v68, *BugCheckParameter2);
    goto LABEL_131;
  }
  if ( (unsigned int)IsWindowVisible(BugCheckParameter2) )
  {
    v68 = 17LL;
    goto LABEL_130;
  }
LABEL_131:
  if ( (*(_BYTE *)(BugCheckParameter2[5] + 21LL) & 2) != 0 )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x7Du, (HWND)v67, (__int64)&v79, 0, 0, 0LL, 1, 1);
  }
  return v79;
}
