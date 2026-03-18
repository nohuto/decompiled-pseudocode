/*
 * XREFs of FindQMsg @ 0x1C003F360
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C003EDD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C0071248 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C011986C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     FreeDdeXact @ 0x1C020B380 (FreeDdeXact.c)
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
  _QWORD *v8; // r15
  struct tagMLIST *v9; // r14
  struct tagTHREADINFO *v10; // r13
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v24; // [rsp+88h] [rbp+10h]

  v24 = a2;
  v6 = *(__int64 **)a2;
  v7 = 0LL;
  v8 = a3;
  v9 = (struct tagMLIST *)a2;
  v10 = (struct tagTHREADINFO *)a1;
  if ( !*(_QWORD *)a2 )
    return v7;
  while ( 1 )
  {
    v11 = v6[2];
    v12 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
      PsGetThreadWin32Thread(CurrentThread);
    a2 = (unsigned __int16)v11;
    a1 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
    {
      v14 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v11 * LODWORD(gSharedInfo[2]);
      v15 = v11 >> 16;
      v16 = (_QWORD *)HMPkheFromPhe(v14);
      if ( ((_WORD)v15 == *(_WORD *)(v14 + 26)
         || (_WORD)v15 == 0xFFFF
         || !(_WORD)v15 && PsGetCurrentProcessWow64Process(a1))
        && (*(_BYTE *)(v14 + 25) & 1) == 0
        && *(_BYTE *)(v14 + 24) == 1 )
      {
        v12 = (_QWORD *)*v16;
        if ( *v16 )
          goto LABEL_21;
      }
      v9 = (struct tagMLIST *)v24;
    }
    if ( v6[2] )
    {
      if ( *((_DWORD *)v6 + 6) == 786 )
        CheckRemoveHotkeyBit(v10, v9);
      v17 = *((_QWORD *)v10 + 53);
      if ( *(__int64 **)(v17 + 80) == v6 && *(struct tagTHREADINFO **)(v17 + 72) == v10 )
      {
        EtwTraceInputQueueUnLocked();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)v10 + 53),
            v18,
            18,
            17,
            (__int64)&WPP_39a40ec7a48b3c5da4360439682b483d_Traceguids,
            *((_QWORD *)v10 + 53),
            *(_QWORD *)(*((_QWORD *)v10 + 53) + 72LL));
        *(_QWORD *)(*((_QWORD *)v10 + 53) + 72LL) = 0LL;
      }
      goto LABEL_30;
    }
LABEL_21:
    a3 = (_QWORD *)a6;
    if ( !a6 )
      goto LABEL_32;
    v19 = v8 ? *v8 : 0LL;
    if ( v19 != v6[2] || *((_DWORD *)v6 + 6) != -2147482652 )
      goto LABEL_32;
    LOBYTE(a2) = 11;
    v20 = HMValidateHandleNoRip(v6[5], a2, a6);
    if ( !v20 || (*(_DWORD *)(v20 + 64) & 0x200) == 0 )
      break;
    FreeDdeXact(v20);
    v9 = (struct tagMLIST *)v24;
LABEL_30:
    DelQEntry(v9, v6, 1LL);
    v6 = *(__int64 **)v9;
LABEL_58:
    if ( !v6 )
      return v7;
  }
  a3 = (_QWORD *)a6;
LABEL_32:
  if ( v8 && v8 != v12 && (v8 != (_QWORD *)1 || v12) )
  {
    while ( v12 )
    {
      a1 = *(unsigned __int8 *)(v12[5] + 31LL);
      LOBYTE(a1) = a1 & 0xC0;
      if ( (_BYTE)a1 != 64 )
        break;
      v12 = (_QWORD *)v12[13];
      if ( v8 == v12 )
      {
        v21 = 1;
        goto LABEL_41;
      }
    }
    v21 = 0;
LABEL_41:
    if ( !v21 )
      goto LABEL_57;
  }
  v22 = *((_DWORD *)v6 + 6);
  a2 = v22;
  LODWORD(a2) = v22 & 0x7FFFFFFF;
  if ( v22 + 2147482655 > 7 )
    a2 = v22;
  a1 = a4;
  if ( a4 )
  {
    if ( a4 <= a5 )
    {
      if ( (unsigned int)a2 >= a4 )
        goto LABEL_53;
    }
    else if ( (unsigned int)a2 < a5 || (unsigned int)a2 > a4 )
    {
      goto LABEL_54;
    }
LABEL_57:
    v6 = (__int64 *)*v6;
    v9 = (struct tagMLIST *)v24;
    goto LABEL_58;
  }
  if ( a5 == -1 )
    goto LABEL_54;
LABEL_53:
  if ( (unsigned int)a2 > a5 )
    goto LABEL_57;
LABEL_54:
  if ( (_DWORD)a3 )
  {
    if ( !v7 )
      v7 = v6;
    goto LABEL_57;
  }
  return v6;
}
