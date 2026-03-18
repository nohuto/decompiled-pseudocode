/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FDB68
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00FDB30 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E466C (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(PRKPROCESS a1, struct tagTHREADINFO *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  PRKPROCESS *v7; // rcx
  struct tagBWL *v8; // r13
  unsigned __int64 *i; // r15
  unsigned __int64 v10; // rsi
  PRKPROCESS v11; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  ULONG64 *v18; // rsi
  char v19; // r14
  ULONG64 v20; // rsi
  ULONG64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  PRKPROCESS *v25; // [rsp+A0h] [rbp+18h]

  v3 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL));
  v8 = (struct tagBWL *)v5;
  if ( !v5 )
    return v3;
  for ( i = (unsigned __int64 *)(v5 + 32); ; ++i )
  {
    v10 = *i;
    if ( *i == 1 )
      break;
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
      PsGetThreadWin32Thread(CurrentThread);
    LODWORD(v6) = (unsigned __int16)v10;
    v7 = (PRKPROCESS *)gpsi;
    if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
    {
      v15 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v10 * LODWORD(gSharedInfo[2]);
      v7 = (PRKPROCESS *)HMPkheFromPhe(v15);
      v25 = v7;
      v16 = v10 >> 16;
      if ( (_WORD)v16 != *(_WORD *)(v15 + 26) && (_WORD)v16 != 0xFFFF )
      {
        if ( (_WORD)v16 || !PsGetCurrentProcessWow64Process(v7) )
          goto LABEL_17;
        v7 = v25;
      }
      if ( (*(_BYTE *)(v15 + 25) & 1) == 0 && *(_BYTE *)(v15 + 24) == 1 )
        v11 = *v7;
    }
LABEL_17:
    if ( v11 && a1 != v11 )
    {
      v6 = **(unsigned __int16 **)(*((_QWORD *)v11 + 17) + 8LL);
      v7 = (PRKPROCESS *)gpsi;
      if ( (_WORD)v6 == *(_WORD *)(gpsi + 898LL) )
      {
        v17 = *((_QWORD *)v11 + 5);
        v18 = *(_DWORD *)(v17 + 252) ? (ULONG64 *)*((_QWORD *)v11 + 35) : *(ULONG64 **)(v17 + 296);
      }
      else
      {
        v18 = 0LL;
      }
      if ( v18 && *(char *)(*((_QWORD *)v11 + 5) + 20LL) >= 0 && (!a2 || a2 == *((struct tagTHREADINFO **)v11 + 2)) )
      {
        v19 = 0;
        v7 = *(PRKPROCESS **)(*((_QWORD *)v11 + 2) + 416LL);
        if ( v7 != *(PRKPROCESS **)(gptiCurrent + 416LL) )
        {
          KeAttachProcess(*v7);
          v19 = 1;
        }
        v20 = *v18;
        if ( v20 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( v19 )
            KeDetachProcess();
        }
        else
        {
          v7 = (PRKPROCESS *)MmUserProbeAddress;
          v21 = v20;
          if ( v20 >= MmUserProbeAddress )
            v21 = MmUserProbeAddress;
          if ( (*(_DWORD *)(v21 + 44) & 1) != 0 )
          {
            LOBYTE(v6) = 1;
            v22 = HMValidateHandleNoSecure(*(_QWORD *)(v20 + 16), v6, v13, v14);
            if ( v22 )
              *(_DWORD *)(v20 + 44) &= ~1u;
          }
          else
          {
            v22 = 0LL;
          }
          if ( v19 )
            KeDetachProcess();
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 16);
            if ( v23 )
            {
              if ( (*(_DWORD *)(v23 + 480) & 1) == 0 )
                PostMessage(v22, 642, 1, 0);
            }
          }
        }
      }
    }
  }
  FreeHwndList(v8);
  return 1;
}
