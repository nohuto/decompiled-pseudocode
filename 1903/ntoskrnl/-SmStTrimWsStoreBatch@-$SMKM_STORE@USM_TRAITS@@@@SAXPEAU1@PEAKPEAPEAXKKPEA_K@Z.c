/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140320CD8
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1403208F8 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401486CC (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ZwQueryVirtualMemory @ 0x1401C0530 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1401C3970 (ZwUnlockVirtualMemory.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int16 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        unsigned int *a2,
        PVOID *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rbx
  ULONG_PTR v8; // r13
  unsigned int *v10; // rsi
  __int64 v11; // rbp
  _QWORD *v12; // rdi
  unsigned int v13; // r15d
  __int64 v14; // rdi
  unsigned int v15; // r15d
  PVOID *PoolWithTag; // rax
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  PVOID *v19; // r9
  PVOID *v20; // rdi
  char *v21; // rax
  PVOID *v22; // rdx
  __int64 v23; // r11
  unsigned int v24; // esi
  unsigned int v25; // ebp
  PVOID v26; // rcx
  _BYTE *v27; // rdx
  bool v28; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int16 result; // ax
  __int64 v31; // r8
  __int64 v32; // r9
  SIZE_T MemoryInformationLength; // [rsp+20h] [rbp-68h]
  PVOID BaseAddress; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h]
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR v37; // [rsp+48h] [rbp-40h]

  v6 = 0;
  v7 = a4;
  v8 = a1 + 6024;
  v10 = a2;
  v37 = a1 + 6024;
  v11 = a1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v12 = a6;
  v13 = *(_DWORD *)(v11 + 6208);
  NumberOfBytesToUnlock = v13;
  if ( a6 )
  {
    v15 = v13 >> 12;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7 * v15, 0x71576D73u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = 0;
      v18 = 0;
      if ( (_DWORD)v7 )
      {
        v19 = a3;
        v20 = PoolWithTag;
        do
        {
          v21 = (char *)*v19;
          ++v18;
          BaseAddress = *v19;
          if ( v17 < v15 * v18 )
          {
            v22 = &v20[2 * v17];
            v23 = v15 * v18 - v17;
            v17 = v15 * v18;
            do
            {
              *v22 = v21;
              v22 += 2;
              v21 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v23;
            }
            while ( v23 );
          }
          ++v19;
        }
        while ( v18 < (unsigned int)v7 );
        v12 = a6;
        PoolWithTag = (PVOID *)P;
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *PoolWithTag,
             MemoryWorkingSetExInformation,
             PoolWithTag,
             16 * v7 * v15,
             0LL) >= 0 )
      {
        v24 = 0;
        if ( (_DWORD)v7 )
        {
          v25 = v15;
          do
          {
            v26 = 0LL;
            BaseAddress = 0LL;
            if ( v24 < v25 )
            {
              v27 = P;
              do
              {
                if ( (v27[16 * v24 + 8] & 1) != 0 )
                {
                  v28 = (*v12)-- == 1LL;
                  v26 = *a3;
                  BaseAddress = *a3;
                  if ( v28 )
                    break;
                }
                ++v24;
              }
              while ( v24 < v25 );
              if ( v26 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
            }
            if ( !*v12 )
              break;
            ++v6;
            v25 += v15;
            ++a3;
          }
          while ( v6 < (unsigned int)v7 );
          v8 = v37;
          v11 = a1;
        }
      }
      else
      {
        *v12 = 0LL;
      }
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      *a6 = 0LL;
    }
    v10 = a2;
  }
  else if ( (_DWORD)v7 )
  {
    v14 = v7;
    do
    {
      BaseAddress = *a3;
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
      ++a3;
      --v14;
    }
    while ( v14 );
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = ExAcquirePushLockSharedEx(v8, 0LL);
  if ( (_DWORD)v7 )
  {
    do
    {
      result = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v11, *v10++, v31, v32, MemoryInformationLength, 2u);
      --v7;
    }
    while ( v7 );
  }
  return result;
}
