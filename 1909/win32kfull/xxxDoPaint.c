/*
 * XREFs of xxxDoPaint @ 0x1C003B610
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C0011A80 (ExchangeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C003B950 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     _IsChild @ 0x1C00F5DAC (_IsChild.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax
  int v9; // r15d
  int v10; // esi
  int v11; // r12d
  __int64 v12; // rcx
  unsigned int *v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // r15d
  int v19; // esi
  int v20; // r12d
  __int64 v21; // rcx
  unsigned int *v22; // rax
  unsigned int v23; // r9d
  __int64 v24; // r8
  unsigned int v25; // edi
  struct tagWND *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  _QWORD *i; // rdi
  _BOOL8 v34; // rdx
  void *v35; // rax
  _BOOL8 v36; // rdx
  void *v37; // rax
  _QWORD v38[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
  {
    v31 = *(_QWORD *)(gptiCurrent + 608LL);
    if ( !v31 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v31 + 24) + 8LL);
    v32 = *((_QWORD *)v4 + 5);
    if ( !*(_QWORD *)(v32 + 136) && (*(_BYTE *)(v32 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      memset(v38, 0, 24);
      PushW32ThreadLock(0LL, v38, UserDereferenceObject);
      for ( i = *(_QWORD **)(v31 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock((__int64)i, (__int64)v38);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock(v38);
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
  if ( !(!a1 || a1 == v4 ? 1 : IsChild(a1, v4)) )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, v4, 272LL, 1LL);
    if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 136LL) )
    {
      v6 = *((_QWORD *)v4 + 2);
      if ( (*(_DWORD *)(v6 + 592))-- == 1 )
      {
        *(_WORD *)(*(_QWORD *)(v6 + 440) + 6LL) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(v6 + 440) + 4LL) &= ~0x20u;
      }
    }
  }
  v8 = *((_QWORD *)v4 + 5);
  v9 = *(_DWORD *)(v8 + 28);
  v10 = *(_DWORD *)(v8 + 24);
  v11 = *(_DWORD *)(v8 + 232);
  *(_BYTE *)(v8 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_15;
  v13 = (unsigned int *)*((_QWORD *)v4 + 5);
  v14 = v13[7];
  v15 = v13[6];
  v16 = v13[58];
  if ( v9 != v14 )
    goto LABEL_44;
  if ( v10 == (_DWORD)v15 && v11 == v16 )
    goto LABEL_15;
  if ( v9 != v14 )
  {
LABEL_44:
    v34 = ((v9 ^ v14) & 0xB1CF0000) != 0;
    v12 = -((v9 ^ v14) & 0xB1CF0000);
    goto LABEL_47;
  }
  if ( v10 != (_DWORD)v15 )
  {
    v34 = ((v10 ^ (unsigned int)v15) & 0x4E27A9) != 0;
    v12 = -((v10 ^ (unsigned int)v15) & 0x4E27A9);
    goto LABEL_47;
  }
  if ( ((v11 ^ v16) & 0x2E00300) != 0 )
  {
    v34 = 1LL;
LABEL_47:
    if ( v34 )
    {
      v35 = (void *)ReferenceDwmApiPort(v12, v34, v15);
      DwmAsyncChildStyleChange(v35);
    }
  }
LABEL_15:
  v17 = *((_QWORD *)v4 + 5);
  v18 = *(_DWORD *)(v17 + 28);
  v19 = *(_DWORD *)(v17 + 24);
  v20 = *(_DWORD *)(v17 + 232);
  *(_BYTE *)(v17 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_19;
  v22 = (unsigned int *)*((_QWORD *)v4 + 5);
  v23 = v22[7];
  v24 = v22[6];
  v25 = v22[58];
  if ( v18 != v23 )
    goto LABEL_52;
  if ( v19 == (_DWORD)v24 && v20 == v25 )
    goto LABEL_19;
  if ( v18 == v23 )
  {
    if ( v19 == (_DWORD)v24 )
    {
      if ( ((v20 ^ v25) & 0x2E00300) == 0 )
        goto LABEL_19;
      v36 = 1LL;
    }
    else
    {
      v36 = ((v19 ^ (unsigned int)v24) & 0x4E27A9) != 0;
      v21 = -((v19 ^ (unsigned int)v24) & 0x4E27A9);
    }
  }
  else
  {
LABEL_52:
    v36 = ((v18 ^ v23) & 0xB1CF0000) != 0;
    v21 = -((v18 ^ v23) & 0xB1CF0000);
  }
  if ( v36 )
  {
    v37 = (void *)ReferenceDwmApiPort(v21, v36, v24);
    DwmAsyncChildStyleChange(v37);
  }
LABEL_19:
  v26 = v4;
  while ( (*(_WORD *)(*((_QWORD *)v26 + 5) + 42LL) & 0x3FFF) != 0x29D )
  {
    v26 = (struct tagWND *)*((_QWORD *)v26 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v26 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1LL, v4, 1025LL, 1LL);
      break;
    }
    if ( !v26 )
      break;
  }
  v27 = *(_QWORD *)v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v27;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
  v28 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v28 + 21) & 2) == 0 && (*(_BYTE *)(v28 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 17) + 80LL) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v29 = 38;
  }
  else
  {
    v29 = 15;
  }
  *(_DWORD *)(a2 + 8) = v29;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
