/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14031FF8C
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14031FCE0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14014867C (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140148D6C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401C10B0 (ZwQueryVirtualMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmSetPriorityVaRanges @ 0x14088AA24 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r15
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rsi
  __int64 v9; // r9
  unsigned int v10; // r8d
  unsigned int v11; // r13d
  int v12; // ecx
  char *v13; // r14
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // r15
  char *v17; // r12
  char *v18; // rax
  unsigned __int64 *v19; // rdx
  unsigned __int64 v20; // rcx
  char *v21; // r8
  char *v22; // r10
  unsigned int v23; // r9d
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  struct _KTHREAD *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  SIZE_T MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+30h] [rbp-D0h]
  unsigned int v37; // [rsp+34h] [rbp-CCh]
  unsigned int v38; // [rsp+38h] [rbp-C8h]
  _BYTE v40[48]; // [rsp+50h] [rbp-B0h] BYREF
  char *v41; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v42[63]; // [rsp+88h] [rbp-78h]
  char MemoryInformation[8]; // [rsp+280h] [rbp+180h] BYREF
  char v44; // [rsp+288h] [rbp+188h] BYREF

  v2 = a2;
  memset(v40, 0, sizeof(v40));
  if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
    return (unsigned int)-1073741637;
  v5 = *(_DWORD *)(a1 + 1952);
  v4 = 0;
  v37 = v5;
  if ( !v5 )
    return v4;
  v6 = *(_DWORD *)(a1 + 6208) >> 12;
  v36 = v6;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0, (__int64)v40);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 6580));
  v10 = 0;
  v11 = 0;
  if ( !*(_DWORD *)(a1 + 6212) )
    goto LABEL_43;
  do
  {
    if ( v10 >= v5 )
      break;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v11) & 0x7FFFFFFFFFFF0000LL) == 0 )
      goto LABEL_42;
    v12 = *(_BYTE *)(a1 + 856) ? 0 : *(unsigned __int16 *)(*(_QWORD *)(a1 + 1112) + 2LL * v11) >> 13;
    if ( v12 != 6 )
      goto LABEL_42;
    v38 = v10 + 1;
    v13 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v11, 0, v9, 0);
    if ( (unsigned __int64)v13 <= 3 )
      goto LABEL_41;
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !*v2 )
    {
      v14 = *(unsigned int *)(a1 + 6208);
      v41 = v13;
      v42[0] = v14;
      MmSetPriorityVaRanges(1LL, &v41, 5LL);
      goto LABEL_40;
    }
    v15 = v13;
    v16 = v6 << 12;
    v17 = &v13[v16];
    v18 = MemoryInformation;
    if ( v13 < &v13[v16] )
    {
      do
      {
        *(_QWORD *)v18 = v15;
        v15 += 4096;
        v18 += 16;
      }
      while ( v15 < v17 );
    }
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v13,
           MemoryWorkingSetExInformation,
           MemoryInformation,
           16LL * v36,
           0LL) < 0
      && v13 < v17 )
    {
      v19 = (unsigned __int64 *)&v44;
      v20 = ((unsigned __int64)(v16 - 1) >> 12) + 1;
      do
      {
        *v19 = *v19 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
        v19 += 2;
        --v20;
      }
      while ( v20 );
    }
    v21 = MemoryInformation;
    v22 = v13;
    v23 = 0;
    if ( v13 >= v17 )
    {
      v2 = a2;
      goto LABEL_39;
    }
    do
    {
      if ( (*((_QWORD *)v21 + 1) & 1) != 0 || (*((_QWORD *)v21 + 1) & 0xC00000LL) == 0x400000 )
      {
        v2 = a2;
        v24 = *((_QWORD *)v21 + 1) & 0x7000000LL;
        if ( v24 == 100663296 )
        {
          if ( !*a2 )
          {
            v30 = *(unsigned int *)(a1 + 6208);
            v29 = 5LL;
            v41 = v13;
            v42[0] = v30;
            v28 = 1LL;
            goto LABEL_37;
          }
          v25 = *a2 - 1;
          goto LABEL_28;
        }
        if ( v24 < 0x6000000 )
        {
          v26 = *a2;
          if ( *a2 )
          {
            v27 = 2LL * v23++;
            v42[v27 - 1] = *(_QWORD *)v21;
            v25 = v26 - 1;
            v42[v27] = 4096LL;
LABEL_28:
            *a2 = v25;
          }
        }
      }
      else
      {
        v2 = a2;
      }
      v22 += 4096;
      v21 += 16;
    }
    while ( v22 < v17 );
    if ( !v23 )
      goto LABEL_39;
    v28 = v23;
    v29 = 6LL;
LABEL_37:
    MmSetPriorityVaRanges(v28, &v41, v29);
LABEL_39:
    v6 = v36;
LABEL_40:
    v31 = KeGetCurrentThread();
    --v31->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v11, v32, v33, MemoryInformationLength, 0);
LABEL_41:
    v10 = v38;
    v5 = v37;
LABEL_42:
    ++v11;
  }
  while ( v11 < *(_DWORD *)(a1 + 6212) );
LABEL_43:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6580), 0xFFFFFFFF);
  KiUnstackDetachProcess((struct _KTHREAD *)v40, 0);
  return v4;
}
