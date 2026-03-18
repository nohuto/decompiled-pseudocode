/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006FDDC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *i; // rsi
  _QWORD *v10; // rax
  ULONG_PTR v11; // r15
  __int64 v12; // r8
  ULONG64 *v13; // rdx
  ULONG64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct tagSMWP *v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  _QWORD v29[10]; // [rsp+58h] [rbp-50h] BYREF
  struct _KTHREAD *v31; // [rsp+B8h] [rbp+10h]

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 464);
    if ( v6 )
      v2 = *(_QWORD *)(v6 + 24);
  }
  if ( v2 )
  {
    v7 = BuildHwndList(*(struct tagWND **)(v2 + 88));
    v8 = v7;
    if ( v7 )
    {
      for ( i = (_QWORD *)(v7 + 32); *i != 1LL; ++i )
      {
        v10 = (_QWORD *)ValidateHwnd(*i);
        v11 = (ULONG_PTR)v10;
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
          break;
        if ( v10 )
        {
          if ( v10[2] == gptiCurrent )
          {
            v12 = v10[5];
            if ( (*(_WORD *)(v12 + 42) & 0x1000) == 0 )
            {
              if ( **(_WORD **)(v10[14] + 8LL) == *(_WORD *)(gpsi + 898LL) )
                v13 = *(_DWORD *)(v12 + 252) ? (ULONG64 *)v10[33] : *(ULONG64 **)(v12 + 296);
              else
                v13 = 0LL;
              if ( v13 )
              {
                v14 = *v13;
                if ( v14 >= MmUserProbeAddress )
                  v14 = MmUserProbeAddress;
                v15 = *(_QWORD *)(v14 + 16);
                LOBYTE(v14) = 1;
                v17 = HMValidateHandleNoSecure(v15, v14);
                if ( v17 )
                {
                  v29[0] = *(_QWORD *)(gptiCurrent + 416LL);
                  v18 = v29[0];
                  *(_QWORD *)(gptiCurrent + 416LL) = v29;
                  v29[1] = v11;
                  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
                  v31 = KeGetCurrentThread();
                  v19 = 0LL;
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v16) )
                  {
                    v22 = (__int64 *)PsGetThreadWin32Thread(v31);
                    if ( v22 )
                      v19 = *v22;
                  }
                  v27 = *(_QWORD *)(v19 + 416);
                  *(_QWORD *)(v19 + 416) = &v27;
                  v28 = v17;
                  _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
                  do
                  {
                    if ( v17 == v2 )
                      break;
                    v21 = *(_QWORD *)v17;
                    v20 = a1;
                    v23 = *((_QWORD *)a1 + 5);
                    v24 = *((_DWORD *)a1 + 7);
                    while ( --v24 >= 0 )
                    {
                      if ( v21 == *(_QWORD *)v23 )
                      {
                        if ( (~*(_BYTE *)(v23 + 32) & 3) != 0 )
                          xxxSendMessage(v11);
                        break;
                      }
                      v23 += 168LL;
                    }
                    if ( v24 >= 0 )
                      break;
                    v17 = *(_QWORD *)(v17 + 80);
                    v21 = v28;
                    v28 = v17;
                    if ( v17 )
                      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
                    if ( v21 )
                    {
                      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
                        HMUnlockObjectInternal(v21);
                    }
                  }
                  while ( v17 );
                  ThreadUnlock1(v21, v20);
                  ThreadUnlock1(v26, v25);
                }
              }
            }
          }
        }
      }
      FreeHwndList(v8);
    }
  }
}
