/*
 * XREFs of CcBcbProfiler @ 0x14019F460
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     CcAdjustBcbDepth @ 0x1401C7D00 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x14027C480 (VslVerifyPage.c)
 */

void __fastcall CcBcbProfiler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // r12
  char v8; // r15
  __int64 v9; // r13
  int v10; // ebx
  unsigned __int64 v11; // r14
  _QWORD *v12; // r9
  const char *v13; // rax
  __int64 v14; // rdi
  unsigned int i; // r11d
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rax
  __int64 v23; // rdi
  int v24; // edx
  unsigned __int8 *v25; // r10
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned int v28; // eax
  int v29; // r13d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v31; // rbx
  __int64 v32; // r12
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rdi
  int v35; // ecx
  unsigned __int64 v36; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  _QWORD v40[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v41; // [rsp+58h] [rbp-30h]

  KeExitRetpoline(a1, a2, a3, a4);
  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v5 = *(unsigned int *)(a2 + 144);
    v6 = *(_QWORD **)(a2 + 128);
    v7 = v5;
    v8 = *(_BYTE *)(a2 + 168);
    v9 = *(_QWORD *)(a2 + 160);
    LOBYTE(v10) = v8;
    v40[0] = a2;
    v11 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v6;
    v12 = (_QWORD *)v11;
    v13 = (const char *)v11;
    if ( v11 < v5 + v11 )
    {
      do
      {
        _mm_prefetch(v13, 0);
        v13 += 64;
      }
      while ( (unsigned __int64)v13 < v5 + v11 );
    }
    v14 = v9;
    for ( i = (unsigned int)v5 >> 7; i; --i )
    {
      v16 = 8LL;
      do
      {
        v17 = v12[1] ^ __ROL8__(*v12 ^ v14, v10);
        v12 += 2;
        v14 = __ROL8__(v17, v10);
        --v16;
      }
      while ( v16 );
      v18 = __ROL8__(v9 ^ ((unsigned __int64)v12 - v11), 17) ^ v9 ^ ((unsigned __int64)v12 - v11);
      v41 = (v18 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v10 = ((unsigned __int8)(v41 ^ v18) ^ (unsigned __int8)v10) & 0x3F;
      if ( !v10 )
        LOBYTE(v10) = 1;
    }
    v19 = v5 & 0x7F;
    if ( v19 >= 8 )
    {
      v20 = (unsigned __int64)v19 >> 3;
      do
      {
        v14 = __ROL8__(*v12++ ^ v14, v10);
        v19 -= 8;
        --v20;
      }
      while ( v20 );
    }
    for ( ; v19; --v19 )
    {
      v21 = *(unsigned __int8 *)v12;
      v12 = (_QWORD *)((char *)v12 + 1);
      v14 = __ROL8__(v21 ^ v14, v10);
    }
    v22 = (const char *)v6;
    if ( v6 < (_QWORD *)((char *)v6 + 12) )
    {
      do
      {
        _mm_prefetch(v22, 0);
        v22 += 64;
      }
      while ( v22 < (const char *)v6 + 12 );
    }
    v23 = __ROL8__(*v6 ^ v14, v8);
    v24 = 4;
    v25 = (unsigned __int8 *)(v6 + 1);
    do
    {
      v26 = *v25++;
      v23 = __ROL8__(v26 ^ v23, v8);
      --v24;
    }
    while ( v24 );
    v27 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
    v28 = ExGenRandom(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v27, 0, v28 % 0x2710, (PKDPC)a2);
    if ( v23 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v29 = *(_DWORD *)(a2 + 172);
        if ( v7 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v31 = v11 & 0xFFFFFFFFFFFFF000uLL;
          v32 = (v11 + v7 - 1) | 0xFFF;
          v33 = (v11 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v34 = CurrentIrql;
            v35 = VslVerifyPage(v31, 0LL);
            if ( v35 == -1073741267 )
              break;
LABEL_30:
            v36 = v34;
            if ( v35 < 0 )
              goto LABEL_33;
LABEL_31:
            v31 += 4096LL;
            v33 += 4096LL;
            if ( v33 == v32 )
            {
              __writecr8(v36);
              return;
            }
          }
          v36 = CurrentIrql;
          while ( v29 )
          {
            if ( CurrentIrql > 1u )
              goto LABEL_31;
            v34 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v35 = VslVerifyPage(v31, 0LL);
            v36 = CurrentIrql;
            if ( v35 != -1073741267 )
              goto LABEL_30;
          }
LABEL_33:
          __writecr8(v34);
        }
      }
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      DpcStack = CurrentPrcb->DpcStack;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( !CurrentPrcb->DpcRoutineActive || v40 > DpcStack || v40 < DpcStack - 3072 )
        DpcStack = CurrentThread->InitialStack;
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
      v40[1] = 0xA03F5891C8B4E8A3uLL;
      CcAdjustBcbDepth(
        __ROR4__(542720, 43),
        __ROL8__(0xA03F5891C8B4E8A3uLL, 184),
        0,
        v11,
        (unsigned int)__ROL4__(8384, 187),
        (__int64)KeBugCheckEx,
        (__int64)DpcStack);
      JUMPOUT(0x14019F7F8LL);
    }
  }
}
