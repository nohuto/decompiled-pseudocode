/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x1406644A8
 * Callers:
 *     SmQueryStoreInformation @ 0x1406D0FDC (SmQueryStoreInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     SmKmStoreReferenceEx @ 0x1400E126C (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140134E9C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  int StoreStats; // ebx
  struct _EX_RUNDOWN_REF *v17; // rax
  char *v18; // rcx
  __int64 v19; // rdx
  _BYTE v20[40]; // [rsp+28h] [rbp-670h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-648h]
  _DWORD *v22; // [rsp+58h] [rbp-640h]
  unsigned int v23; // [rsp+6Ch] [rbp-62Ch]
  unsigned int v24; // [rsp+80h] [rbp-618h]
  unsigned int v25; // [rsp+84h] [rbp-614h]
  char v26; // [rsp+8Ch] [rbp-60Ch] BYREF

  v22 = a3;
  memset(v20, 0, sizeof(v20));
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
    *(_OWORD *)v20 = *(_OWORD *)a1;
    *(_OWORD *)&v20[16] = *(_OWORD *)(a1 + 16);
    *(_QWORD *)&v20[32] = *(_QWORD *)(a1 + 32);
    if ( v20[0] != 3 || (*(_DWORD *)v20 & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14055C160, 0LL);
      if ( qword_14055C158 )
      {
        *(_DWORD *)&v20[4] = *((_DWORD *)qword_14055C158 + 184);
        *(_QWORD *)&v20[8] = *((_QWORD *)qword_14055C158 + 178) << 12;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14055C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14055C160);
        KeAbPostRelease((ULONG_PTR)&qword_14055C160);
        KeLeaveCriticalRegion();
        v10 = 0LL;
        v11 = 0LL;
        *(_OWORD *)&v20[16] = 0uLL;
        v12 = 0;
        v13 = *(_QWORD *)&v20[32];
        do
        {
          v14 = SmKmStoreReferenceEx((__int64)&SmGlobals, v12);
          v21 = v14;
          if ( v14 )
          {
            StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v14);
            v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                              (__int64)&SmGlobals,
                                              *(_DWORD *)(v21 + 6016) & 0x3FF);
            ExReleaseRundownProtection_0(v17 + 1);
            if ( StoreStats >= 0 )
            {
              v18 = &v26;
              v19 = 8LL;
              do
              {
                v10 += v23 * (unsigned __int64)*(unsigned int *)v18;
                *(_QWORD *)&v20[24] = v10;
                v18 += 8;
                --v19;
              }
              while ( v19 );
              v11 += (unsigned __int64)v24 << 12;
              *(_QWORD *)&v20[16] = v11;
              v13 += (unsigned __int64)v25 << 12;
              *(_QWORD *)&v20[32] = v13;
            }
          }
          ++v12;
        }
        while ( v12 < 0x400 );
        *(_OWORD *)a1 = *(_OWORD *)v20;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v20[16];
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v20[32];
        *v22 = 40;
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14055C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14055C160);
        KeAbPostRelease((ULONG_PTR)&qword_14055C160);
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
