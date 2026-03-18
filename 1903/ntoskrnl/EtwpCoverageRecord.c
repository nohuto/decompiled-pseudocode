/*
 * XREFs of EtwpCoverageRecord @ 0x1406D6714
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14032CB40 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1406D64C0 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     TelemetryCoverageTableLocateInternal @ 0x14012B0B4 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x14012B108 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageAddToStringBuffer @ 0x14012B204 (EtwpCoverageAddToStringBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwpCoverageFlushPending @ 0x1406BD290 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x140782618 (EtwpCoverageEnsureStringBuffer.c)
 */

void __fastcall EtwpCoverageRecord(int **a1, __int64 a2)
{
  int v4; // r15d
  int v5; // r14d
  unsigned __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  int v10; // edx
  unsigned int *v11; // r14
  unsigned int *Internal; // r13
  int v13; // r11d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int *v16; // rcx
  const CHAR *v17; // rdx
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
  __int64 v36; // [rsp+A8h] [rbp-58h]
  int *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  int *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  int *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  int *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
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
      v4 = 1;
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v9;
      v11 = (unsigned int *)a1[2];
      Internal = TelemetryCoverageTableLocateInternal(v11, v10);
      if ( *Internal == v13 )
      {
        v5 = 0;
        v4 = 1;
      }
      else if ( v11[8] >= *((_DWORD *)a1 + 8) )
      {
        _InterlockedIncrement(*a1 + 1);
        v5 = 0;
      }
      else
      {
        v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v22);
        if ( v5 )
          goto LABEL_6;
        EtwpCoverageFlushPending(a1);
        if ( (int)EtwpCoverageEnsureStringBuffer(a1) >= 0 )
        {
          v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v22);
LABEL_6:
          *Internal = *(_DWORD *)(a2 + 8);
          ++*((_DWORD *)a1 + 16);
          ++a1[2][8];
          if ( *((_DWORD *)a1 + 16) == 1 )
          {
            v14 = -10000LL * *((unsigned int *)a1 + 7);
            v15 = (__int64)(*a1 + 60);
            v33[0] = 0LL;
            v33[1] = -1LL;
            KeSetTimer2(v15, v14, 0LL, (__int64)v33);
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
  if ( !v4 && v5 && stru_140426688.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426688, 2uLL) )
  {
    v16 = *a1;
    v17 = *(const CHAR **)a2;
    v23 = **a1;
    v24 = v16[1];
    v25 = v6 - v16[4];
    v26 = v6 - v16[5];
    v49 = &v23;
    v51 = &v24;
    v53 = &v25;
    v55 = &v26;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    TlgCreateSz(&pDesc, v17);
    TlgWrite(&stru_140426688, &unk_140393650, 0LL, 0LL, 7u, &pData);
  }
  if ( EtwpCoverageCoreTracingEnabled && stru_140426688.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140426688, 1uLL) )
    {
      v18 = *a1;
      v19 = *(const CHAR **)a2;
      v27 = **a1;
      v28 = v18[1];
      v29 = v6 - v18[4];
      v20 = v6 - v18[5];
      v35 = &v27;
      v37 = &v28;
      v39 = &v29;
      v41 = &v30;
      v43 = &v31;
      v45 = &v32;
      v30 = v20;
      v31 = v5;
      v32 = v4;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      TlgCreateSz(&v47, v19);
      TlgWrite(&stru_140426688, &unk_1403935DC, 0LL, 0LL, 9u, &v34);
    }
  }
}
