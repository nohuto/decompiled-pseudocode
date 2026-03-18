/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0028CEC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *i; // r14
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rsi
  __int64 v12; // rdx
  ULONG64 *v13; // rdx
  ULONG64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct tagSMWP *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+48h] [rbp-60h]
  _QWORD v31[10]; // [rsp+58h] [rbp-50h] BYREF
  struct _KTHREAD *v33; // [rsp+B8h] [rbp+10h]

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
    v6 = *(_QWORD *)(v4 + 456);
    if ( v6 )
      v2 = *(_QWORD *)(v6 + 24);
  }
  if ( v2 )
  {
    v7 = BuildHwndList(*(_QWORD *)(v2 + 88), 2LL, gptiCurrent);
    v8 = v7;
    if ( v7 )
    {
      for ( i = (_QWORD *)(v7 + 32); *i != 1LL; ++i )
      {
        v10 = (volatile signed __int32 *)ValidateHwnd(*i);
        v11 = v10;
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
          break;
        if ( v10 && *((_QWORD *)v10 + 2) == gptiCurrent )
        {
          if ( **(_WORD **)(*((_QWORD *)v10 + 14) + 8LL) == *(_WORD *)(gpsi + 898LL) )
          {
            v12 = *((_QWORD *)v10 + 5);
            v13 = *(_DWORD *)(v12 + 252) ? (ULONG64 *)*((_QWORD *)v10 + 34) : *(ULONG64 **)(v12 + 296);
          }
          else
          {
            v13 = 0LL;
          }
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
              v31[0] = *(_QWORD *)(gptiCurrent + 408LL);
              v18 = v31[0];
              *(_QWORD *)(gptiCurrent + 408LL) = v31;
              v31[1] = v11;
              _InterlockedIncrement(v11 + 2);
              v33 = KeGetCurrentThread();
              v19 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v16) )
              {
                v23 = (__int64 *)PsGetThreadWin32Thread(v33);
                if ( v23 )
                  v19 = *v23;
              }
              v29 = *(_QWORD *)(v19 + 408);
              *(_QWORD *)(v19 + 408) = &v29;
              v30 = v17;
              _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
              do
              {
                if ( v17 == v2 )
                  break;
                v21 = *(_QWORD *)v17;
                v20 = a1;
                v24 = *((_QWORD *)a1 + 5);
                v25 = *((_DWORD *)a1 + 7);
                while ( --v25 >= 0 )
                {
                  if ( v21 == *(_QWORD *)v24 )
                  {
                    if ( (~*(_BYTE *)(v24 + 32) & 3) != 0 )
                      xxxSendMessage(v11, 647LL, 6LL, 0LL);
                    break;
                  }
                  v24 += 168LL;
                }
                if ( v25 >= 0 )
                  break;
                v17 = *(_QWORD *)(v17 + 80);
                v21 = v30;
                v30 = v17;
                if ( v17 )
                  _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
                if ( v21 )
                {
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
                    HMUnlockObjectInternal(v21, v20, v22);
                }
              }
              while ( v17 );
              ThreadUnlock1(v21, v20, v22);
              ThreadUnlock1(v27, v26, v28);
            }
          }
        }
      }
      FreeHwndList(v8);
    }
  }
}
