/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00EBB00
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01AAB54 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01AC4AC (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(struct tagTHREADINFO *a1, struct tagWND *a2, const struct tagQMSG *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  int v8; // r13d
  int v9; // r12d
  int active; // edi
  struct tagWND *v11; // rsi
  int v12; // r9d
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rcx
  int v20; // ebx
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // ebp
  int v25; // ebp
  int v26; // ebp
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  __int64 v30; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v31; // [rsp+68h] [rbp-50h]
  unsigned int v32; // [rsp+C0h] [rbp+8h]
  __int64 v33; // [rsp+D0h] [rbp+18h]

  v5 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v33 = *((_QWORD *)a3 + 4);
  v8 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 23);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 53) + 104LL) )
    return 0LL;
  active = 0;
  if ( !__CFSHR__(*((_DWORD *)a3 + 25), 20)
    && (unsigned int)IsCompositionInputWindow(a2)
    && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 235LL) & 2) == 0 )
  {
    v24 = v7 - 513;
    if ( !v24 || (v25 = v24 - 3) == 0 || (v26 = v25 - 3) == 0 || v26 == 4 )
    {
      if ( (unsigned int)IsMessageOnlyWindow(a2) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v11 = a2;
  v30 = *((_QWORD *)a1 + 51);
  *((_QWORD *)a1 + 51) = &v30;
  LOBYTE(v12) = 1;
  v31 = a2;
  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
  v13 = (_BYTE *)*((_QWORD *)a2 + 5);
  v14 = (v13[21] & 2) == 0 || (v13[24] & 4) == 0;
  v32 = v14;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (v13[31] & 0xC0) == 0x40 )
    {
      do
      {
        v11 = (struct tagWND *)*((_QWORD *)v11 + 10);
        if ( (_DWORD)v14 )
        {
          ThreadUnlock1(v13, v14, a3);
          v30 = *((_QWORD *)a1 + 51);
          *((_QWORD *)a1 + 51) = &v30;
          v31 = v11;
          if ( v11 )
            _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
          v21 = *((_QWORD *)v11 + 5);
          v22 = *(_DWORD *)(v21 + 104);
          v23 = *(_DWORD *)(v21 + 108);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (__int64 *)v11,
            0x210u,
            (HWND)(v33 | v7),
            (unsigned __int16)(v5 - v22) | (unsigned __int64)((unsigned __int16)(WORD2(v5) - v23) << 16),
            0,
            0,
            0LL,
            1,
            0);
          v14 = v32;
        }
        LOBYTE(v13) = *(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 0xC0;
      }
      while ( (_BYTE)v13 == 64 );
      active = 0;
      LOBYTE(v12) = 1;
    }
    if ( !(_DWORD)v14 )
    {
      ThreadUnlock1(v13, v14, a3);
      LOBYTE(v12) = 1;
      v30 = *((_QWORD *)a1 + 51);
      *((_QWORD *)a1 + 51) = &v30;
      v31 = v11;
      _InterlockedAdd((volatile signed __int32 *)v11 + 2, 1u);
    }
  }
  v15 = *((_QWORD *)a1 + 53);
  v16 = 0LL;
  if ( v9 )
    v17 = *(_QWORD *)(v15 + 120) == (_QWORD)v11;
  else
    v17 = *(_QWORD *)(v15 + 120) == (_QWORD)a2;
  LOBYTE(v16) = !v17;
  if ( !v8 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v7 == 512 )
  {
    active = xxxActiveWindowTracking(a2, 512LL);
    goto LABEL_23;
  }
  if ( !(_DWORD)v16 && (*(_DWORD *)(v15 + 388) & 0x8000) == 0 || v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
  {
    v20 = a4;
    goto LABEL_28;
  }
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( v8 )
    {
      v20 = a4;
      active = (v9 != 0) + 3;
    }
    else
    {
      if ( v9 )
      {
        v20 = a4;
        active = 2;
LABEL_47:
        v18 = *((_QWORD *)a1 + 53);
        if ( (v11 != *(struct tagWND **)(v18 + 120) || (*(_DWORD *)(v18 + 388) & 0x8000) != 0)
          && !(unsigned int)xxxActivateWindow(v11, *(_DWORD *)(v18 + 148) != 0 ? 2 : 4, v15)
          || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 8) != 0
          || active == 2 )
        {
          active = 1;
          goto LABEL_23;
        }
        LOBYTE(v12) = 1;
LABEL_28:
        active = 0;
        v18 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & (unsigned __int8)v12) != 0 )
        {
          if ( CheckOnTop(a1, v11, v7) )
          {
            v16 = 1LL;
            if ( v20 == 1 )
            {
              v18 = *(unsigned int *)(*((_QWORD *)v11 + 2) + 480LL);
              if ( (v18 & 8) != 0 )
                active = (*(_BYTE *)(*((_QWORD *)v11 + 5) + 24LL) & 8) == 0;
            }
          }
        }
        goto LABEL_23;
      }
      v20 = a4;
      active = xxxSendMessage((ULONG_PTR)a2);
      v12 = 1;
    }
    if ( active < 0 )
      goto LABEL_23;
    if ( active > 2 )
    {
      if ( active == 3 )
      {
        active = 0;
      }
      else if ( active == 4 )
      {
        active = v12;
      }
      goto LABEL_23;
    }
    goto LABEL_47;
  }
LABEL_23:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 53) + 104LL) )
    xxxSendMessage((ULONG_PTR)a2);
  ThreadUnlock1(v18, v16, v15);
  return (unsigned int)active;
}
