/*
 * XREFs of RaidAdapterResetBus @ 0x1C0034ACC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0006D64 (RaidAdapterDeviceControlIrp.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000F310 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0045080 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0046C9C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C0047634 (RaidUnitHierarchicalReset.c)
 *     RaidUnitRequestTimeout @ 0x1C0047E58 (RaidUnitRequestTimeout.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C00070AC (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C00070DC (RaidAdapterAcquireStartIoLock.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     RaidPauseAdapterQueue @ 0x1C0017310 (RaidPauseAdapterQueue.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterSetPauseTimer @ 0x1C00360D4 (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C00372B4 (RaidResumeAndRestartAdapterQueues.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  int v5; // r15d
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r12
  struct _SLIST_ENTRY *v9; // rax
  int v10; // r14d
  ULONGLONG UnbiasedInterruptTime; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // r15d
  ULONGLONG v16; // r12
  int v17; // r14d
  unsigned int v18; // edi
  PSLIST_ENTRY v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r9
  const struct _TlgProvider_t *v22; // rcx
  KIRQL v23; // di
  const GUID *v24; // r8
  const GUID *v25; // r9
  int v26; // eax
  unsigned __int8 v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh]
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  ULONGLONG v34; // [rsp+60h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+68h] [rbp-98h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  char *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  unsigned int *v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  ULONGLONG *v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  int *v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  int *v56; // [rsp+110h] [rbp+10h]
  int v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+11Ch] [rbp+1Ch]

  memset(&v35, 0, sizeof(v35));
  SListHead = 0uLL;
  if ( a2 >= *(_BYTE *)(a1 + 376) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 252), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4752)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *(_DWORD *)(a1 + 4744) );
  }
  RaidAdapterAcquireStartIoLock(a1, &v35);
  v10 = *(_DWORD *)(a1 + 960);
  *(_DWORD *)(a1 + 5144) = 0;
  v28 = v10;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( (qword_1C00612B0 & 0x400) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 296),
      11,
      *(_QWORD *)(a1 + 296),
      *(unsigned int *)(*(_QWORD *)(a1 + 296) + 56LL),
      a2,
      0LL,
      0LL);
  v12 = *(_QWORD *)(a1 + 528);
  v13 = *(_QWORD *)(a1 + 536);
  *(_BYTE *)(a1 + 544) |= 2u;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 40))(v13 + 16, a2);
  *(_BYTE *)(a1 + 544) &= ~2u;
  v15 = v14 == 0 ? 0xC0000001 : 0;
  v16 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
  v29 = *(_DWORD *)(a1 + 5144);
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v17 = 0;
    v18 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v19 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v19 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)(HIDWORD(v19[1].Next) % v18) << 6)),
          v19);
        ++v17;
      }
    }
    while ( v17 < *(_DWORD *)(a1 + 4744) );
    v10 = v28;
  }
  RaidAdapterReleaseStartIoLock(a1, &v35);
  v20 = *(_DWORD *)(a1 + 520);
  if ( v20 )
  {
    v21 = v20 / 0xF4240 + 1;
    if ( v20 == 1000000 * (v20 / 0xF4240) )
      v21 = v20 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4216, a1 + 4280, v21);
  }
  else
  {
    v23 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v23);
  }
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    if ( TlgKeywordOn(v22, 0x400000000000uLL) )
    {
      v26 = *(_DWORD *)(a1 + 56);
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v58 = 0;
      v30 = v26;
      v33 = v29;
      v38 = a1 + 5128;
      v41 = &v30;
      v44 = (char *)&v27;
      v47 = &v31;
      v50 = &v34;
      v53 = &v32;
      v56 = &v33;
      v27 = a2;
      v31 = v15;
      v34 = v16;
      v32 = v10;
      v39 = 16;
      v42 = 4;
      v45 = 1;
      v48 = 4;
      v51 = 8;
      v54 = 4;
      v57 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C0055AE8, v24, v25, 9u, &pData);
    }
  }
  *(_DWORD *)(a1 + 252) = 0;
  return v15;
}
