/*
 * XREFs of sub_1405A1BD4 @ 0x1405A1BD4
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1405A15F4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405A1B24 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1405A1C1C @ 0x1405A1C1C (sub_1405A1C1C.c)
 */

__int64 __fastcall sub_1405A1BD4(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1405A1C1C(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
