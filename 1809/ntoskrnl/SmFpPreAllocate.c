/*
 * XREFs of SmFpPreAllocate @ 0x14018E748
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400E36E8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3F08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14018E6B4 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     SmAcquireReleaseCharges @ 0x1400E3D84 (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x14011D710 (SmFpCleanup.c)
 *     SmKmAllocateMdlForLock @ 0x1401740B4 (SmKmAllocateMdlForLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x1406FA580 (MmAllocateMappingAddress.c)
 */

__int64 __fastcall SmFpPreAllocate(PEX_SPIN_LOCK SpinLock, unsigned int *a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int *v6; // r12
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  __int64 v9; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  void *MappingAddress; // rax
  unsigned int v15; // eax
  KIRQL v16; // al
  __int128 v17; // xmm1
  KIRQL v18; // bl
  int v19; // edx
  __int128 v20; // xmm0
  unsigned int v21; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  _OWORD v24[7]; // [rsp+20h] [rbp-49h] BYREF

  v4 = a3;
  memset(v24, 0, sizeof(v24));
  HIDWORD(v24[0]) = 0;
  *((_QWORD *)&v24[1] + 1) = &v24[1];
  v6 = &a2[v4];
  WORD4(v24[0]) = 1;
  *(_QWORD *)&v24[1] = &v24[1];
  BYTE10(v24[0]) = 6;
  while ( a2 < v6 )
  {
    v7 = *a2;
    v8 = 0;
    v9 = *a2 & 0xF;
    *((_WORD *)&v24[5] + v9 + 4) = *a2 >> 4;
    if ( (v7 & 0xFF00000) != 0 )
    {
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x70466D73u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_19:
          SmFpCleanup((__int64)v24);
          v21 = -1073741670;
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
          return v21;
        }
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        v12 = *a2;
        v13 = *a2 & 0xF;
        if ( v13 == 2 )
          break;
        if ( v13 != 3 )
        {
          if ( v13 >= 5 )
            MappingAddress = MmAllocateMappingAddress((unsigned __int16)((unsigned int)v12 >> 4) << 12, 0x6D526D73u);
          else
            MappingAddress = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(v12 >> 4), 0x70466D73u);
LABEL_9:
          if ( !MappingAddress )
            goto LABEL_19;
          goto LABEL_10;
        }
        if ( !(unsigned int)SmAcquireReleaseCharges((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12, 1, 0) )
          goto LABEL_19;
        MappingAddress = (void *)(8LL * (v8 + 1));
LABEL_10:
        v11[1] = MappingAddress;
        ++v8;
        *v11 = *((_QWORD *)&v24[2] + v9);
        v15 = (unsigned __int8)(*a2 >> 20);
        *((_QWORD *)&v24[2] + v9) = v11;
        if ( v8 >= v15 )
          goto LABEL_11;
      }
      MappingAddress = SmKmAllocateMdlForLock((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12);
      goto LABEL_9;
    }
LABEL_11:
    ++a2;
  }
  v16 = ExAcquireSpinLockExclusive(SpinLock);
  v17 = v24[3];
  v18 = v16;
  v19 = v24[6];
  *((_QWORD *)SpinLock + 11) = *((_QWORD *)&v24[5] + 1);
  *((_OWORD *)SpinLock + 2) = v24[2];
  *((_DWORD *)SpinLock + 24) = v19;
  v20 = v24[4];
  *((_OWORD *)SpinLock + 3) = v17;
  *((_OWORD *)SpinLock + 4) = v20;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v18);
  return 0;
}
