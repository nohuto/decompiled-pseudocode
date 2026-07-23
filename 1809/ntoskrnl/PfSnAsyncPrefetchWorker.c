/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x140667720
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     MmGetAvailablePagesBelowPriority @ 0x140137E84 (MmGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpPrefetchSharedStart @ 0x14065DF78 (PfpPrefetchSharedStart.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnCleanupPrefetchHeader @ 0x14066134C (PfSnCleanupPrefetchHeader.c)
 *     PfSnAsyncPrefetchStep @ 0x140664C24 (PfSnAsyncPrefetchStep.c)
 *     PfSnAsyncContextCleanup @ 0x140664CD4 (PfSnAsyncContextCleanup.c)
 *     PfSnLogAsyncWorker @ 0x1406679EC (PfSnLogAsyncWorker.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1406B587C (PfSnPreallocatePrefetchHeader.c)
 *     PfpPrefetchSharedInitialize @ 0x1406CB8B0 (PfpPrefetchSharedInitialize.c)
 *     PfSnPowerBoost @ 0x1406CECDC (PfSnPowerBoost.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(_QWORD *P)
{
  __int64 v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  int DefaultPagePriority; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v8; // rax
  PVOID PoolWithTag; // rax
  int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14[4]; // [rsp+28h] [rbp-99h] BYREF
  __int64 v15[16]; // [rsp+38h] [rbp-89h] BYREF
  _BYTE v16[48]; // [rsp+B8h] [rbp-9h] BYREF

  v1 = P[26];
  v3 = 0;
  v4 = 0;
  memset(v15, 0, sizeof(v15));
  v5 = *((_DWORD *)P + 59);
  v15[4] = (__int64)&v15[3];
  v15[0] = v1;
  v15[3] = (__int64)&v15[3];
  v15[6] = (__int64)&v15[5];
  v15[5] = (__int64)&v15[5];
  PfSnLogAsyncWorker(v1, &PfSnEvt_AsyncWorker_Start);
  if ( (P[30] & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess((_KPROCESS *)P[27], 0LL, (__int64)v16);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    LODWORD(v15[12]) = v5;
    HIDWORD(v15[12]) = v5;
  }
  else
  {
    LODWORD(v15[12]) = DefaultPagePriority - 1;
    HIDWORD(v15[12]) = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(v15) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(HIDWORD(v15[12]) + 1);
    v8 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v15[13] = v8;
    if ( v8 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
      v15[1] = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        PfpPrefetchSharedInitialize(PoolWithTag);
        *(_QWORD *)(v15[1] + 32) = v15;
        *(_DWORD *)(v15[1] + 60) = 250;
        *(_DWORD *)(v15[1] + 56) = 15;
        if ( (int)PfpPrefetchSharedStart(v15[1]) >= 0 && (int)PfSnOpenVolumesForPrefetch(v15, v14) >= 0 )
        {
          v10 = v14[0];
          if ( *(_DWORD *)(v1 + 80) == 1 )
          {
            v10 = v14[0] | 1;
            v14[0] |= 1u;
          }
          if ( (dword_14043D130 & 4) != 0 )
          {
            v11 = 0;
            v10 &= ~2u;
            v14[0] = v10;
          }
          else
          {
            if ( (v10 & 1) != 0 )
              v11 = *(_DWORD *)(v1 + 124);
            else
              v11 = 1;
            if ( 1 << v11 != 1 && (int)PfSnAsyncPrefetchStep((__int64)P, v15, (1 << v11) - 1) < 0 )
              goto LABEL_21;
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)P[4]);
            v3 = 1;
            PfSnLogAsyncWorker(v1, &PfSnEvt_SyncPrefetchingDone_Info);
          }
          if ( v11 < *(_DWORD *)(v1 + 124) && (v10 & 2) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(P[27] + 1840LL), 5000);
            while ( v11 < *(_DWORD *)(v1 + 124) && (int)PfSnAsyncPrefetchStep((__int64)P, v15, 1 << v11) >= 0 )
              ++v11;
          }
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(P[27] + 1840LL), 0);
  v12 = P[28];
  if ( v12 )
  {
    *(_QWORD *)(v12 + 472) = v15[14];
    v13 = P[28];
    v15[14] = 0LL;
    *(_DWORD *)(v13 + 480) = v15[15];
  }
  PfSnCleanupPrefetchHeader((__int64)v15);
  _InterlockedDecrement(&dword_14043D330);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((__int64)v16, 0LL);
  if ( !v3 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)P[4]);
    PfSnLogAsyncWorker(v1, &PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, &PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
