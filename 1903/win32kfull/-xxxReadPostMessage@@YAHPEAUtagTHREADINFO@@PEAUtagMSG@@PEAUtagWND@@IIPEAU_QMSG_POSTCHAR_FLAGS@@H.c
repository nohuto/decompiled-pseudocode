/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C009E000
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0016A74 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     FindQMsg @ 0x1C009E590 (FindQMsg.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C013F38C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     FreePointerMessageParams @ 0x1C01F08D4 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 */

_BOOL8 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        struct _QMSG_POSTCHAR_FLAGS *a6,
        unsigned int a7)
{
  unsigned int *v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  struct tagMLIST *v14; // r14
  __int64 QMsg; // rax
  __int64 v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r13
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  _QWORD *v28; // rax
  int v29; // r13d
  _QWORD *v30; // rcx
  int v31; // eax
  int v32; // ecx
  bool v33; // zf
  int v34; // edx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  _QWORD *v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+58h] [rbp-50h]

  v9 = (unsigned int *)((char *)a1 + 480);
  v10 = *((_DWORD *)a1 + 120);
  if ( (v10 & 0x40000000) != 0 && !*((_DWORD *)a1 + 204) )
  {
    v11 = a7;
    if ( a7 )
      *v9 = v10 & 0xBFFFFFFF;
    *(_QWORD *)a2 = 0LL;
    *((_DWORD *)a2 + 2) = 18;
    *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 144);
    *((_QWORD *)a2 + 3) = 0LL;
    *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
LABEL_6:
    v12 = PtiKbdFromQ(*((_QWORD *)a1 + 53));
    *(_QWORD *)((char *)a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v12 + 416)
                                                                                           + 280LL));
    EtwTraceRetrievePseudoMessage(a1, a2, v11);
    return 1LL;
  }
  v14 = (struct tagTHREADINFO *)((char *)a1 + 800);
  QMsg = FindQMsg(a1, (struct tagTHREADINFO *)((char *)a1 + 800), a5, 0);
  v38 = QMsg;
  v16 = QMsg;
  if ( !QMsg )
  {
    if ( (*v9 & 0x40000000) != 0 && !*((_DWORD *)a1 + 204) )
    {
      v11 = a7;
      if ( a7 )
        *v9 &= ~0x40000000u;
      *(_QWORD *)a2 = 0LL;
      *((_DWORD *)a2 + 2) = 18;
      *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 144);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      goto LABEL_6;
    }
    v17 = a7;
    goto LABEL_69;
  }
  v17 = a7;
  if ( (*((_DWORD *)a1 + 306) & 0x2000) == 0 && (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) <= 1 )
    v17 = 1;
  EtwTraceRetrievePostMessage(QMsg, v17);
  *((_DWORD *)a1 + 140) = *(_DWORD *)(v16 + 48);
  if ( *(_QWORD *)((char *)a1 + 756) != *(_QWORD *)(v16 + 52) )
    *v9 |= 0x100000u;
  *((_DWORD *)a1 + 189) = *(_DWORD *)(v16 + 52);
  *((_DWORD *)a1 + 190) = *(_DWORD *)(v16 + 56);
  v22 = *(_QWORD *)(v16 + 16);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18, v20, v21) )
    PsGetThreadWin32Thread(CurrentThread);
  if ( (unsigned __int64)(unsigned __int16)v22 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_30;
  v36 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v22 * LODWORD(gSharedInfo[2]);
  v23 = (_QWORD *)HMPkheFromPhe(v36);
  v37 = v23;
  v24 = v22 >> 16;
  v25 = v36;
  if ( (_WORD)v24 != *(_WORD *)(v36 + 26) && (_WORD)v24 != 0xFFFF )
  {
    if ( (_WORD)v24 || !PsGetCurrentProcessWow64Process(v36) )
      goto LABEL_30;
    v25 = v36;
    v23 = v37;
  }
  if ( (*(_BYTE *)(v25 + 25) & 1) != 0 || *(_BYTE *)(v25 + 24) != 1 )
  {
LABEL_30:
    v26 = 0LL;
    goto LABEL_31;
  }
  v26 = *v23;
LABEL_31:
  if ( v26 )
    v27 = *(_DWORD *)(*(_QWORD *)(v26 + 40) + 288LL);
  else
    v27 = *(_DWORD *)(*((_QWORD *)a1 + 52) + 280LL);
  *((_DWORD *)a1 + 191) = v27;
  *((_QWORD *)a1 + 96) = *(_QWORD *)(v16 + 80);
  *((_QWORD *)a1 + 71) = v16;
  *(_QWORD *)(*((_QWORD *)a1 + 53) + 416LL) = *(_QWORD *)(v16 + 72);
  *((_QWORD *)a1 + 155) = *(_QWORD *)(v16 + 120);
  *(_OWORD *)a2 = *(_OWORD *)(v16 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v16 + 32);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v16 + 48);
  if ( a6 )
  {
    *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v16 + 100) >> 14)) & 1;
    *(_DWORD *)a6 ^= ((unsigned __int8)*(_DWORD *)a6 ^ (unsigned __int8)(*(int *)(v16 + 100) >> 14)) & 2;
  }
  if ( v17 )
  {
    v28 = (_QWORD *)*((_QWORD *)a1 + 59);
    if ( (*(_DWORD *)(v16 + 100) & 1) != 0 )
      *v28 |= 0x1000uLL;
    else
      *v28 &= ~0x1000uLL;
    v29 = 1;
    if ( *(_DWORD *)(*(_QWORD *)v14 + 24LL) == 786 )
      CheckRemoveHotkeyBit(a1, v14);
    if ( (*((_DWORD *)a1 + 120) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
      return 0LL;
    v30 = *(_QWORD **)(v16 + 8);
    if ( v30 )
      *v30 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 )
      *(_QWORD *)(*(_QWORD *)v16 + 8LL) = *(_QWORD *)(v16 + 8);
    if ( *(_QWORD *)v14 == v16 )
      *(_QWORD *)v14 = *(_QWORD *)v16;
    if ( *((_QWORD *)v14 + 1) == v16 )
      *((_QWORD *)v14 + 1) = *(_QWORD *)(v16 + 8);
    v31 = *(_DWORD *)(v16 + 100);
    if ( (v31 & 0x10000) == 0 && (v31 & 0x20000) == 0 && (v31 & 0x80000) == 0 )
      v29 = 0;
    if ( !v29 )
    {
      --*((_DWORD *)v14 + 4);
      v31 = *(_DWORD *)(v38 + 100);
    }
    if ( (v31 & 8) != 0 && !*(_DWORD *)(v16 + 96) && IsPointerInputMessage(*(_DWORD *)(v16 + 24)) )
      FreePointerMessageParams(v16);
    Win32FreeToPagedLookasideList(QEntryLookaside, v16);
  }
  else
  {
    *((_QWORD *)a1 + 71) = 1LL;
  }
  v32 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)(v32 + 2147482655) <= 7 )
  {
    *((_DWORD *)a2 + 2) = v32 & 0x7FFFFFFF;
    xxxDDETrackGetMessageHook(a2);
    if ( !v17 && v16 == FindQMsg(a1, v14, a5, 0) )
    {
      *(_OWORD *)(v16 + 16) = *(_OWORD *)a2;
      *(_OWORD *)(v16 + 32) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v16 + 48) = *((_OWORD *)a2 + 2);
    }
  }
LABEL_69:
  if ( !*((_DWORD *)v14 + 4) && (*v9 & 0x40000000) == 0 )
  {
    *(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) &= 0xFEF7u;
    *(_WORD *)(*((_QWORD *)a1 + 55) + 4LL) &= ~0x100u;
  }
  if ( !v17 )
    goto LABEL_77;
  v33 = v16 == 0;
  if ( v16 )
  {
    v34 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v34 - 256) <= 9 && v34 != 258 )
      *((_DWORD *)a1 + 336) &= ~1u;
LABEL_77:
    v33 = v16 == 0;
  }
  return !v33;
}
