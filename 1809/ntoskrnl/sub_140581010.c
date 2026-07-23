/*
 * XREFs of sub_140581010 @ 0x140581010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     CcAdjustBcbDepth @ 0x1401C7D00 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x14027C480 (VslVerifyPage.c)
 */

char __fastcall sub_140581010(PKDPC Dpc, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ProcessorHistory_low; // r9
  _QWORD *v6; // r11
  __int64 v7; // r15
  char SystemArgument1; // r14
  unsigned __int64 DeferredContext; // r12
  int v10; // edi
  __int64 v11; // rbp
  _QWORD *v12; // r10
  const char *v13; // rax
  unsigned int v14; // ebx
  unsigned __int64 i; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  const char *v23; // rax
  int v24; // edx
  PKDEFERRED_ROUTINE v25; // rdi
  unsigned __int8 *v26; // r11
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned int v29; // eax
  unsigned __int64 v30; // rax
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v33; // rbx
  __int64 v34; // r15
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rdi
  NTSTATUS v37; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  PKDPC *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  PKDPC v42; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp+20h]

  KeExitRetpoline(Dpc, a2, a3, a4);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v6 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  v7 = ProcessorHistory_low;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v10) = SystemArgument1;
  v42 = Dpc;
  v11 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v6;
  v12 = (_QWORD *)v11;
  v13 = (const char *)v11;
  if ( v11 < (unsigned __int64)(ProcessorHistory_low + v11) )
  {
    do
    {
      _mm_prefetch(v13, 0);
      v13 += 64;
    }
    while ( (unsigned __int64)v13 < ProcessorHistory_low + v11 );
  }
  v14 = (unsigned int)ProcessorHistory_low >> 7;
  for ( i = DeferredContext; v14; --v14 )
  {
    v16 = 8LL;
    do
    {
      v17 = i ^ *v12;
      v18 = v12[1];
      v12 += 2;
      i = __ROL8__(__ROL8__(v17, v10) ^ v18, v10);
      --v16;
    }
    while ( v16 );
    v19 = __ROL8__(DeferredContext ^ ((unsigned __int64)v12 - v11), 17);
    v10 = ((unsigned __int8)((((v19 ^ DeferredContext ^ ((unsigned __int64)v12 - v11))
                             * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v19 ^ DeferredContext ^ ((_BYTE)v12 - v11)) ^ (unsigned __int8)v10) & 0x3F;
    if ( !v10 )
      LOBYTE(v10) = 1;
  }
  v20 = ProcessorHistory_low & 0x7F;
  if ( v20 >= 8 )
  {
    v21 = (unsigned __int64)v20 >> 3;
    do
    {
      i = __ROL8__(*v12++ ^ i, v10);
      v20 -= 8;
      --v21;
    }
    while ( v21 );
  }
  for ( ; v20; --v20 )
  {
    v22 = *(unsigned __int8 *)v12;
    v12 = (_QWORD *)((char *)v12 + 1);
    i = __ROL8__(v22 ^ i, v10);
  }
  v23 = (const char *)v6;
  if ( v6 < (_QWORD *)((char *)v6 + 12) )
  {
    do
    {
      _mm_prefetch(v23, 0);
      v23 += 64;
    }
    while ( v23 < (const char *)v6 + 12 );
  }
  v24 = 4;
  v25 = (PKDEFERRED_ROUTINE)__ROL8__(i ^ *v6, SystemArgument1);
  v26 = (unsigned __int8 *)(v6 + 1);
  do
  {
    v27 = *v26++;
    v25 = (PKDEFERRED_ROUTINE)__ROL8__(v27 ^ (unsigned __int64)v25, SystemArgument1);
    --v24;
  }
  while ( v24 );
  v28 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v29 = ExGenRandom(1);
  LOBYTE(v30) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v28, 0, v29 % 0x2710, Dpc);
  if ( v25 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v7 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v33 = v11 & 0xFFFFFFFFFFFFF000uLL;
        v34 = (v11 + v7 - 1) | 0xFFF;
        v35 = (v11 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v36 = CurrentIrql;
          v37 = VslVerifyPage(v33, 0);
          if ( v37 == -1073741267 )
            break;
LABEL_27:
          v30 = v36;
          if ( v37 < 0 )
            goto LABEL_31;
LABEL_28:
          v33 += 4096LL;
          v35 += 4096LL;
          if ( v35 == v34 )
          {
            __writecr8(v30);
            return v30;
          }
        }
        v30 = CurrentIrql;
        while ( SystemArgument1_high )
        {
          if ( CurrentIrql > 1u )
            goto LABEL_28;
          v36 = CurrentIrql;
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v37 = VslVerifyPage(v33, 0);
          v30 = CurrentIrql;
          if ( v37 != -1073741267 )
            goto LABEL_27;
        }
LABEL_31:
        __writecr8(v36);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( !CurrentPrcb->DpcRoutineActive || &v42 > DpcStack || &v42 < DpcStack - 3072 )
      DpcStack = (PKDPC *)CurrentThread->InitialStack;
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    v43 = 0xA03F5891C8B4E8A3uLL;
    CcAdjustBcbDepth(
      (unsigned int)__ROR4__(542720, 43),
      __ROL8__(0xA03F5891C8B4E8A3uLL, 184),
      0LL,
      v11,
      (unsigned int)__ROL4__(8384, 187),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x14058139BLL);
  }
  return v30;
}
