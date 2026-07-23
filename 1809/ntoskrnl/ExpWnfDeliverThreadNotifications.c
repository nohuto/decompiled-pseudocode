/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x14060F5F4
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x14060F4A0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpWnfReadStateData @ 0x140610FDC (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 *v3; // r12
  unsigned int v4; // r13d
  signed __int64 *v5; // r15
  PRTL_BALANCED_NODE v6; // rsi
  volatile signed __int64 *v7; // r14
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rsi
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r12
  __int64 v12; // rsi
  int *v13; // rdx
  unsigned int v14; // r13d
  _QWORD *v15; // rcx
  _OWORD *v16; // rax
  unsigned __int64 *v18; // rax
  unsigned __int64 *v19; // r8
  unsigned __int64 v20; // rcx
  int v21; // eax
  volatile signed __int64 *v22; // r14
  int v23; // [rsp+34h] [rbp-94h]
  unsigned int v24; // [rsp+38h] [rbp-90h]
  int v25; // [rsp+3Ch] [rbp-8Ch] BYREF
  unsigned __int64 *v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  int *v28; // [rsp+50h] [rbp-78h]
  _DWORD *v29; // [rsp+58h] [rbp-70h]
  unsigned __int64 *v30; // [rsp+68h] [rbp-60h]
  unsigned __int64 *v31; // [rsp+70h] [rbp-58h]
  unsigned __int64 *v32; // [rsp+78h] [rbp-50h]
  int v35; // [rsp+E0h] [rbp+18h]
  int v36; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)a1;
  v4 = -2147483622;
  v35 = -2147483622;
  v23 = 0;
  v36 = 0;
  v24 = a3 - 48;
LABEL_2:
  v5 = (signed __int64 *)(v3 + 10);
  v31 = v3 + 10;
  v6 = KeAbPreAcquire((ULONG_PTR)(v3 + 10), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3 + 10, v6, (ULONG_PTR)(v3 + 10));
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  v7 = (volatile signed __int64 *)(v3 + 13);
  v30 = v3 + 13;
  v8 = KeAbPreAcquire((ULONG_PTR)(v3 + 13), 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3 + 13, v8, (ULONG_PTR)(v3 + 13));
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v10 = v3 + 14;
  v26 = v3 + 14;
  v11 = (unsigned __int64 *)v3[14];
  while ( 1 )
  {
    v32 = v11;
    if ( v11 == v10 )
      break;
    v29 = v11 + 2;
    if ( *((_DWORD *)v11 + 4) != 1 )
      goto LABEL_36;
    v12 = *(v11 - 7);
    v27 = v12;
    if ( v12 )
    {
      v12 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8)) != 0);
      v27 = v12;
    }
    v13 = (int *)v11 + 5;
    v28 = (int *)v11 + 5;
    v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1) & 0xFFFFFFFE;
    if ( v12 )
      v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1);
    if ( !v14 )
      goto LABEL_40;
    memset(a2, 0, 0x30uLL);
    v15 = a2;
    a2[1] = *(v11 - 6) ^ 0x41C64E6DA3BC0074LL;
    *a2 = *(v11 - 11);
    if ( (v14 & 1) != 0 )
    {
      v16 = *(_OWORD **)(v12 + 64);
      if ( v16 )
        *(_OWORD *)((char *)a2 + 28) = *v16;
      v23 = ExpWnfReadStateData(v12, &v36, a2 + 6, v24, &v25);
      if ( v23 < 0 )
        goto LABEL_24;
      v15 = a2;
      *((_DWORD *)a2 + 4) = v36;
      *((_DWORD *)a2 + 5) = v25;
    }
    *((_DWORD *)v15 + 11) = 48;
    *((_DWORD *)v15 + 6) = v14;
LABEL_24:
    if ( v12 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
      v12 = 0LL;
    }
    if ( v23 < 0 )
    {
      v4 = v35;
      if ( v35 == -2147483622 )
      {
        v4 = v23;
        v35 = v23;
      }
      goto LABEL_36;
    }
    if ( !v36 )
      v14 &= ~1u;
    if ( v14 )
    {
      *((_DWORD *)v11 + 6) = v14;
      *v28 = 0;
      *v29 = 2;
      v4 = 0;
      break;
    }
    v13 = v28;
LABEL_40:
    v18 = (unsigned __int64 *)v11[1];
    v11 = v18;
    v19 = v32;
    v20 = *v32;
    if ( *(unsigned __int64 **)(*v32 + 8) != v32 || (unsigned __int64 *)*v18 != v32 )
      __fastfail(3u);
    *v18 = v20;
    *(_QWORD *)(v20 + 8) = v18;
    *v29 = 0;
    v21 = *v13;
    *v13 = 0;
    *((_DWORD *)v19 + 6) = 0;
    if ( v12 )
    {
      if ( (v21 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 164), 0xFFFFFFFF) == 1 )
      {
        v3 = (unsigned __int64 *)a1;
        v22 = (volatile signed __int64 *)(a1 + 104);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a1 + 80));
        KeAbPostRelease(a1 + 80);
        ExpWnfNotifyNameSubscribers(v12, 8LL, 1LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
        v4 = v35;
        goto LABEL_2;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
    }
    v4 = v35;
LABEL_36:
    v11 = (unsigned __int64 *)*v11;
    v10 = v26;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return v4;
}
