/*
 * XREFs of xxxInternalEnumWindow @ 0x1C005A814
 * Callers:
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01AA8A0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxTurnOffCompositing @ 0x1C01B1ECC (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C01FA014 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        char a4)
{
  struct tagBWL *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagBWL *v8; // rbp
  _QWORD *v9; // rdi
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rbx
  struct _KTHREAD *v19; // r14
  __int64 v20; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct tagBWL *v25; // [rsp+20h] [rbp-48h]
  _QWORD v26[3]; // [rsp+28h] [rbp-40h] BYREF

  result = BuildHwndList(a1, a4, 0LL);
  v25 = result;
  v8 = result;
  if ( result )
  {
    v9 = (_QWORD *)((char *)result + 32);
    v10 = 1;
    v11 = *((_QWORD *)result + 4);
    if ( v11 != 1 )
    {
      do
      {
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
          PsGetThreadWin32Thread(CurrentThread);
        v14 = (unsigned __int16)v11;
        v7 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
        {
          v15 = v11 >> 16;
          v6 = gSharedInfo[1];
          v16 = v6 + (unsigned int)(v14 * LODWORD(gSharedInfo[2]));
          v17 = 3 * ((__int64)(unsigned int)(v14 * LODWORD(gSharedInfo[2])) >> 5);
          if ( ((_WORD)v15 == *(_WORD *)(v16 + 26)
             || (_WORD)v15 == 0xFFFF
             || !(_WORD)v15 && PsGetCurrentProcessWow64Process(gpsi, v6, v14, v13))
            && (*(_BYTE *)(v16 + 25) & 1) == 0
            && *(_BYTE *)(v16 + 24) == 1 )
          {
            v18 = *(_QWORD *)(gpKernelHandleTable + 8 * v17);
            if ( v18 )
            {
              v19 = KeGetCurrentThread();
              v20 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v19);
                if ( ThreadWin32Thread )
                  v20 = *ThreadWin32Thread;
              }
              v26[0] = *(_QWORD *)(v20 + 408);
              *(_QWORD *)(v20 + 408) = v26;
              v26[1] = v18;
              _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
              v10 = a2(v18, a3);
              ThreadUnlock1(v23, v22, v24);
              if ( !v10 )
                break;
            }
          }
        }
        v11 = *++v9;
      }
      while ( *v9 != 1LL );
      v8 = v25;
    }
    FreeHwndList(v8);
    return (struct tagBWL *)v10;
  }
  return result;
}
