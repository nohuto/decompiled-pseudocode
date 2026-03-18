/*
 * XREFs of MmGetChannelInformation @ 0x14074E2F8
 * Callers:
 *     ExpQueryChannelInformation @ 0x140908ED0 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140909684 (ExpQueryNumaAvailableMemory.c)
 *     KiPerformGroupConfiguration @ 0x1409ED6C8 (KiPerformGroupConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiGetChannelInformation @ 0x14065162C (MiGetChannelInformation.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned __int16 a1, unsigned int a2, _QWORD *a3, SIZE_T *a4)
{
  size_t v6; // rbx
  SIZE_T v7; // rdx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE Src[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  MiGetChannelInformation(*(_QWORD *)(qword_140465E88 + 8LL * a1), a2, (__int64)Src, NumberOfBytes);
  v6 = NumberOfBytes[0];
  v7 = NumberOfBytes[0];
  *a4 = NumberOfBytes[0];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x68506D4Du);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v6);
  return 0LL;
}
