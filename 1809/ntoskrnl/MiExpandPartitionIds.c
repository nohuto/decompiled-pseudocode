/*
 * XREFs of MiExpandPartitionIds @ 0x140860168
 * Callers:
 *     MiAllocatePartitionId @ 0x140851C98 (MiAllocatePartitionId.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  struct _RTL_BITMAP *PoolWithTag; // rax
  __int64 v2; // rsi
  struct _RTL_BITMAP *v3; // rdi
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  if ( (__int64 *)qword_14043A748 == &qword_14043A740 )
    v0 = 512;
  else
    v0 = qword_14043A728->SizeOfBitMap + 512;
  if ( v0 <= qword_14043A728->SizeOfBitMap || v0 > 0x400 )
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  else
  {
    PoolWithTag = (struct _RTL_BITMAP *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2),
                                          0x20206D4Du);
    v2 = 0LL;
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    PoolWithTag->SizeOfBitMap = v0;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
  }
  if ( !v3 )
    return 0LL;
  if ( (__int64 *)qword_14043A748 == &qword_14043A740 )
  {
    v5 = MiReservePtes((__int64)&qword_14043AFA0, (unsigned __int64 *)2);
    if ( !v5 )
      goto LABEL_19;
    v6 = (__int64)(v5 << 25) >> 16;
    if ( !v6 )
      goto LABEL_19;
  }
  else
  {
    v6 = qword_14043A748 + 8LL * qword_14043A728->SizeOfBitMap;
  }
  PteAddress = MiGetPteAddress(v6);
  if ( !(unsigned int)MiMakeZeroedPageTables() )
  {
    if ( (__int64 *)qword_14043A748 == &qword_14043A740 )
      MiReleasePtes((__int64)&qword_14043AFA0, PteAddress, 1u);
LABEL_19:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v6, 0, 0x1000uLL);
  if ( (__int64 *)qword_14043A748 == &qword_14043A740 )
  {
    *(_QWORD *)v6 = *(_QWORD *)qword_14043A748;
    qword_14043A748 = v6;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_14043A728->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_14043A728->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_14043A728 != (PRTL_BITMAP)&dword_14043A730 )
    ExFreePoolWithTag(qword_14043A728, 0);
  qword_14043A728 = v3;
  return 1LL;
}
