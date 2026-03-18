/*
 * XREFs of FindQMsg @ 0x1C00493A0
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0048DF0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C013629C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     FreeDdeXact @ 0x1C01D0380 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 *v6; // rdi
  __int64 *v7; // r12
  struct tagTHREADINFO *v9; // r15
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  _QWORD *v17; // r15
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v24; // [rsp+60h] [rbp+8h]
  struct tagMLIST *v25; // [rsp+68h] [rbp+10h]

  v25 = (struct tagMLIST *)a2;
  v24 = a1;
  v6 = *(__int64 **)a2;
  v7 = 0LL;
  v9 = (struct tagTHREADINFO *)a1;
  if ( *(_QWORD *)a2 )
  {
    while ( 1 )
    {
      v10 = v6[2];
      v11 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
        PsGetThreadWin32Thread(CurrentThread);
      v14 = (unsigned __int16)v10;
      a1 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
      {
        v15 = v10 >> 16;
        v16 = gSharedInfo[1] + (unsigned int)(v14 * LODWORD(gSharedInfo[2]));
        a2 = 3 * ((__int64)(unsigned int)(v14 * LODWORD(gSharedInfo[2])) >> 5);
        a1 = gpKernelHandleTable;
        v17 = (_QWORD *)(gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v14 * LODWORD(gSharedInfo[2])) >> 5));
        if ( ((_WORD)v15 == *(_WORD *)(v16 + 26)
           || (_WORD)v15 == 0xFFFF
           || !(_WORD)v15 && PsGetCurrentProcessWow64Process(gpKernelHandleTable, a2, v14, v13))
          && (*(_BYTE *)(v16 + 25) & 1) == 0
          && *(_BYTE *)(v16 + 24) == 1 )
        {
          v11 = (_QWORD *)*v17;
          if ( *v17 )
            goto LABEL_19;
        }
        v9 = (struct tagTHREADINFO *)v24;
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit(v9, v25);
        v18 = *((_QWORD *)v9 + 53);
        if ( *(__int64 **)(v18 + 72) == v6 && *(struct tagTHREADINFO **)(v18 + 64) == v9 )
        {
          EtwTraceInputQueueUnLocked();
          *(_QWORD *)(*((_QWORD *)v9 + 53) + 64LL) = 0LL;
        }
        goto LABEL_28;
      }
LABEL_19:
      v19 = a6;
      if ( a6 )
      {
        v20 = a3 ? *a3 : 0LL;
        if ( v20 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(a2) = 11;
          v21 = HMValidateHandleNoRip(v6[5], a2, a6);
          if ( v21 && (*(_DWORD *)(v21 + 64) & 0x200) != 0 )
          {
            FreeDdeXact(v21);
LABEL_28:
            DelQEntry(v25, v6);
            v6 = *(__int64 **)v25;
            goto LABEL_56;
          }
          v19 = a6;
        }
      }
      if ( a3 && a3 != v11 && (a3 != (_QWORD *)1 || v11) )
      {
        while ( v11 )
        {
          a1 = *(unsigned __int8 *)(v11[5] + 31LL);
          LOBYTE(a1) = a1 & 0xC0;
          if ( (_BYTE)a1 != 64 )
            break;
          v11 = (_QWORD *)v11[10];
          if ( a3 == v11 )
          {
            v22 = 1;
            goto LABEL_39;
          }
        }
        v22 = 0;
LABEL_39:
        if ( !v22 )
          goto LABEL_55;
      }
      a1 = *((unsigned int *)v6 + 6);
      a2 = a1 & 0xFFFFFFFF7FFFFFFFuLL;
      if ( (unsigned int)(a1 + 2147482655) > 7 )
        a2 = (unsigned int)a1;
      if ( !a4 )
      {
        if ( a5 == -1 )
          goto LABEL_52;
LABEL_51:
        if ( (unsigned int)a2 <= a5 )
          goto LABEL_52;
        goto LABEL_55;
      }
      if ( a4 <= a5 )
      {
        if ( (unsigned int)a2 < a4 )
          goto LABEL_55;
        goto LABEL_51;
      }
      if ( (unsigned int)a2 < a5 || (unsigned int)a2 > a4 )
      {
LABEL_52:
        if ( !v19 )
          return v6;
        if ( !v7 )
          v7 = v6;
      }
LABEL_55:
      v6 = (__int64 *)*v6;
LABEL_56:
      if ( !v6 )
        return v7;
      v9 = (struct tagTHREADINFO *)v24;
    }
  }
  return v7;
}
