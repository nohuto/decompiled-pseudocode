/*
 * XREFs of sub_140758048 @ 0x140758048
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1405A15F4 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_140758090 @ 0x140758090 (sub_140758090.c)
 */

__int64 __fastcall sub_140758048(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140758090(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
