/*
 * XREFs of sub_1407803CC @ 0x1407803CC
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1406A315C (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_140780414 @ 0x140780414 (sub_140780414.c)
 */

__int64 __fastcall sub_1407803CC(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140780414(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
