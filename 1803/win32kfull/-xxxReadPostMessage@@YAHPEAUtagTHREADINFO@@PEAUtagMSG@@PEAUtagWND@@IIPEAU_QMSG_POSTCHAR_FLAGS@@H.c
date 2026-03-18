/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0048DF0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 *     FindQMsg @ 0x1C00493A0 (FindQMsg.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C005FD6C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C013629C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     FreePointerMessageParams @ 0x1C01B84E4 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall xxxReadPostMessage(
        struct tagTHREADINFO *a1,
        struct tagMSG *a2,
        struct tagWND *a3,
        __int64 a4,
        unsigned int a5,
        struct _QMSG_POSTCHAR_FLAGS *a6,
        unsigned int a7)
{
  unsigned int *v9; // r12
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct tagMLIST *v16; // r14
  unsigned int v17; // r15d
  __int64 QMsg; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // r13d
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  int v32; // ecx
  unsigned __int64 *v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  _QWORD *v36; // rcx
  int v37; // eax
  int v38; // ecx
  bool v39; // zf
  int v40; // eax
  unsigned int *v41; // [rsp+30h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-80h]
  _QWORD *v43; // [rsp+38h] [rbp-80h]
  unsigned __int64 v44; // [rsp+40h] [rbp-78h]
  __int64 v45; // [rsp+40h] [rbp-78h]
  __int64 v46; // [rsp+48h] [rbp-70h]

  v9 = (unsigned int *)((char *)a1 + 480);
  v41 = (unsigned int *)((char *)a1 + 480);
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
    v12 = *((_QWORD *)a1 + 53);
    v13 = *(_QWORD *)(v12 + 120);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
LABEL_8:
      *(_QWORD *)((char *)a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v14 + 416)
                                                                                             + 280LL));
      EtwTraceRetrievePseudoMessage(a1, a2, v11);
      return 1LL;
    }
