/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006E138
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct tagBWL *v9; // r12
  _QWORD *i; // rdi
  _QWORD *v11; // rax
  ULONG_PTR v12; // r14
  __int64 v13; // rdx
  ULONG64 *v14; // rdx
  ULONG64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  struct tagSMWP *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // esi
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  __int64 v35; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR v36; // [rsp+58h] [rbp-50h]
  __int64 v37; // [rsp+60h] [rbp-48h]
  struct _KTHREAD *v39; // [rsp+B8h] [rbp+10h]

  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 456);
    if ( v7 )
      v3 = *(_QWORD *)(v7 + 24);
  }
  if ( v3 )
  {
    v8 = BuildHwndList(*(struct tagWND **)(v3 + 112));
    v9 = (struct tagBWL *)v8;
    if ( v8 )
    {
      for ( i = (_QWORD *)(v8 + 32); *i != 1LL; ++i )
      {
        v11 = (_QWORD *)ValidateHwnd(*i);
        v12 = (ULONG_PTR)v11;
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
          break;
        if ( v11 && v11[2] == gptiCurrent )
        {
          if ( **(_WORD **)(v11[17] + 8LL) == *(_WORD *)(gpsi + 898LL) )
          {
            v13 = v11[5];
            v14 = *(_DWORD *)(v13 + 252) ? (ULONG64 *)v11[35] : *(ULONG64 **)(v13 + 296);
          }
          else
          {
            v14 = 0LL;
          }
          v35 = 0LL;
          v36 = 0LL;
          v37 = 0LL;
          v32 = 0LL;
          v33 = 0LL;
          v34 = 0LL;
          if ( v14 )
          {
            v15 = *v14;
            if ( v15 >= MmUserProbeAddress )
              v15 = MmUserProbeAddress;
            v16 = *(_QWORD *)(v15 + 16);
            LOBYTE(v15) = 1;
            v17 = (_QWORD *)HMValidateHandleNoSecure(v16, v15);
            if ( v17 )
            {
              v35 = *(_QWORD *)(gptiCurrent + 408LL);
              *(_QWORD *)(gptiCurrent + 408LL) = &v35;
              v36 = v12;
              HMLockObject(v12);
              v39 = KeGetCurrentThread();
              v18 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21) )
              {
                v22 = (__int64 *)PsGetThreadWin32Thread(v39);
                if ( v22 )
                  v18 = *v22;
              }
              v32 = *(_QWORD *)(v18 + 408);
              *(_QWORD *)(v18 + 408) = &v32;
              v33 = v17;
              HMLockObject(v17);
              do
              {
                if ( v17 == (_QWORD *)v3 )
                  break;
                v24 = *v17;
                v23 = a1;
                v26 = *((_QWORD *)a1 + 5);
                v27 = *((_DWORD *)a1 + 7);
                while ( --v27 >= 0 )
                {
                  if ( v24 == *(_QWORD *)v26 )
                  {
                    if ( (~*(_BYTE *)(v26 + 32) & 3) != 0 )
                      xxxSendMessage(v12);
                    break;
                  }
                  v26 += 168LL;
                }
                if ( v27 >= 0 )
                  break;
                v17 = (_QWORD *)v17[13];
                v28 = v33;
                v33 = v17;
                if ( v17 )
                  HMLockObject(v17);
                if ( v28 )
                  HMUnlockObject(v28);
              }
              while ( v17 );
              ThreadUnlock1(v24, v23, v25);
              ThreadUnlock1(v30, v29, v31);
            }
          }
        }
      }
      FreeHwndList(v9);
    }
  }
}
