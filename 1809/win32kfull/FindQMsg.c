/*
 * XREFs of FindQMsg @ 0x1C0034980
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00343A0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C013390C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     FreeDdeXact @ 0x1C01F4A70 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // rdi
  __int64 *v7; // r12
  struct tagTHREADINFO *v9; // r15
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v13; // r8d
  unsigned __int64 v14; // rsi
  __int64 v15; // rbp
  _QWORD *v16; // r15
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v23; // [rsp+60h] [rbp+8h]
  struct tagMLIST *v24; // [rsp+68h] [rbp+10h]

  v24 = (struct tagMLIST *)a2;
  v23 = a1;
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
      v13 = (unsigned __int16)v10;
      a1 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
      {
        v14 = v10 >> 16;
        v15 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v13 * *((_DWORD *)&gSharedInfo + 4));
        a2 = 3 * ((__int64)(unsigned int)(v13 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
        a1 = gpKernelHandleTable;
        v16 = (_QWORD *)(gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v13 * *((_DWORD *)&gSharedInfo + 4)) >> 5));
        if ( ((_WORD)v14 == *(_WORD *)(v15 + 26)
           || (_WORD)v14 == 0xFFFF
           || !(_WORD)v14 && PsGetCurrentProcessWow64Process(gpKernelHandleTable))
          && (*(_BYTE *)(v15 + 25) & 1) == 0
          && *(_BYTE *)(v15 + 24) == 1 )
        {
          v11 = (_QWORD *)*v16;
          if ( *v16 )
            goto LABEL_19;
        }
        v9 = (struct tagTHREADINFO *)v23;
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit(v9, v24);
        v17 = *((_QWORD *)v9 + 54);
        if ( *(__int64 **)(v17 + 72) == v6 && *(struct tagTHREADINFO **)(v17 + 64) == v9 )
        {
          EtwTraceInputQueueUnLocked();
          *(_QWORD *)(*((_QWORD *)v9 + 54) + 64LL) = 0LL;
        }
        goto LABEL_28;
      }
LABEL_19:
      v18 = a6;
      if ( a6 )
      {
        v19 = a3 ? *a3 : 0LL;
        if ( v19 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(a2) = 11;
          v20 = HMValidateHandleNoRip(v6[5], a2);
          if ( v20 && (*(_DWORD *)(v20 + 64) & 0x200) != 0 )
          {
            FreeDdeXact(v20);
LABEL_28:
            DelQEntry(v24, v6, 1LL);
            v6 = *(__int64 **)v24;
            goto LABEL_56;
          }
          v18 = a6;
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
            v21 = 1;
            goto LABEL_39;
          }
        }
        v21 = 0;
LABEL_39:
        if ( !v21 )
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
        if ( !v18 )
          return v6;
        if ( !v7 )
          v7 = v6;
      }
LABEL_55:
      v6 = (__int64 *)*v6;
LABEL_56:
      if ( !v6 )
        return v7;
      v9 = (struct tagTHREADINFO *)v23;
    }
  }
  return v7;
}
