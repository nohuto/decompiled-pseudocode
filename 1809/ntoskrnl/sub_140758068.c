/*
 * XREFs of sub_140758068 @ 0x140758068
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1405A15F4 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1407580B0 @ 0x1407580B0 (sub_1407580B0.c)
 */

__int64 __fastcall sub_140758068(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407580B0(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
