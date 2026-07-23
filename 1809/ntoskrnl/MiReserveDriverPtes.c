/*
 * XREFs of MiReserveDriverPtes @ 0x140684A6C
 * Callers:
 *     MiSelectSystemImageAddress @ 0x140684A28 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x14084D8E0 (MmMapLockedRestartPages.c)
 *     MiGetNewAddressForBootImage @ 0x1409B95F4 (MiGetNewAddressForBootImage.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     MiUnlockDriverMappings @ 0x1400F6028 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400F6228 (MiLockDriverMappings.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(unsigned int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r12
  ULONG v4; // esi
  __int64 i; // rbx
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v7; // rbx
  unsigned int v9; // r15d
  _RTL_BITMAP *PoolWithTag; // r14
  unsigned __int64 v11; // rax
  __int64 PteAddress; // rdi
  __int64 v13; // rax
  ULONG StartingIndex; // [rsp+60h] [rbp+8h]
  unsigned __int64 v15; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = (unsigned int)(a2 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = qword_140439FC8[v3]; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) >= v4 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(i + 16), v4, *(_DWORD *)(i + 32));
      if ( ClearBitsAndSet != -1 )
      {
        *(_DWORD *)(i + 32) = v4 + ClearBitsAndSet;
        v7 = *(_QWORD *)(i + 8) + 8 * ((unsigned __int64)(ClearBitsAndSet << 16) >> 12);
LABEL_6:
        MiUnlockDriverMappings((__int64)CurrentThread);
        return v7;
      }
    }
  }
  StartingIndex = (unsigned __int8)ExGenRandom(1);
  v9 = (16 * (StartingIndex + v4) + 511) & 0xFFFFFE00;
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                 (POOL_TYPE)((_DWORD)InitializationPhase != 0 ? PagedPool : NonPagedPoolNx),
                                 ((unsigned __int64)v9 >> 7) + 40,
                                 0x70446D4Du);
  if ( !PoolWithTag )
  {
    v7 = 0LL;
    goto LABEL_6;
  }
  v11 = MiObtainSystemVa(v9 >> 9, 12 - (unsigned int)((_DWORD)v3 != 0));
  v15 = v11;
  if ( v11 )
  {
    PteAddress = MiGetPteAddress(v11);
    if ( (_DWORD)v3 || (unsigned int)MiMakeZeroedPageTables() )
    {
      memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) >> 7);
      PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
      PoolWithTag[1].SizeOfBitMap = v9 >> 4;
      RtlSetBits(PoolWithTag + 1, StartingIndex, v4);
      PoolWithTag->Buffer = (unsigned int *)PteAddress;
      PoolWithTag[2].SizeOfBitMap = StartingIndex + v4;
      v13 = qword_140439FC8[v3];
      *(&PoolWithTag[2].SizeOfBitMap + 1) = 0;
      *(_QWORD *)&PoolWithTag->SizeOfBitMap = v13;
      qword_140439FC8[v3] = (__int64)PoolWithTag;
      MiUnlockDriverMappings((__int64)CurrentThread);
      return PteAddress + 8 * ((unsigned __int64)(StartingIndex << 16) >> 12);
    }
    MiReturnSystemVa(
      v15,
      (__int64)((PteAddress << 25) + ((unsigned __int64)((16 * (StartingIndex + v4) + 511) & 0xFFFFFE00) << 28)) >> 16,
      12 - ((_DWORD)v3 != 0));
  }
  MiUnlockDriverMappings((__int64)CurrentThread);
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
