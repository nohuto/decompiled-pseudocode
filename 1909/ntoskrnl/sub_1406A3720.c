/*
 * XREFs of sub_1406A3720 @ 0x1406A3720
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1406A315C (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406A3670 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1406A3768 @ 0x1406A3768 (sub_1406A3768.c)
 */

__int64 __fastcall sub_1406A3720(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1406A3768(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
