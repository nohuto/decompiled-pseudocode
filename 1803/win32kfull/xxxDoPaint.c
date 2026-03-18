/*
 * XREFs of xxxDoPaint @ 0x1C00649C0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C0061508 (ExchangeW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0064D10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     _IsChild @ 0x1C00F6964 (_IsChild.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  __int64 v6; // rax
  char v7; // cl
  int v8; // ebp
  int v9; // esi
  int v10; // r14d
  __int64 v11; // rcx
  unsigned int *v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // r8
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v18; // rax
  int v19; // ebp
  int v20; // esi
  int v21; // r14d
  unsigned int *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // ebp
  int v28; // esi
  int v29; // r14d
  unsigned int *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // edi
  struct tagWND *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *i; // rdi
  _BOOL8 v43; // rdx
  void *v44; // rax
  _BOOL8 v45; // rcx
  void *v46; // rax
  _BOOL8 v47; // rcx
  void *v48; // rax
  _QWORD v49[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
  {
    v39 = *(_QWORD *)(gptiCurrent + 608LL);
    if ( !v39 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v39 + 24) + 8LL);
    v40 = *((_QWORD *)v4 + 5);
    if ( !*(_QWORD *)(v40 + 136) && (*(_BYTE *)(v40 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      PushW32ThreadLock(0LL, v49, UserDereferenceObject);
      for ( i = *(_QWORD **)(v39 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock((__int64)i, (__int64)v49);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock((__int64)v49, v41);
    }
  }
  else
  {
    v4 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL),
           gptiCurrent);
  }
  if ( !v4 )
    return 0LL;
  if ( !(!a1 || a1 == v4 ? 1 : IsChild(a1)) )
    return 0LL;
  v6 = *((_QWORD *)v4 + 5);
  v7 = *(_BYTE *)(v6 + 17);
  if ( (v7 & 0x10) == 0 )
    goto LABEL_15;
  v8 = *(_DWORD *)(v6 + 28);
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 232);
  *(_BYTE *)(v6 + 17) = v7 & 0xEF;
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v12 = (unsigned int *)*((_QWORD *)v4 + 5);
    v13 = v12[7];
    v14 = v12[6];
    v15 = v12[58];
    if ( v8 != v13 )
      goto LABEL_48;
    if ( v9 == (_DWORD)v14 && v10 == v15 )
      goto LABEL_12;
    if ( v8 == v13 )
    {
      if ( v9 == (_DWORD)v14 )
      {
        if ( ((v10 ^ v15) & 0x2E00300) == 0 )
          goto LABEL_12;
        v43 = 1LL;
      }
      else
      {
        v43 = ((v9 ^ (unsigned int)v14) & 0x4E27A9) != 0;
        v11 = -((v9 ^ (unsigned int)v14) & 0x4E27A9);
      }
    }
    else
    {
LABEL_48:
      v43 = ((v8 ^ v13) & 0xB9CF0000) != 0;
      v11 = -((v8 ^ v13) & 0xB9CF0000);
    }
    if ( v43 )
    {
      v44 = (void *)ReferenceDwmApiPort(v11, v43, v14);
      DwmAsyncChildStyleChange(v44);
    }
  }
LABEL_12:
  if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 136LL) )
  {
    v16 = *((_QWORD *)v4 + 2);
    if ( (*(_DWORD *)(v16 + 592))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v16 + 440) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v16 + 440) + 4LL) &= ~0x20u;
    }
  }
LABEL_15:
  v18 = *((_QWORD *)v4 + 5);
  v19 = *(_DWORD *)(v18 + 28);
  v20 = *(_DWORD *)(v18 + 24);
  v21 = *(_DWORD *)(v18 + 232);
  *(_BYTE *)(v18 + 20) &= ~4u;
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v22 = (unsigned int *)*((_QWORD *)v4 + 5);
    v23 = v22[7];
    v24 = v22[6];
    v25 = v22[58];
    if ( v19 != (_DWORD)v23 )
      goto LABEL_56;
    if ( v20 == (_DWORD)v24 && v21 == v25 )
      goto LABEL_19;
    if ( v19 != (_DWORD)v23 )
    {
LABEL_56:
      v45 = (((unsigned int)v23 ^ v19) & 0xB9CF0000) != 0;
      goto LABEL_59;
    }
    if ( v20 != (_DWORD)v24 )
    {
      v45 = (((unsigned int)v24 ^ v20) & 0x4E27A9) != 0;
      goto LABEL_59;
    }
    if ( ((v25 ^ v21) & 0x2E00300) != 0 )
    {
      v45 = 1LL;
LABEL_59:
      if ( v45 )
      {
        v46 = (void *)ReferenceDwmApiPort(v45, v24, v23);
        DwmAsyncChildStyleChange(v46);
      }
    }
  }
LABEL_19:
  v26 = *((_QWORD *)v4 + 5);
  v27 = *(_DWORD *)(v26 + 28);
  v28 = *(_DWORD *)(v26 + 24);
  v29 = *(_DWORD *)(v26 + 232);
  *(_BYTE *)(v26 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_23;
  v30 = (unsigned int *)*((_QWORD *)v4 + 5);
  v31 = v30[7];
  v32 = v30[6];
  v33 = v30[58];
  if ( v27 != (_DWORD)v31 )
    goto LABEL_64;
  if ( v28 == (_DWORD)v32 && v29 == v33 )
    goto LABEL_23;
  if ( v27 == (_DWORD)v31 )
  {
    if ( v28 == (_DWORD)v32 )
    {
      if ( ((v33 ^ v29) & 0x2E00300) == 0 )
        goto LABEL_23;
      v47 = 1LL;
    }
    else
    {
      v47 = (((unsigned int)v32 ^ v28) & 0x4E27A9) != 0;
    }
  }
  else
  {
LABEL_64:
    v47 = (((unsigned int)v31 ^ v27) & 0xB9CF0000) != 0;
  }
  if ( v47 )
  {
    v48 = (void *)ReferenceDwmApiPort(v47, v32, v31);
    DwmAsyncChildStyleChange(v48);
  }
LABEL_23:
  v34 = v4;
  while ( (*(_WORD *)(*((_QWORD *)v34 + 5) + 42LL) & 0x3FFF) != 0x29D )
  {
    v34 = (struct tagWND *)*((_QWORD *)v34 + 10);
    if ( (*(_BYTE *)(*((_QWORD *)v34 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1LL, v4, 1025LL, 1LL);
      break;
    }
    if ( !v34 )
      break;
  }
  v35 = *(_QWORD *)v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v35;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
  v36 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v36 + 21) & 2) == 0 && (*(_BYTE *)(v36 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 14) + 80LL) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v37 = 38;
  }
  else
  {
    v37 = 15;
  }
  *(_DWORD *)(a2 + 8) = v37;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
