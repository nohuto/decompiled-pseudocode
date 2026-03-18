/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2738
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00F2700 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01CF9E0 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  unsigned int v3; // edi
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  struct tagBWL *v8; // r13
  unsigned __int64 *i; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // r14
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  ULONG64 *v16; // rsi
  char v17; // r14
  ULONG64 v18; // rsi
  ULONG64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  ULONG64 v23; // [rsp+B0h] [rbp+18h]

  v3 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 10) + 88LL), 2, 0LL);
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
    v7 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
    {
      v13 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v10 * LODWORD(gSharedInfo[2]);
      v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)v10 * LODWORD(gSharedInfo[2])) >> 5);
      v23 = v7;
      v6 = gpKernelHandleTable;
      v14 = v10 >> 16;
      if ( (_WORD)v14 != *(_WORD *)(v13 + 26) && (_WORD)v14 != 0xFFFF )
      {
        if ( (_WORD)v14 || !PsGetCurrentProcessWow64Process(v7) )
          goto LABEL_17;
        v7 = v23;
        v6 = gpKernelHandleTable;
      }
      if ( (*(_BYTE *)(v13 + 25) & 1) == 0 && *(_BYTE *)(v13 + 24) == 1 )
        v11 = *(_QWORD *)(v6 + 8 * v7);
    }
LABEL_17:
    if ( v11 )
    {
      if ( a1 != (struct tagWND *)v11 )
      {
        v15 = *(_QWORD *)(v11 + 40);
        v7 = 4096LL;
        if ( (*(_WORD *)(v15 + 42) & 0x1000) == 0 )
        {
          v6 = **(unsigned __int16 **)(*(_QWORD *)(v11 + 112) + 8LL);
          v7 = gpsi;
          if ( (_WORD)v6 == *(_WORD *)(gpsi + 898LL) )
            v16 = *(_DWORD *)(v15 + 252) ? *(ULONG64 **)(v11 + 264) : *(ULONG64 **)(v15 + 296);
          else
            v16 = 0LL;
          if ( v16 && *(char *)(v15 + 20) >= 0 && (!a2 || a2 == *(struct tagTHREADINFO **)(v11 + 16)) )
          {
            v17 = 0;
            v7 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
            if ( v7 != *(_QWORD *)(gptiCurrent + 424LL) )
            {
              KeAttachProcess(*(PRKPROCESS *)v7);
              v17 = 1;
            }
            v18 = *v16;
            if ( v18 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( v17 )
                KeDetachProcess();
            }
            else
            {
              v7 = MmUserProbeAddress;
              v19 = v18;
              if ( v18 >= MmUserProbeAddress )
                v19 = MmUserProbeAddress;
              if ( (*(_DWORD *)(v19 + 44) & 1) != 0 )
              {
                LOBYTE(v6) = 1;
                v20 = HMValidateHandleNoSecure(*(_QWORD *)(v18 + 16), v6);
                if ( v20 )
                  *(_DWORD *)(v18 + 44) &= ~1u;
              }
              else
              {
                v20 = 0LL;
              }
              if ( v17 )
                KeDetachProcess();
              if ( v20 )
              {
                v21 = *(_QWORD *)(v20 + 16);
                if ( v21 )
                {
                  if ( (*(_DWORD *)(v21 + 488) & 1) == 0 )
                    PostMessage((struct tagWND *)v20, 0x282u, 1uLL, 0LL);
                }
              }
            }
          }
        }
      }
    }
  }
  FreeHwndList(v8);
  return 1;
}
