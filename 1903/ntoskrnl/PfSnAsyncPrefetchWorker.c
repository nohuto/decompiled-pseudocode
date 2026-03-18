/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x14066A190
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MmGetDefaultPagePriority @ 0x140097564 (MmGetDefaultPagePriority.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14009A034 (MmGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfpPrefetchSharedStart @ 0x140626238 (PfpPrefetchSharedStart.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406269A0 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnCleanupPrefetchHeader @ 0x140628A98 (PfSnCleanupPrefetchHeader.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140669FF0 (PfSnPreallocatePrefetchHeader.c)
 *     PfpPrefetchSharedInitialize @ 0x14066A144 (PfpPrefetchSharedInitialize.c)
 *     PfSnLogAsyncWorker @ 0x14066A474 (PfSnLogAsyncWorker.c)
 *     PfSnAsyncContextCleanup @ 0x14066A4F0 (PfSnAsyncContextCleanup.c)
 *     PfSnAsyncPrefetchStep @ 0x14066AE5C (PfSnAsyncPrefetchStep.c)
 *     PfSnPowerBoost @ 0x1406EC110 (PfSnPowerBoost.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(PVOID P)
{
  __int64 v2; // r14
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

  memset(v16, 0, sizeof(v16));
  v14[0] = 0;
  v2 = *((_QWORD *)P + 26);
  v3 = 0;
  v4 = 0;
  memset(v15, 0, sizeof(v15));
  v5 = *((_DWORD *)P + 59);
  v15[4] = (__int64)&v15[3];
  v15[0] = v2;
  v15[3] = (__int64)&v15[3];
  v15[6] = (__int64)&v15[5];
  v15[5] = (__int64)&v15[5];
  PfSnLogAsyncWorker(v2, &PfSnEvt_AsyncWorker_Start);
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0, (__int64)v16);
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
        PfpPrefetchSharedInitialize((__int64)PoolWithTag);
        *(_QWORD *)(v15[1] + 32) = v15;
        *(_DWORD *)(v15[1] + 60) = 250;
        *(_DWORD *)(v15[1] + 56) = 15;
        if ( (int)PfpPrefetchSharedStart(v15[1]) >= 0 && (int)PfSnOpenVolumesForPrefetch(v15, v14) >= 0 )
        {
          v10 = v14[0];
          if ( *(_DWORD *)(v2 + 80) == 1 )
          {
            v10 = v14[0] | 1;
            v14[0] |= 1u;
          }
          if ( (dword_140467B30 & 4) != 0 )
          {
            v11 = 0;
            v10 &= ~2u;
            v14[0] = v10;
          }
          else
          {
            if ( (v10 & 1) != 0 )
              v11 = *(_DWORD *)(v2 + 124);
            else
              v11 = 1;
            if ( 1 << v11 != 1 && (int)PfSnAsyncPrefetchStep(P, v15, (unsigned int)((1 << v11) - 1)) < 0 )
              goto LABEL_21;
            ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
            v3 = 1;
            PfSnLogAsyncWorker(v2, &PfSnEvt_SyncPrefetchingDone_Info);
          }
          if ( v11 < *(_DWORD *)(v2 + 124) && (v10 & 2) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1888LL), 5000);
            while ( v11 < *(_DWORD *)(v2 + 124) && (int)PfSnAsyncPrefetchStep(P, v15, (unsigned int)(1 << v11)) >= 0 )
              ++v11;
          }
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1888LL), 0);
  v12 = *((_QWORD *)P + 28);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 472) = v15[14];
    v13 = *((_QWORD *)P + 28);
    v15[14] = 0LL;
    *(_DWORD *)(v13 + 480) = v15[15];
  }
  PfSnCleanupPrefetchHeader((__int64)v15);
  _InterlockedDecrement(&dword_140467D30);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  if ( !v3 )
  {
    ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
    PfSnLogAsyncWorker(v2, &PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v2, &PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
