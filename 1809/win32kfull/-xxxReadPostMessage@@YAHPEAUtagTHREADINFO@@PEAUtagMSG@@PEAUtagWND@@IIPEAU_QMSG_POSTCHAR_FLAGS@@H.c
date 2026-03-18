/*
 * XREFs of ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00343A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     FindQMsg @ 0x1C0034980 (FindQMsg.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00CF08C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C013390C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     FreePointerMessageParams @ 0x1C01DB134 (FreePointerMessageParams.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F4BC0 (xxxDDETrackGetMessageHook.c)
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
  struct tagMLIST *v15; // r14
  unsigned int v16; // r15d
  __int64 QMsg; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned int v21; // r13d
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r9
  _QWORD *v28; // rcx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  _QWORD *v35; // rcx
  int v36; // eax
  int v37; // ecx
  bool v38; // zf
  int v39; // eax
  unsigned int *v40; // [rsp+30h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-80h]
  _QWORD *v42; // [rsp+38h] [rbp-80h]
  unsigned __int64 v43; // [rsp+40h] [rbp-78h]
  __int64 v44; // [rsp+40h] [rbp-78h]
  __int64 v45; // [rsp+48h] [rbp-70h]

  v9 = (unsigned int *)((char *)a1 + 488);
  v40 = (unsigned int *)((char *)a1 + 488);
  v10 = *((_DWORD *)a1 + 122);
  if ( (v10 & 0x40000000) != 0 && !*((_DWORD *)a1 + 206) )
  {
    v11 = a7;
    if ( a7 )
      *v9 = v10 & 0xBFFFFFFF;
    *(_QWORD *)a2 = 0LL;
    *((_DWORD *)a2 + 2) = 18;
    *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
    *((_QWORD *)a2 + 3) = 0LL;
    *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v12 = *((_QWORD *)a1 + 54);
    v13 = *(_QWORD *)(v12 + 120);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
LABEL_15:
      *(_QWORD *)((char *)a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(v14 + 424)
                                                                                             + 280LL));
      EtwTraceRetrievePseudoMessage(a1, a2, v11);
      return 1LL;
    }
    goto LABEL_14;
  }
  v15 = (struct tagTHREADINFO *)((char *)a1 + 808);
  v16 = 0;
  QMsg = FindQMsg(a1, a5, 0);
  v45 = QMsg;
  v18 = QMsg;
  if ( !QMsg )
  {
    if ( (*v9 & 0x40000000) != 0 && !*((_DWORD *)a1 + 206) )
    {
      v11 = a7;
      if ( a7 )
        *v9 &= ~0x40000000u;
      *(_QWORD *)a2 = 0LL;
      *((_DWORD *)a2 + 2) = 18;
      *((_QWORD *)a2 + 2) = *((unsigned int *)a1 + 146);
      *((_QWORD *)a2 + 3) = 0LL;
      *((_DWORD *)a2 + 8) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v12 = *((_QWORD *)a1 + 54);
      v19 = *(_QWORD *)(v12 + 120);
      if ( v19 )
      {
        v14 = *(_QWORD *)(v19 + 16);
        goto LABEL_15;
      }
LABEL_14:
      v14 = *(_QWORD *)(v12 + 96);
      goto LABEL_15;
    }
    v21 = a7;
    goto LABEL_73;
  }
  v21 = a7;
  v22 = 1;
  if ( (*((_DWORD *)a1 + 302) & 0x2000) == 0 && (unsigned int)(*(_DWORD *)(QMsg + 24) - 571) <= 1 )
    v21 = 1;
  EtwTraceRetrievePostMessage(QMsg, v21);
  *((_DWORD *)a1 + 142) = *(_DWORD *)(v18 + 48);
  if ( *(_QWORD *)((char *)a1 + 764) != *(_QWORD *)(v18 + 52) )
    *((_DWORD *)a1 + 122) |= 0x100000u;
  *((_DWORD *)a1 + 191) = *(_DWORD *)(v18 + 52);
  *((_DWORD *)a1 + 192) = *(_DWORD *)(v18 + 56);
  v43 = *(_QWORD *)(v18 + 16);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23) )
    PsGetThreadWin32Thread(CurrentThread);
  v25 = v43;
  if ( (unsigned __int64)(unsigned __int16)v43 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_33;
  v26 = *((_QWORD *)&gSharedInfo + 1);
  v27 = v26 + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v43;
  v44 = v27;
  v28 = (_QWORD *)(gpKernelHandleTable + 24LL * (unsigned int)((v27 - v26) >> 5));
  v42 = v28;
  v29 = v25 >> 16;
  if ( (_WORD)v29 != *(_WORD *)(v27 + 26) && (_WORD)v29 != 0xFFFF )
  {
    if ( (_WORD)v29 || !PsGetCurrentProcessWow64Process(v28) )
      goto LABEL_33;
    v27 = v44;
    v28 = v42;
  }
  if ( (*(_BYTE *)(v27 + 25) & 1) != 0 || *(_BYTE *)(v27 + 24) != 1 )
  {
LABEL_33:
    v30 = 0LL;
    goto LABEL_34;
  }
  v30 = *v28;
LABEL_34:
  if ( v30 )
    v31 = *(_DWORD *)(*(_QWORD *)(v30 + 40) + 288LL);
  else
    v31 = *(_DWORD *)(*((_QWORD *)a1 + 53) + 280LL);
  *((_DWORD *)a1 + 193) = v31;
  *((_QWORD *)a1 + 97) = *(_QWORD *)(v18 + 80);
  *((_QWORD *)a1 + 72) = v18;
  *(_QWORD *)(*((_QWORD *)a1 + 54) + 408LL) = *(_QWORD *)(v18 + 72);
  *((_QWORD *)a1 + 152) = *(_QWORD *)(v18 + 120);
  *(_OWORD *)a2 = *(_OWORD *)(v18 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v18 + 32);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v18 + 48);
  if ( a6 )
  {
    *(_DWORD *)a6 ^= (*(_DWORD *)a6 ^ (*(int *)(v18 + 100) >> 14)) & 1;
    *(_DWORD *)a6 ^= ((unsigned __int8)*(_DWORD *)a6 ^ (unsigned __int8)(*(int *)(v18 + 100) >> 14)) & 2;
  }
  if ( v21 )
  {
    v32 = (unsigned __int64 *)*((_QWORD *)a1 + 60);
    v33 = *v32;
    if ( (*(_DWORD *)(v18 + 100) & 1) != 0 )
      v34 = v33 | 0x1000;
    else
      v34 = v33 & 0xFFFFFFFFFFFFEFFFuLL;
    *v32 = v34;
    if ( *(_DWORD *)(*(_QWORD *)v15 + 24LL) == 786 )
      CheckRemoveHotkeyBit(a1, v15);
    if ( (*((_DWORD *)a1 + 122) & 0x400) != 0 && (int)CheckProcessForeground(a1) < 0 )
      return 0LL;
    v35 = *(_QWORD **)(v18 + 8);
    if ( v35 )
      *v35 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 )
      *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *(_QWORD *)(v18 + 8);
    if ( *(_QWORD *)v15 == v18 )
      *(_QWORD *)v15 = *(_QWORD *)v18;
    if ( *((_QWORD *)v15 + 1) == v18 )
      *((_QWORD *)v15 + 1) = *(_QWORD *)(v18 + 8);
    v36 = *(_DWORD *)(v18 + 100);
    if ( (v36 & 0x10000) == 0 && (v36 & 0x20000) == 0 && (v36 & 0x80000) == 0 )
      v22 = 0;
    if ( !v22 )
    {
      --*((_DWORD *)v15 + 4);
      v36 = *(_DWORD *)(v45 + 100);
    }
    if ( (v36 & 8) != 0 && !*(_DWORD *)(v18 + 96) && IsPointerInputMessage(*(_DWORD *)(v18 + 24)) )
      FreePointerMessageParams(v18);
    Win32FreeToPagedLookasideList(QEntryLookaside, v18);
  }
  else
  {
    *((_QWORD *)a1 + 72) = 1LL;
  }
  v37 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)(v37 + 2147482655) > 7
    || (*((_DWORD *)a2 + 2) = v37 & 0x7FFFFFFF, xxxDDETrackGetMessageHook(a2), v21) )
  {
    v9 = v40;
  }
  else
  {
    v9 = v40;
    if ( v18 == FindQMsg(a1, a5, 0) )
    {
      *(_OWORD *)(v18 + 16) = *(_OWORD *)a2;
      *(_OWORD *)(v18 + 32) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v18 + 48) = *((_OWORD *)a2 + 2);
    }
  }
LABEL_73:
  if ( !*((_DWORD *)v15 + 4) && (*v9 & 0x40000000) == 0 )
  {
    *(_WORD *)(*((_QWORD *)a1 + 56) + 6LL) &= 0xFEF7u;
    *(_WORD *)(*((_QWORD *)a1 + 56) + 4LL) &= ~0x100u;
  }
  if ( !v21 )
    goto LABEL_81;
  v38 = v18 == 0;
  if ( v18 )
  {
    v39 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v39 - 256) <= 9 && v39 != 258 )
      *((_DWORD *)a1 + 330) &= ~1u;
LABEL_81:
    v38 = v18 == 0;
  }
  LOBYTE(v16) = !v38;
  return v16;
}
