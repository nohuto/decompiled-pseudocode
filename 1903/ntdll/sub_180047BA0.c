/*
 * XREFs of sub_180047BA0 @ 0x180047BA0
 * Callers:
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     sub_18004E6F8 @ 0x18004E6F8 (sub_18004E6F8.c)
 *     sub_18004E9E0 @ 0x18004E9E0 (sub_18004E9E0.c)
 *     sub_18010BA90 @ 0x18010BA90 (sub_18010BA90.c)
 * Callees:
 *     ZwAllocateVirtualMemoryEx @ 0x18009D550 (ZwAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall sub_180047BA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r9d
  __int64 v10; // rax
  _QWORD v11[8]; // [rsp+40h] [rbp-40h] BYREF

  v8 = a4 & 0xBFFFFFFF;
  if ( dword_180163688 && (v8 & 0x2000) == 0 )
    v8 &= ~0x20000000u;
  if ( (v8 & 0x2000) != 0 )
  {
    v11[2] = a3;
    v11[3] = 1LL;
    v10 = 0LL;
    v11[1] = 0LL;
    v11[4] = v11;
    if ( (v8 & 0x40000) != 0 )
      v10 = 0x100000000LL;
    v11[0] = v10;
    if ( a8 )
    {
      v11[6] = a8;
      v11[5] = 3LL;
    }
  }
  return ZwAllocateVirtualMemoryEx(-1LL, a1, a2);
}
