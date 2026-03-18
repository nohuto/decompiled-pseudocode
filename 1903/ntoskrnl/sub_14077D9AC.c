/*
 * XREFs of sub_14077D9AC @ 0x14077D9AC
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1406AC7AC (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_14077D9F4 @ 0x14077D9F4 (sub_14077D9F4.c)
 */

__int64 __fastcall sub_14077D9AC(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_14077D9F4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
