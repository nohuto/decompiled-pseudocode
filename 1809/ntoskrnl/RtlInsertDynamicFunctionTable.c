/*
 * XREFs of RtlInsertDynamicFunctionTable @ 0x140113DC0
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlInsertDynamicFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rdi
  volatile signed __int64 *v8; // r12
  _QWORD *v9; // r15
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned __int64 *v13; // rax
  __int64 v14; // rsi
  bool v15; // zf
  _QWORD *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v21; // rcx
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+24h] [rbp-44h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+30h] [rbp-38h]
  char *P; // [rsp+80h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v25 = v2;
  if ( v2 < v24 )
    return 3221225621LL;
  v3 = v2 - v24;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v23 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v22 = 12 * v4;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
  v9 = (_QWORD *)Process[2].Affinity.Bitmap[18];
  if ( v9 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *((_DWORD *)v9 + 1);
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( v10 + 1 > v11 )
  {
    v18 = v11 + 10;
    if ( (unsigned int)v18 < v11 )
    {
      v17 = -1073741675;
      goto LABEL_23;
    }
    v19 = 24 * v18 + 16;
    if ( v19 >= 0xFFFFFFFF )
    {
      v17 = -1073741675;
      goto LABEL_23;
    }
    P = (char *)Process[2].Affinity.Bitmap[18];
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v19, 0x46447452u);
    v9 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      v17 = -1073741670;
      P = 0LL;
      goto LABEL_23;
    }
    v21 = PoolWithQuotaTag + 2;
    if ( v10 )
    {
      memmove(v21, P + 16, 24LL * v10);
      v12 = 1;
    }
    else
    {
      *v21 = 0LL;
      PoolWithQuotaTag[3] = 0LL;
      PoolWithQuotaTag[4] = 0LL;
      v12 = 1;
      v10 = 1;
    }
    *(_DWORD *)v9 = v10;
    *((_DWORD *)v9 + 1) = v18;
    *((_BYTE *)v9 + 12) = 0;
    Process[2].Affinity.Bitmap[18] = (unsigned __int64)v9;
  }
  else
  {
    v12 = 1;
  }
  if ( v10 > 1 )
  {
    v13 = v9 + 6;
    do
    {
      if ( v24 < *v13 )
        break;
      ++v12;
      v13 += 3;
    }
    while ( v12 < v10 );
  }
  if ( v9[3 * v12] + (unsigned __int64)LODWORD(v9[3 * v12 + 1]) > v24 )
  {
    v17 = -1073741800;
  }
  else
  {
    v14 = v12;
    v15 = v12 == v10;
    if ( v12 >= v10 )
    {
LABEL_20:
      if ( !v15 )
        memmove(&v9[2 * v12 + 5 + v12], &v9[2 * v12 + 2 + v12], 24LL * (v10 - v12));
      v16 = &v9[3 * v14];
      v16[2] = a1;
      v16[3] = v24;
      *((_DWORD *)v16 + 8) = v23;
      *((_DWORD *)v16 + 9) = v22;
      *(_DWORD *)v9 = v10 + 1;
      v17 = 0;
      goto LABEL_23;
    }
    if ( v9[3 * v12 + 3] >= v25 )
    {
      v15 = v12 == v10;
      goto LABEL_20;
    }
    v17 = -1073741800;
  }
LABEL_23:
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( P )
    ExFreePoolWithTag(P, 0x46447452u);
  return v17;
}