LABEL_7:
    v14 = *(_QWORD *)(v12 + 96);
    goto LABEL_8;
  }
  v16 = (struct tagTHREADINFO *)((char *)a1 + 800);
  v17 = 0;
  QMsg = FindQMsg(a1, a5, 0);
  v46 = QMsg;
  v19 = QMsg;
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
      v12 = *((_QWORD *)a1 + 53);
      v20 = *(_QWORD *)(v12 + 120);
      if ( v20 )
      {
        v14 = *(_QWORD *)(v20 + 16);
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    v21 = a7;
    goto LABEL_72;
  }
  v21 = a7;
  v22 = 1;
  if ( (*((_DWORD *)a1 + 300) & 0x2000) == 0 && (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) <= 1 )
    v21 = 1;
  EtwTraceRetrievePostMessage(QMsg, v21);
  *((_DWORD *)a1 + 140) = *(_DWORD *)(v19 + 48);
  if ( *(_QWORD *)((char *)a1 + 748) != *(_QWORD *)(v19 + 52) )
    *((_DWORD *)a1 + 120) |= 0x100000u;
  *((_DWORD *)a1 + 187) = *(_DWORD *)(v19 + 52);
  *((_DWORD *)a1 + 188) = *(_DWORD *)(v19 + 56);
  v44 = *(_QWORD *)(v19 + 16);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23) )
    PsGetThreadWin32Thread(CurrentThread);
  v25 = v44;
  if ( (unsigned __int64)(unsigned __int16)v44 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_33;
  v26 = gSharedInfo[1];
  v27 = v26 + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v44;
  v45 = v27;
  v28 = 3LL * (unsigned int)((v27 - v26) >> 5);
  v29 = (_QWORD *)(gpKernelHandleTable + 8 * v28);
  v43 = v29;
  v30 = v25 >> 16;
  if ( (_WORD)v30 != *(_WORD *)(v27 + 26) && (_WORD)v30 != 0xFFFF )
  {
    if ( (_WORD)v30 || !PsGetCurrentProcessWow64Process(v29, v28, v30, v27) )
      goto LABEL_33;
    v27 = v45;
    v29 = v43;
  }
  if ( (*(_BYTE *)(v27 + 25) & 1) != 0 || *(_BYTE *)(v27 + 24) != 1 )
  {
LABEL_33:
    v31 = 0LL;
    goto LABEL_34;
  }
  v31 = *v29;
LABEL_34:
  if ( v31 )
    v32 = *(_DWORD *)(*(_QWORD *)(v31 + 40) + 288LL);
  else
    v32 = *(_DWORD *)(*((_QWORD *)a1 + 52) + 280LL);
  *((_DWORD *)a1 + 189) = v32;
  *((_QWORD *)a1 + 95) = *(_QWORD *)(v19 + 80);
  *((_QWORD *)a1 + 71) = v19;
  *(_QWORD *)(*((_QWORD *)a1 + 53) + 408LL) = *(_QWORD *)(v19 + 72);
  *((_QWORD *)a1 + 151) = *(_QWORD *)(v19 + 120);
  *(_OWORD *)a2 = *(_OWORD *)(v19 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v19 + 32);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v19 + 48);
  if ( a6 )
  {
    *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v19 + 100) >> 14)) & 1;
    *(_DWORD *)a6 ^= ((unsigned __int8)*(_DWORD *)a6 ^ (unsigned __int8)(*(int *)(v19 + 100) >> 14)) & 2;
  }
  if ( v21 )
  {
    v33 = (unsigned __int64 *)*((_QWORD *)a1 + 59);
    v34 = *v33;
    if ( (*(_DWORD *)(v19 + 100) & 1) != 0 )
      v35 = v34 | 0x1000;
    else
      v35 = v34 & 0xFFFFFFFFFFFFEFFFuLL;
    *v33 = v35;
    if ( *(_DWORD *)(*(_QWORD *)v16 + 24LL) == 786 )
      CheckRemoveHotkeyBit(a1, v16);
    if ( (*((_DWORD *)a1 + 120) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
      return 0LL;
    v36 = *(_QWORD **)(v19 + 8);
    if ( v36 )
      *v36 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 )
      *(_QWORD *)(*(_QWORD *)v19 + 8LL) = *(_QWORD *)(v19 + 8);
    if ( *(_QWORD *)v16 == v19 )
      *(_QWORD *)v16 = *(_QWORD *)v19;
    if ( *((_QWORD *)v16 + 1) == v19 )
      *((_QWORD *)v16 + 1) = *(_QWORD *)(v19 + 8);
    v37 = *(_DWORD *)(v19 + 100);
    if ( (v37 & 0x10000) == 0 && (v37 & 0x40000) == 0 )
      v22 = 0;
    if ( !v22 )
    {
      --*((_DWORD *)v16 + 4);
      v37 = *(_DWORD *)(v46 + 100);
    }
    if ( (v37 & 8) != 0 && !*(_DWORD *)(v19 + 96) && IsPointerInputMessage(*(_DWORD *)(v19 + 24)) )
      FreePointerMessageParams(v19);
    Win32FreeToPagedLookasideList(QEntryLookaside, v19);
  }
  else
  {
    *((_QWORD *)a1 + 71) = 1LL;
  }
  v38 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)(v38 + 2147482655) > 7
    || (*((_DWORD *)a2 + 2) = v38 & 0x7FFFFFFF, xxxDDETrackGetMessageHook(a2), v21) )
  {
    v9 = v41;
  }
  else
  {
    v9 = v41;
    if ( v19 == FindQMsg(a1, a5, 0) )
    {
      *(_OWORD *)(v19 + 16) = *(_OWORD *)a2;
      *(_OWORD *)(v19 + 32) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v19 + 48) = *((_OWORD *)a2 + 2);
    }
  }
LABEL_72:
  if ( !*((_DWORD *)v16 + 4) && (*v9 & 0x40000000) == 0 )
  {
    *(_WORD *)(*((_QWORD *)a1 + 55) + 6LL) &= 0xFEF7u;
    *(_WORD *)(*((_QWORD *)a1 + 55) + 4LL) &= ~0x100u;
  }
  if ( !v21 )
    goto LABEL_80;
  v39 = v19 == 0;
  if ( v19 )
  {
    v40 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v40 - 256) <= 9 && v40 != 258 )
      *((_DWORD *)a1 + 328) &= ~1u;
LABEL_80:
    v39 = v19 == 0;
  }
  LOBYTE(v17) = !v39;
  return v17;
}
