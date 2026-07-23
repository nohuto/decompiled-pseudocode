/*
 * XREFs of sub_140759238 @ 0x140759238
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_140759280 @ 0x140759280 (sub_140759280.c)
 */

__int64 __fastcall sub_140759238(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140759280(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
