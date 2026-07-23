/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x14018BAEC
 * Callers:
 *     SepTokenInitialization @ 0x140A0260C (SepTokenInitialization.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  char v13; // al
  struct _KTHREAD *v14; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // bp
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v26; // rcx
  int v28; // [rsp+70h] [rbp+18h] BYREF
  int v29; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v6 = SepMandatoryObjectTypePolicyCount;
  v7 = 0LL;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v8 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 += 3;
    if ( (unsigned int)v7 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v3 = 1;
LABEL_5:
  if ( (unsigned int)v7 < 0x20 )
  {
    if ( v3 )
    {
      v9 = (unsigned int)v7;
      goto LABEL_8;
    }
LABEL_7:
    v9 = (unsigned int)v7;
    v10 = 3 * v7;
    SepMandatoryObjectTypePolicy[2 * v10 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v10 + 2] = 0;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v10] = a1;
    SepMandatoryObjectTypePolicyCount = v6 + 1;
LABEL_8:
    v11 = 3 * v9;
    SepMandatoryObjectTypePolicy[2 * v11 + 2] |= 1u;
    SepMandatoryObjectTypePolicy[2 * v11 + 3] = a2;
    if ( (a2 & 1) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x100u;
    if ( (a2 & 2) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x200u;
    if ( (a2 & 4) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x400u;
    v12 = 0;
    goto LABEL_15;
  }
  v12 = -1073741823;
LABEL_15:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  v28 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&SepMandatoryObjectTypePolicyLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = -1;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    v29 = v19;
    if ( v18 )
      break;
    v20 = 1 << v19;
    v21 = v19;
    v22 = &v14->LockEntries[v21];
    v17 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&SepMandatoryObjectTypePolicyLock & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
      {
        if ( v22 )
        {
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v14->LockEntries[v21].TreeNode);
          v23 = v22->BoostBitmap.AllFields & 0x1FFFF;
          v24 = v22->BoostBitmap.AllFields & 0xFFFE0000;
          v22->ThreadLocalFlags &= ~1u;
          v28 = v23;
          v22->BoostBitmap.AllFields = v24;
          v22->LockState.0 = 0LL;
          v25 = ((char *)v22 - (char *)v14 - 800) / 96;
          if ( v16 == 1 )
            v14->AbEntrySummary |= 1 << v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v25);
          goto LABEL_30;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock, SessionId, 0LL);
LABEL_30:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&SepMandatoryObjectTypePolicyLock, &v28);
  v18 = v14->SpecialApcDisable++ == -1;
  if ( v18 )
  {
    v26 = &v14->152;
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v26->ApcState.ApcListHead[0].Flink != v26 )
      KiCheckForKernelApcDelivery((__int64)v26);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
