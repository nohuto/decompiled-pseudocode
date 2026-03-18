/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DA348
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00DA310 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01AC7CC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagWND *v2; // r14
  unsigned int v3; // edi
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  struct tagBWL *v8; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v10; // rsi
  struct tagWND *v11; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  bool v18; // zf
  __int64 v19; // rsi
  ULONG64 *v20; // rsi
  PRKPROCESS *v21; // r14
  PRKPROCESS *v22; // r15
  ULONG64 v23; // rsi
  ULONG64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax

  v2 = a1;
  v3 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(_QWORD **)(*((_QWORD *)a1 + 10) + 88LL), 2, 0LL);
  v8 = v5;
  if ( !v5 )
    return v3;
  for ( i = (unsigned __int64 *)((char *)v5 + 32); ; ++i )
  {
    v10 = *i;
    if ( *i == 1 )
      break;
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
      PsGetThreadWin32Thread(CurrentThread);
    v14 = (unsigned __int16)v10;
    v7 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
    {
      v6 = gSharedInfo[1];
      v15 = v6 + (unsigned int)(unsigned __int16)v10 * LODWORD(gSharedInfo[2]);
      v16 = 3 * ((__int64)((unsigned int)(unsigned __int16)v10 * LODWORD(gSharedInfo[2])) >> 5);
      v7 = gpKernelHandleTable;
      v17 = v10 >> 16;
      if ( (_WORD)v17 != *(_WORD *)(v15 + 26) && (_WORD)v17 != 0xFFFF )
      {
        if ( (_WORD)v17 || !PsGetCurrentProcessWow64Process(gpKernelHandleTable, v6, v14, v13) )
        {
LABEL_17:
          v2 = a1;
          goto LABEL_18;
        }
        v7 = gpKernelHandleTable;
      }
      if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
        goto LABEL_17;
      v18 = *(_BYTE *)(v15 + 24) == 1;
      v2 = a1;
      if ( v18 )
        v11 = *(struct tagWND **)(v7 + 8 * v16);
    }
LABEL_18:
    if ( v11 && v2 != v11 )
    {
      v6 = **(unsigned __int16 **)(*((_QWORD *)v11 + 14) + 8LL);
      v7 = gpsi;
      if ( (_WORD)v6 == *(_WORD *)(gpsi + 898LL) )
      {
        v19 = *((_QWORD *)v11 + 5);
        v20 = *(_DWORD *)(v19 + 252) ? (ULONG64 *)*((_QWORD *)v11 + 34) : *(ULONG64 **)(v19 + 296);
      }
      else
      {
        v20 = 0LL;
      }
      if ( v20 && *(char *)(*((_QWORD *)v11 + 5) + 20LL) >= 0 && (!a2 || a2 == *((struct tagTHREADINFO **)v11 + 2)) )
      {
        v21 = *(PRKPROCESS **)(*((_QWORD *)v11 + 2) + 416LL);
        v22 = *(PRKPROCESS **)(gptiCurrent + 416LL);
        if ( v21 != v22 )
          KeAttachProcess(*v21);
        v23 = *v20;
        if ( v23 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( v21 != v22 )
            KeDetachProcess();
        }
        else
        {
          v7 = MmUserProbeAddress;
          v24 = v23;
          if ( v23 >= MmUserProbeAddress )
            v24 = MmUserProbeAddress;
          if ( (*(_DWORD *)(v24 + 44) & 1) != 0 )
          {
            LOBYTE(v6) = 1;
            v25 = HMValidateHandleNoSecure(*(_QWORD *)(v23 + 16), v6);
            if ( v25 )
              *(_DWORD *)(v23 + 44) &= ~1u;
          }
          else
          {
            v25 = 0LL;
          }
          if ( v21 != v22 )
            KeDetachProcess();
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 16);
            if ( v26 )
            {
              if ( (*(_DWORD *)(v26 + 480) & 1) == 0 )
                PostMessage((struct tagWND *)v25, 0x282u, 1uLL, 0LL);
            }
          }
        }
      }
    }
    v2 = a1;
  }
  FreeHwndList(v8);
  return 1;
}
