/*
 * XREFs of MmGetChannelInformation @ 0x1408604B8
 * Callers:
 *     ExpQueryChannelInformation @ 0x1408CCE70 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1408CD5CC (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiGetChannelInformation @ 0x1406096FC (MiGetChannelInformation.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned __int16 a1, unsigned int a2, _QWORD *a3, SIZE_T *a4)
{
  size_t v7; // rbx
  SIZE_T v8; // rdx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE Src[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  MiGetChannelInformation(*(_QWORD *)(qword_14043B808 + 8LL * a1), a2, (__int64)Src, NumberOfBytes);
  v7 = NumberOfBytes[0];
  v8 = NumberOfBytes[0];
  *a4 = NumberOfBytes[0];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x68506D4Du);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v7);
  return 0LL;
}
