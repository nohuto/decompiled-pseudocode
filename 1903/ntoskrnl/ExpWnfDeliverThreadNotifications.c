/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x140640828
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1406406D0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140641174 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfReadStateData @ 0x1406428CC (ExpWnfReadStateData.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  signed __int64 *v5; // r15
  PRTL_BALANCED_NODE v6; // rsi
  unsigned __int64 *v7; // r14
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rsi
  int *v13; // rdx
  unsigned int v14; // r13d
  _QWORD *v15; // rcx
  _OWORD *v16; // rax
  signed __int64 v17; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  volatile signed __int64 *v23; // r14
  signed __int64 v24; // rax
  int v25; // [rsp+34h] [rbp-C4h]
  unsigned int v26; // [rsp+38h] [rbp-C0h]
  int v27; // [rsp+3Ch] [rbp-BCh] BYREF
  __int64 v28; // [rsp+40h] [rbp-B8h]
  int *v29; // [rsp+48h] [rbp-B0h]
  _DWORD *v30; // [rsp+50h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-98h]
  unsigned __int64 *v32; // [rsp+68h] [rbp-90h]
  _QWORD *v33; // [rsp+70h] [rbp-88h]
  _QWORD *v34; // [rsp+80h] [rbp-78h]
  __int64 v35; // [rsp+88h] [rbp-70h]
  signed __int64 v37; // [rsp+98h] [rbp-60h]
  __int64 v38; // [rsp+A0h] [rbp-58h]
  signed __int64 v39; // [rsp+A8h] [rbp-50h]
  signed __int64 v40; // [rsp+B0h] [rbp-48h]
  int v43; // [rsp+110h] [rbp+18h]
  int v44; // [rsp+118h] [rbp+20h] BYREF

  v3 = a1;
  v4 = -2147483622;
  v43 = -2147483622;
  v25 = 0;
  v44 = 0;
  v26 = a3 - 48;
LABEL_2:
  v5 = (signed __int64 *)(v3 + 80);
  v31 = v3 + 80;
  v6 = KeAbPreAcquire(v3 + 80, 0LL, 0);
  v35 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 80), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v3 + 80), v6, v3 + 80);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v7 = (unsigned __int64 *)(v3 + 104);
  v32 = v7;
  v8 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = (_QWORD *)(a1 + 112);
  v34 = (_QWORD *)(a1 + 112);
  v11 = *(_QWORD **)(a1 + 112);
  while ( 1 )
  {
    v33 = v11;
    if ( v11 == v10 )
      break;
    v30 = v11 + 2;
    if ( *((_DWORD *)v11 + 4) != 1 )
      goto LABEL_35;
    v12 = *(v11 - 7);
    v28 = v12;
    if ( v12 )
    {
      v12 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8)) != 0);
      v28 = v12;
    }
    v13 = (int *)v11 + 5;
    v29 = (int *)v11 + 5;
    v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1) & 0xFFFFFFFE;
    if ( v12 )
      v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1);
    if ( !v14 )
      goto LABEL_41;
    memset(a2, 0, 0x30uLL);
    v15 = a2;
    a2[1] = *(v11 - 6) ^ 0x41C64E6DA3BC0074LL;
    *a2 = *(v11 - 11);
    if ( (v14 & 1) != 0 )
    {
      v16 = *(_OWORD **)(v12 + 64);
      if ( v16 )
        *(_OWORD *)((char *)a2 + 28) = *v16;
      v25 = ExpWnfReadStateData(v12, &v44, a2 + 6, v26, &v27);
      if ( v25 < 0 )
        goto LABEL_24;
      v15 = a2;
      *((_DWORD *)a2 + 4) = v44;
      *((_DWORD *)a2 + 5) = v27;
    }
    *((_DWORD *)v15 + 11) = 48;
    *((_DWORD *)v15 + 6) = v14;
LABEL_24:
    if ( v12 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
      v12 = 0LL;
    }
    if ( v25 < 0 )
    {
      v4 = v43;
      if ( v43 == -2147483622 )
      {
        v4 = v25;
        v43 = v25;
      }
      goto LABEL_35;
    }
    if ( !v44 )
      v14 &= ~1u;
    if ( v14 )
    {
      *((_DWORD *)v11 + 6) = v14;
      *v29 = 0;
      *v30 = 2;
      v4 = 0;
      break;
    }
    v13 = v29;
LABEL_41:
    v19 = (_QWORD *)v11[1];
    v11 = v19;
    v20 = v33;
    v21 = *v33;
    if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v19 != v33 )
      __fastfail(3u);
    *v19 = v21;
    *(_QWORD *)(v21 + 8) = v19;
    *v30 = 0;
    v22 = *v13;
    *v13 = 0;
    *((_DWORD *)v20 + 6) = 0;
    if ( v12 )
    {
      if ( (v22 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 164), 0xFFFFFFFF) == 1 )
      {
        v23 = (volatile signed __int64 *)(a1 + 104);
        v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL);
        v37 = v24;
        if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
          ExfTryToWakePushLock(v23);
        KeAbPostRelease((ULONG_PTR)v23);
        v38 = 17LL;
        v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), 0LL, 17LL);
        if ( v39 != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a1 + 80));
        KeAbPostRelease(a1 + 80);
        ExpWnfNotifyNameSubscribers(v12, 8LL, 1LL, 1LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
        v4 = v43;
        v3 = a1;
        goto LABEL_2;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
    }
    v4 = v43;
LABEL_35:
    v11 = (_QWORD *)*v11;
    v10 = v34;
  }
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  v40 = v17;
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return v4;
}
