/*
 * XREFs of sub_1406ACD70 @ 0x1406ACD70
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1406AC7AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406ACCC0 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1406ACDB8 @ 0x1406ACDB8 (sub_1406ACDB8.c)
 */

__int64 __fastcall sub_1406ACD70(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1406ACDB8(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
