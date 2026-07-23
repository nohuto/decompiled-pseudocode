/*
 * XREFs of MiReserveDriverPtes @ 0x140711174
 * Callers:
 *     MiSelectSystemImageAddress @ 0x14071112C (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x140887BC4 (MmMapLockedRestartPages.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     RtlFindClearBitsAndSet @ 0x140085350 (RtlFindClearBitsAndSet.c)
 *     MiObtainSystemVa @ 0x1400AAF7C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400AD084 (MiMakeZeroedPageTables.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     MiUnlockDriverMappings @ 0x140155724 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x14015591C (MiLockDriverMappings.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(int a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG v4; // esi
  __int64 v5; // r12
  _RTL_BITMAP *i; // rbx
  ULONG ClearBitsAndSet; // ecx
  unsigned __int64 v8; // rdi
  unsigned int v10; // edi
  __int64 v11; // r15
  __int64 v12; // r8
  _RTL_BITMAP *PoolWithTag; // r14
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 PteAddress; // rax
  __int64 v18; // rdi
  ULONG StartingIndex; // [rsp+60h] [rbp+8h]
  unsigned __int64 v20; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)(a1 + 15) >> 4;
  v5 = a3;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = (_RTL_BITMAP *)qword_140464928[v5]; i; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    if ( (*(&i[2].SizeOfBitMap + 1) & 1) == 0 && i[1].SizeOfBitMap >= v4 )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(i + 1, v4, i[2].SizeOfBitMap);
      if ( ClearBitsAndSet != -1 )
      {
        v8 = (unsigned __int64)&i->Buffer[32 * (unsigned __int64)ClearBitsAndSet];
        i[2].SizeOfBitMap = ClearBitsAndSet + v4;
LABEL_7:
        MiUnlockDriverMappings((__int64)CurrentThread);
        return v8;
      }
    }
  }
  StartingIndex = (unsigned __int8)ExGenRandom(1);
  v10 = (16 * (v4 + StartingIndex) + 511) & 0xFFFFFE00;
  v20 = (unsigned __int64)v10 >> 4;
  v11 = v10;
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                 (POOL_TYPE)((_DWORD)InitializationPhase != 0 ? PagedPool : NonPagedPoolNx),
                                 ((unsigned __int64)v10 >> 7) + 40,
                                 0x70446D4Du);
  if ( !PoolWithTag )
  {
    v8 = 0LL;
    goto LABEL_7;
  }
  v14 = 12 - ((_DWORD)v5 != 0);
  v15 = MiObtainSystemVa(v10 >> 9, v14, v12);
  v16 = v15;
  if ( v15 )
  {
    PteAddress = MiGetPteAddress(v15);
    v18 = PteAddress;
    if ( (_DWORD)v5 || (unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress - 8 + 8 * v11, 1u, v14) )
    {
      memset(&PoolWithTag[2].Buffer, 0, (unsigned __int64)((16 * (v4 + StartingIndex) + 511) & 0xFFFFFE00) >> 7);
      PoolWithTag[1].Buffer = (unsigned int *)&PoolWithTag[2].Buffer;
      PoolWithTag[1].SizeOfBitMap = v20;
      RtlSetBits(PoolWithTag + 1, StartingIndex, v4);
      *(&PoolWithTag[2].SizeOfBitMap + 1) = 0;
      PoolWithTag->Buffer = (unsigned int *)v18;
      PoolWithTag[2].SizeOfBitMap = StartingIndex + v4;
      *(_QWORD *)&PoolWithTag->SizeOfBitMap = qword_140464928[v5];
      qword_140464928[v5] = PoolWithTag;
      MiUnlockDriverMappings((__int64)CurrentThread);
      return v18 + ((unsigned __int64)StartingIndex << 7);
    }
    MiReturnSystemVa(v16, ((v11 << 28) + (v18 << 25)) >> 16, v14);
  }
  MiUnlockDriverMappings((__int64)CurrentThread);
  ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
