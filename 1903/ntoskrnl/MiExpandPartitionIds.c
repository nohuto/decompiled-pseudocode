/*
 * XREFs of MiExpandPartitionIds @ 0x14089C5A8
 * Callers:
 *     MiAllocatePartitionId @ 0x14088B70C (MiAllocatePartitionId.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     RtlClearAllBits @ 0x140098850 (RtlClearAllBits.c)
 *     MiMakeZeroedPageTables @ 0x1400AD084 (MiMakeZeroedPageTables.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  _RTL_BITMAP *PoolWithTag; // rax
  __int64 v2; // rsi
  _RTL_BITMAP *v3; // rdi
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rbx
  __int64 PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  if ( (__int64 *)qword_140466188 == &qword_140466180 )
    v0 = 512;
  else
    v0 = qword_140466168->SizeOfBitMap + 512;
  if ( v0 <= qword_140466168->SizeOfBitMap || v0 > 0x400 )
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  else
  {
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
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
  if ( (__int64 *)qword_140466188 == &qword_140466180 )
  {
    v5 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)2);
    if ( !v5 )
      goto LABEL_19;
    v6 = (__int64)(v5 << 25) >> 16;
    if ( !v6 )
      goto LABEL_19;
  }
  else
  {
    v6 = qword_140466188 + 8LL * qword_140466168->SizeOfBitMap;
  }
  PteAddress = MiGetPteAddress(v6);
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress, 0x21u, 9) )
  {
    if ( (__int64 *)qword_140466188 == &qword_140466180 )
      MiReleasePtes((__int64)&qword_1404669C0, PteAddress, 1u);
LABEL_19:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v6, 0, 0x1000uLL);
  if ( (__int64 *)qword_140466188 == &qword_140466180 )
  {
    *(_QWORD *)v6 = *(_QWORD *)qword_140466188;
    qword_140466188 = v6;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140466168->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140466168->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140466168 != (PRTL_BITMAP)&dword_140466170 )
    ExFreePoolWithTag(qword_140466168, 0);
  qword_140466168 = v3;
  return 1LL;
}
