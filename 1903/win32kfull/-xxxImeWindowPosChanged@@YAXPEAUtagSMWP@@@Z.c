/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00CCA68
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct tagBWL *v10; // r12
  _QWORD *i; // rdi
  _QWORD *v12; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rdx
  ULONG64 *v15; // rdx
  ULONG64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rax
  struct tagSMWP *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // esi
  _QWORD *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR v38; // [rsp+58h] [rbp-50h]
  __int64 v39; // [rsp+60h] [rbp-48h]
  struct _KTHREAD *v41; // [rsp+B8h] [rbp+10h]

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 456);
    if ( v8 )
      v4 = *(_QWORD *)(v8 + 24);
  }
  if ( v4 )
  {
    v9 = BuildHwndList(*(struct tagWND **)(v4 + 112));
    v10 = (struct tagBWL *)v9;
    if ( v9 )
    {
      for ( i = (_QWORD *)(v9 + 32); *i != 1LL; ++i )
      {
        v12 = (_QWORD *)ValidateHwnd(*i);
        v13 = (ULONG_PTR)v12;
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
          break;
        if ( v12 && v12[2] == gptiCurrent )
        {
          if ( **(_WORD **)(v12[17] + 8LL) == *(_WORD *)(gpsi + 898LL) )
          {
            v14 = v12[5];
            v15 = *(_DWORD *)(v14 + 252) ? (ULONG64 *)v12[35] : *(ULONG64 **)(v14 + 296);
          }
          else
          {
            v15 = 0LL;
          }
          v37 = 0LL;
          v38 = 0LL;
          v39 = 0LL;
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0LL;
          if ( v15 )
          {
            v16 = *v15;
            if ( v16 >= MmUserProbeAddress )
              v16 = MmUserProbeAddress;
            v17 = *(_QWORD *)(v16 + 16);
            LOBYTE(v16) = 1;
            v18 = (_QWORD *)HMValidateHandleNoSecure(v17, v16);
            if ( v18 )
            {
              v37 = *(_QWORD *)(gptiCurrent + 408LL);
              *(_QWORD *)(gptiCurrent + 408LL) = &v37;
              v38 = v13;
              HMLockObject(v13);
              v41 = KeGetCurrentThread();
              v19 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20, v22, v23) )
              {
                v24 = (__int64 *)PsGetThreadWin32Thread(v41);
                if ( v24 )
                  v19 = *v24;
              }
              v34 = *(_QWORD *)(v19 + 408);
              *(_QWORD *)(v19 + 408) = &v34;
              v35 = v18;
              HMLockObject(v18);
              do
              {
                if ( v18 == (_QWORD *)v4 )
                  break;
                v26 = *v18;
                v25 = a1;
                v28 = *((_QWORD *)a1 + 5);
                v29 = *((_DWORD *)a1 + 7);
                while ( --v29 >= 0 )
                {
                  if ( v26 == *(_QWORD *)v28 )
                  {
                    if ( (~*(_BYTE *)(v28 + 32) & 3) != 0 )
                      xxxSendMessage(v13);
                    break;
                  }
                  v28 += 168LL;
                }
                if ( v29 >= 0 )
                  break;
                v18 = (_QWORD *)v18[13];
                v30 = v35;
                v35 = v18;
                if ( v18 )
                  HMLockObject(v18);
                if ( v30 )
                  HMUnlockObject(v30);
              }
              while ( v18 );
              ThreadUnlock1(v26, v25, v27);
              ThreadUnlock1(v32, v31, v33);
            }
          }
        }
      }
      FreeHwndList(v10);
    }
  }
}
