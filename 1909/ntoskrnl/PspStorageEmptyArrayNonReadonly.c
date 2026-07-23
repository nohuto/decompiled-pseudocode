/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x140309F5C
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x1408C4900 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r15d
  ULONG_PTR v5; // rdi
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v8; // edx
  unsigned __int8 v9; // bp
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rbp
  struct _KTHREAD *v19; // rbx
  unsigned int v20; // edx
  unsigned __int8 v21; // r14
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+98h] [rbp+10h] BYREF
  int v32; // [rsp+A0h] [rbp+18h] BYREF
  int v33; // [rsp+A8h] [rbp+20h]

  v30 = a1;
  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v5 = a1 + 16LL * v3;
      ExAcquirePushLockExclusiveEx(v5, 0LL);
      v6 = *(_QWORD *)(v5 + 8);
      if ( (v6 & 1) != 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v5);
        v31 = 0;
        CurrentThread = KeGetCurrentThread();
        v8 = (unsigned int)MiGetSystemRegionType(v5) == 1
           ? MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process)
           : -1;
        --CurrentThread->SpecialApcDisable;
        v9 = ++CurrentThread->AbAllocationRegionCount;
        v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v11 = !_BitScanReverse((unsigned int *)&v12, v10);
          v33 = v12;
          if ( v11 )
            break;
          v13 = (__int64)&CurrentThread->LockEntries[v12];
          v10 &= ~(1 << v12);
          if ( (*(_BYTE *)(v13 + 26) & 1) != 0
            && (*(_DWORD *)(v13 + 32) & 1) == 0
            && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v13 + 40) == v8 )
          {
            *(_BYTE *)(v13 + 26) &= ~1u;
            if ( *(_QWORD *)(v13 + 32) )
            {
              if ( v13 )
              {
                *(_BYTE *)(v13 + 32) |= 2u;
                if ( *(__int64 *)(v13 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
                v14 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
                v15 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
                *(_BYTE *)(v13 + 25) &= ~1u;
                v31 = v14;
                *(_DWORD *)(v13 + 88) = v15;
                *(_QWORD *)(v13 + 32) = 0LL;
                v16 = (v13 - (__int64)CurrentThread - 800) / 96;
                if ( v9 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v16;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
                goto LABEL_23;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, v8, 0LL);
LABEL_23:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v31);
        v11 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v11
          && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v17);
        }
      }
      else
      {
        *(_QWORD *)(v5 + 8) = 1LL;
        v18 = (void *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v5);
        v32 = 0;
        v19 = KeGetCurrentThread();
        v20 = (unsigned int)MiGetSystemRegionType(v5) == 1 ? MmGetSessionIdEx((__int64)v19->ApcState.Process) : -1;
        --v19->SpecialApcDisable;
        v21 = ++v19->AbAllocationRegionCount;
        v22 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v11 = !_BitScanReverse((unsigned int *)&v23, v22);
          if ( v11 )
            break;
          v24 = (__int64)&v19->LockEntries[v23];
          v22 &= ~(1 << v23);
          if ( (*(_BYTE *)(v24 + 26) & 1) != 0
            && (*(_DWORD *)(v24 + 32) & 1) == 0
            && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v24 + 40) == v20 )
          {
            *(_BYTE *)(v24 + 26) &= ~1u;
            if ( *(_QWORD *)(v24 + 32) )
            {
              if ( v24 )
              {
                *(_BYTE *)(v24 + 32) |= 2u;
                if ( *(__int64 *)(v24 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
                v25 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
                v26 = *(_DWORD *)(v24 + 88) & 0xFFFE0000;
                *(_BYTE *)(v24 + 25) &= ~1u;
                v32 = v25;
                *(_DWORD *)(v24 + 88) = v26;
                *(_QWORD *)(v24 + 32) = 0LL;
                v27 = (v24 - (__int64)v19 - 800) / 96;
                if ( v21 == 1 )
                  v19->AbEntrySummary |= 1 << v27;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v27);
                goto LABEL_46;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v19, v5, v20, 0LL);
LABEL_46:
        --v19->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v19, v5, &v32);
        v11 = v19->SpecialApcDisable++ == -1;
        if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
          KiCheckForKernelApcDelivery(v28);
        if ( v18 )
        {
          ObfDereferenceObjectWithTag(v18, 0x746C6644u);
          ++v2;
        }
      }
      if ( ++v3 >= a2 )
        break;
      a1 = v30;
    }
  }
  return v2;
}
