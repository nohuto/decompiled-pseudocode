/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x140698154
 * Callers:
 *     SmQueryStoreInformation @ 0x1406F0B68 (SmQueryStoreInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     SmKmStoreReferenceEx @ 0x1400EE398 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140137DA8 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // bl
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // r15
  unsigned int v14; // r14d
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  int StoreStats; // ebx
  struct _EX_RUNDOWN_REF *v19; // rax
  unsigned int *v20; // rcx
  __int64 v21; // rdx
  char v22; // bl
  _BYTE v23[40]; // [rsp+28h] [rbp-670h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-648h]
  _DWORD *v25; // [rsp+58h] [rbp-640h]
  _DWORD v26[384]; // [rsp+60h] [rbp-638h] BYREF

  v25 = a3;
  memset(v26, 0, sizeof(v26));
  memset(v23, 0, sizeof(v23));
  if ( a2 == 40 )
  {
    v7 = 0;
    if ( a4 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a1;
      if ( a1 >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 39) = *(_BYTE *)(v8 + 39);
    }
    *(_OWORD *)v23 = *(_OWORD *)a1;
    *(_OWORD *)&v23[16] = *(_OWORD *)(a1 + 16);
    *(_QWORD *)&v23[32] = *(_QWORD *)(a1 + 32);
    if ( v23[0] != 3 || (*(_DWORD *)v23 & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14058C160, 0LL);
      if ( qword_14058C158 )
      {
        *(_DWORD *)&v23[4] = *((_DWORD *)qword_14058C158 + 186);
        *(_QWORD *)&v23[8] = *((_QWORD *)qword_14058C158 + 178) << 12;
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058C160, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058C160);
        KeAbPostRelease((ULONG_PTR)&qword_14058C160);
        KeLeaveCriticalRegion();
        v12 = 0LL;
        v13 = 0LL;
        *(_OWORD *)&v23[16] = 0uLL;
        v14 = 0;
        v15 = *(_QWORD *)&v23[32];
        do
        {
          v16 = SmKmStoreReferenceEx((__int64)&SmGlobals, v14, v11);
          v24 = v16;
          if ( v16 )
          {
            StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v16);
            v19 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                              (__int64)&SmGlobals,
                                              *(_DWORD *)(v24 + 6016) & 0x3FF);
            ExReleaseRundownProtection_0(v19 + 1);
            if ( StoreStats >= 0 )
            {
              v11 = v26[3];
              v20 = &v26[11];
              v21 = 8LL;
              do
              {
                v12 += v26[3] * (unsigned __int64)*v20;
                *(_QWORD *)&v23[24] = v12;
                v20 += 2;
                --v21;
              }
              while ( v21 );
              v13 += (unsigned __int64)v26[8] << 12;
              *(_QWORD *)&v23[16] = v13;
              v15 += (unsigned __int64)v26[9] << 12;
              *(_QWORD *)&v23[32] = v15;
            }
          }
          ++v14;
        }
        while ( v14 < 0x400 );
        *(_OWORD *)a1 = *(_OWORD *)v23;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v23[16];
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v23[32];
        *v25 = 40;
      }
      else
      {
        v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058C160, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058C160);
        KeAbPostRelease((ULONG_PTR)&qword_14058C160);
        KeLeaveCriticalRegion();
        return (unsigned int)-1073741399;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v7;
}
