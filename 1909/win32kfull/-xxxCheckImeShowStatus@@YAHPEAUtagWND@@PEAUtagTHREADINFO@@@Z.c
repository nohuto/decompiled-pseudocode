/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00D98A8
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00D9870 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E44EC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
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
  __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // rsi
  ULONG64 *v17; // rsi
  char v18; // r14
  ULONG64 v19; // rsi
  ULONG64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  PRKPROCESS *v24; // [rsp+A0h] [rbp+18h]

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
      v14 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v10 * LODWORD(gSharedInfo[2]);
      v7 = (PRKPROCESS *)HMPkheFromPhe(v14);
      v24 = v7;
      v15 = v10 >> 16;
      if ( (_WORD)v15 != *(_WORD *)(v14 + 26) && (_WORD)v15 != 0xFFFF )
      {
        if ( (_WORD)v15 || !PsGetCurrentProcessWow64Process(v7) )
          goto LABEL_17;
        v7 = v24;
      }
      if ( (*(_BYTE *)(v14 + 25) & 1) == 0 && *(_BYTE *)(v14 + 24) == 1 )
        v11 = *v7;
    }
LABEL_17:
    if ( v11 && a1 != v11 )
    {
      v6 = **(unsigned __int16 **)(*((_QWORD *)v11 + 17) + 8LL);
      v7 = (PRKPROCESS *)gpsi;
      if ( (_WORD)v6 == *(_WORD *)(gpsi + 898LL) )
      {
        v16 = *((_QWORD *)v11 + 5);
        v17 = *(_DWORD *)(v16 + 252) ? (ULONG64 *)*((_QWORD *)v11 + 35) : *(ULONG64 **)(v16 + 296);
      }
      else
      {
        v17 = 0LL;
      }
      if ( v17 && *(char *)(*((_QWORD *)v11 + 5) + 20LL) >= 0 && (!a2 || a2 == *((struct tagTHREADINFO **)v11 + 2)) )
      {
        v18 = 0;
        v7 = *(PRKPROCESS **)(*((_QWORD *)v11 + 2) + 416LL);
        if ( v7 != *(PRKPROCESS **)(gptiCurrent + 416LL) )
        {
          KeAttachProcess(*v7);
          v18 = 1;
        }
        v19 = *v17;
        if ( v19 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( v18 )
            KeDetachProcess();
        }
        else
        {
          v7 = (PRKPROCESS *)MmUserProbeAddress;
          v20 = v19;
          if ( v19 >= MmUserProbeAddress )
            v20 = MmUserProbeAddress;
          if ( (*(_DWORD *)(v20 + 44) & 1) != 0 )
          {
            LOBYTE(v6) = 1;
            v21 = HMValidateHandleNoSecure(*(_QWORD *)(v19 + 16), v6, v13);
            if ( v21 )
              *(_DWORD *)(v19 + 44) &= ~1u;
          }
          else
          {
            v21 = 0LL;
          }
          if ( v18 )
            KeDetachProcess();
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 16);
            if ( v22 )
            {
              if ( (*(_DWORD *)(v22 + 480) & 1) == 0 )
                PostMessage(v21, 642LL, 1LL);
            }
          }
        }
      }
    }
  }
  FreeHwndList(v8);
  return 1;
}
