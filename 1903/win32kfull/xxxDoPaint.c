/*
 * XREFs of xxxDoPaint @ 0x1C009A840
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     ExchangeW32ThreadLock @ 0x1C0087100 (ExchangeW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009AB80 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     _IsChild @ 0x1C011C2A8 (_IsChild.c)
 */

__int64 __fastcall xxxDoPaint(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rbx
  __int64 v8; // rcx
  __int64 v10; // rax
  int v11; // r15d
  int v12; // esi
  int v13; // r12d
  __int64 v14; // rcx
  int v15; // ebp
  unsigned int *v16; // rax
  unsigned int v17; // r9d
  __int64 v18; // r8
  int v19; // edi
  __int64 v20; // rax
  int v21; // r15d
  int v22; // esi
  int v23; // r12d
  __int64 v24; // rcx
  unsigned int *v25; // rax
  unsigned int v26; // r9d
  __int64 v27; // r8
  int v28; // edi
  __int64 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v34; // rdi
  __int64 v35; // rax
  _QWORD *i; // rdi
  int v37; // ecx
  _BOOL8 v38; // rdx
  int v39; // esi
  void *v40; // rax
  _BOOL8 v41; // rdx
  void *v42; // rax
  _QWORD v43[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
  {
    v34 = *(_QWORD *)(gptiCurrent + 608LL);
    if ( !v34 )
      return 0LL;
    v6 = *(__int64 **)(*(_QWORD *)(v34 + 24) + 8LL);
    v35 = v6[5];
    if ( !*(_QWORD *)(v35 + 136) && (*(_BYTE *)(v35 + 17) & 0x10) == 0 )
    {
      v6 = 0LL;
      memset(v43, 0, 24);
      PushW32ThreadLock(0LL, v43, UserDereferenceObject, a4);
      for ( i = *(_QWORD **)(v34 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock((__int64)i, (__int64)v43);
        v6 = (__int64 *)xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v6 )
          break;
      }
      PopAndFreeW32ThreadLock(v43);
    }
  }
  else
  {
    v6 = (__int64 *)xxxInternalDoPaint(
                      *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL),
                      gptiCurrent);
  }
  if ( !v6 )
    return 0LL;
  if ( !(!a1 || a1 == v6 ? 1 : IsChild(a1, v6)) )
    return 0LL;
  if ( (*(_BYTE *)(v6[5] + 17) & 0x10) != 0 )
  {
    SetOrClrWF(0, (__int64)v6, 0x110u, 1);
    if ( !*(_QWORD *)(v6[5] + 136) )
    {
      v8 = v6[2];
      if ( (*(_DWORD *)(v8 + 592))-- == 1 )
      {
        *(_WORD *)(*(_QWORD *)(v8 + 440) + 6LL) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(v8 + 440) + 4LL) &= ~0x20u;
      }
    }
  }
  v10 = v6[5];
  v11 = *(_DWORD *)(v10 + 28);
  v12 = *(_DWORD *)(v10 + 24);
  v13 = *(_DWORD *)(v10 + 232);
  *(_BYTE *)(v10 + 20) &= ~4u;
  v15 = -268435456;
  if ( !(unsigned int)IsWindowDesktopComposed(v6) )
    goto LABEL_15;
  v16 = (unsigned int *)v6[5];
  v17 = v16[7];
  v18 = v16[6];
  v19 = v16[58];
  if ( v11 != v17 )
    goto LABEL_44;
  if ( v12 == (_DWORD)v18 && v13 == v19 )
    goto LABEL_15;
  if ( v11 != v17 )
  {
LABEL_44:
    v38 = ((v11 ^ v17) & 0xB1CF0000) != 0;
    v39 = ((v11 ^ v17) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
    v14 = -((v11 ^ v17) & 0xB1CF0000);
    v19 = ((v11 ^ v17) & 0xB1CF0000) != 0 ? v17 : 0;
    goto LABEL_47;
  }
  if ( v12 != (_DWORD)v18 )
  {
    v37 = (v12 ^ v18) & 0x4E27A9;
    v38 = v37 != 0;
    v39 = v37 != 0 ? 0xFFFFFFEC : 0;
    v14 = (unsigned int)-v37;
    v19 = (_DWORD)v14 != 0 ? v18 : 0;
    goto LABEL_47;
  }
  if ( ((v13 ^ v19) & 0x2E00300) != 0 )
  {
    v38 = 1LL;
    v39 = -268435456;
LABEL_47:
    if ( v38 )
    {
      v40 = (void *)ReferenceDwmApiPort(v14, v38, v18);
      DwmAsyncChildStyleChange(v40, *v6, v39, v19);
    }
  }
LABEL_15:
  v20 = v6[5];
  v21 = *(_DWORD *)(v20 + 28);
  v22 = *(_DWORD *)(v20 + 24);
  v23 = *(_DWORD *)(v20 + 232);
  *(_BYTE *)(v20 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v6) )
    goto LABEL_19;
  v25 = (unsigned int *)v6[5];
  v26 = v25[7];
  v27 = v25[6];
  v28 = v25[58];
  if ( v21 != v26 )
    goto LABEL_52;
  if ( v22 == (_DWORD)v27 && v23 == v28 )
    goto LABEL_19;
  if ( v21 == v26 )
  {
    if ( v22 == (_DWORD)v27 )
    {
      if ( ((v23 ^ v28) & 0x2E00300) == 0 )
        goto LABEL_19;
      v41 = 1LL;
    }
    else
    {
      v41 = ((v22 ^ (unsigned int)v27) & 0x4E27A9) != 0;
      v15 = ((v22 ^ (unsigned int)v27) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
      v24 = -((v22 ^ (unsigned int)v27) & 0x4E27A9);
      v28 = ((v22 ^ (unsigned int)v27) & 0x4E27A9) != 0 ? v27 : 0;
    }
  }
  else
  {
LABEL_52:
    v41 = ((v21 ^ v26) & 0xB1CF0000) != 0;
    v15 = ((v21 ^ v26) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
    v24 = -((v21 ^ v26) & 0xB1CF0000);
    v28 = ((v21 ^ v26) & 0xB1CF0000) != 0 ? v26 : 0;
  }
  if ( v41 )
  {
    v42 = (void *)ReferenceDwmApiPort(v24, v41, v27);
    DwmAsyncChildStyleChange(v42, *v6, v15, v28);
  }
LABEL_19:
  v29 = v6;
  while ( (*(_WORD *)(v29[5] + 42) & 0x3FFF) != 0x29D )
  {
    v29 = (__int64 *)v29[13];
    if ( (*(_BYTE *)(v29[5] + 31) & 2) == 0 )
    {
      SetOrClrWF(1, (__int64)v6, 0x401u, 1);
      break;
    }
    if ( !v29 )
      break;
  }
  v30 = *v6;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v30;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(v6[5] + 288));
  v31 = v6[5];
  if ( (*(_BYTE *)(v31 + 21) & 2) == 0 && (*(_BYTE *)(v31 + 31) & 0x20) != 0 && *(_QWORD *)(v6[17] + 80) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v32 = 38;
  }
  else
  {
    v32 = 15;
  }
  *(_DWORD *)(a2 + 8) = v32;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
