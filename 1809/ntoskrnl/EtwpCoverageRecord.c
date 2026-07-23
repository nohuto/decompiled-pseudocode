/*
 * XREFs of EtwpCoverageRecord @ 0x1406B547C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14030F0A0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1406B5220 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     TelemetryCoverageTableLocateInternal @ 0x14012A728 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x14012A77C (EtwpCoverageValidateCP.c)
 *     EtwpCoverageAddToStringBuffer @ 0x14012A878 (EtwpCoverageAddToStringBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpCoverageFlushPending @ 0x1406859D0 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14075C628 (EtwpCoverageEnsureStringBuffer.c)
 */

void __fastcall EtwpCoverageRecord(int **a1, __int64 a2)
{
  int v4; // r14d
  int v5; // r15d
  unsigned __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  int v10; // edx
  unsigned int *v11; // r14
  unsigned int *Internal; // r13
  int v13; // r11d
  int *v14; // rcx
  int *v15; // rcx
  const CHAR *v16; // rdx
  int v17; // eax
  int *v18; // rcx
  const CHAR *v19; // rdx
  int v20; // r12d
  int v21; // [rsp+30h] [rbp-D0h]
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+80h] [rbp-80h] BYREF
  int *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  int *v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  int *v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  int *v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v55; // [rsp+130h] [rbp+30h]
  int v56; // [rsp+138h] [rbp+38h]
  int v57; // [rsp+13Ch] [rbp+3Ch]
  int *v58; // [rsp+140h] [rbp+40h]
  int v59; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+14Ch] [rbp+4Ch]
  int *v61; // [rsp+150h] [rbp+50h]
  int v62; // [rsp+158h] [rbp+58h]
  int v63; // [rsp+15Ch] [rbp+5Ch]
  int *v64; // [rsp+160h] [rbp+60h]
  int v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v21 = v6;
  if ( (unsigned int)EtwpCoverageValidateCP((_QWORD *)a2, &v22) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    v8 = *(_DWORD *)(a2 + 12);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    v9 = a1[2][6];
    if ( v8 >= v9 )
    {
      v5 = 1;
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v9;
      v11 = (unsigned int *)a1[2];
      Internal = TelemetryCoverageTableLocateInternal(v11, v10);
      if ( *Internal == v13 )
      {
        v4 = 0;
        v5 = 1;
      }
      else if ( v11[8] >= *((_DWORD *)a1 + 8) )
      {
        _InterlockedIncrement(*a1 + 1);
        v4 = 0;
      }
      else
      {
        v4 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v22);
        if ( v4 )
          goto LABEL_6;
        EtwpCoverageFlushPending(a1);
        if ( (int)EtwpCoverageEnsureStringBuffer(a1) >= 0 )
        {
          v4 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v22);
LABEL_6:
          *Internal = *(_DWORD *)(a2 + 8);
          ++*((_DWORD *)a1 + 16);
          ++a1[2][8];
          if ( *((_DWORD *)a1 + 16) == 1 )
          {
            v14 = *a1;
            v33[1] = -1LL;
            v33[0] = 0LL;
            KeSetTimer2((__int64)(v14 + 60), -10000LL * *((unsigned int *)a1 + 7), 0LL, (__int64)v33);
          }
          goto LABEL_8;
        }
        *(_DWORD *)(a2 + 12) = v8;
        _InterlockedIncrement(*a1 + 1);
      }
    }
LABEL_8:
    LODWORD(v6) = v21;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  if ( !v5 && v4 && stru_140401340.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401340, 2uLL) )
  {
    v15 = *a1;
    v16 = *(const CHAR **)a2;
    v23 = **a1;
    v24 = v15[1];
    v25 = v6 - v15[4];
    v17 = v6 - v15[5];
    v57 = 0;
    v60 = 0;
    v63 = 0;
    v66 = 0;
    v26 = v17;
    v55 = &v23;
    v58 = &v24;
    v61 = &v25;
    v64 = &v26;
    v56 = 4;
    v59 = 4;
    v62 = 4;
    v65 = 4;
    TlgCreateSz(&pDesc, v16);
    TlgWrite(&stru_140401340, &unk_140373E0B, 0LL, 0LL, 7u, &pData);
  }
  if ( EtwpCoverageCoreTracingEnabled && stru_140401340.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140401340, 1uLL) )
    {
      v18 = *a1;
      v19 = *(const CHAR **)a2;
      v27 = **a1;
      v28 = v18[1];
      v29 = v6 - v18[4];
      v20 = v6 - v18[5];
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v35 = &v27;
      v38 = &v28;
      v41 = &v29;
      v44 = &v30;
      v47 = &v31;
      v50 = &v32;
      v30 = v20;
      v31 = v4;
      v32 = v5;
      v36 = 4;
      v39 = 4;
      v42 = 4;
      v45 = 4;
      v48 = 4;
      v51 = 4;
      TlgCreateSz(&v53, v19);
      TlgWrite(&stru_140401340, &unk_140373D97, 0LL, 0LL, 9u, &v34);
    }
  }
}
