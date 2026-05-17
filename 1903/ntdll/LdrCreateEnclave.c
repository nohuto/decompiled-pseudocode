/*
 * XREFs of LdrCreateEnclave @ 0x1800CD360
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x18009DB50 (ZwCreateEnclave.c)
 *     sub_1800CD9D4 @ 0x1800CD9D4 (sub_1800CD9D4.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 */

__int64 __fastcall LdrCreateEnclave(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int Enclave; // ebx
  __int64 v10; // [rsp+58h] [rbp-10h]

  v10 = *a2;
  Enclave = ZwCreateEnclave();
  if ( Enclave >= 0 )
  {
    if ( a6 - 16 > 1 || (Enclave = sub_1800CD9D4(v10, a4, a6), Enclave >= 0) )
      *a2 = v10;
    else
      ZwFreeVirtualMemory();
  }
  if ( a6 == 16 )
    sub_1800D0528(16LL, (unsigned int)Enclave);
  return (unsigned int)Enclave;
}
