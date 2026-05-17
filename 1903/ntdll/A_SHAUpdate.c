/*
 * XREFs of A_SHAUpdate @ 0x18000C640
 * Callers:
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     A_SHAFinal @ 0x18000C4D0 (A_SHAFinal.c)
 *     RtlCreateVirtualAccountSid @ 0x1800829B0 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     sub_18000C710 @ 0x18000C710 (sub_18000C710.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall A_SHAUpdate(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  char *v4; // rbp
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned int v8; // r14d
  unsigned __int64 v9; // r14

  v3 = a3;
  v4 = a2;
  result = a3 + *(_DWORD *)(a1 + 88);
  v6 = *(_DWORD *)(a1 + 88) & 0x3F;
  *(_DWORD *)(a1 + 88) = result;
  if ( (unsigned int)result < a3 )
    ++*(_DWORD *)(a1 + 84);
  if ( v6 )
  {
    v8 = v6 + a3;
    if ( v6 + a3 >= 0x40 )
    {
      memmove((void *)(a1 + v6), a2, 64 - v6);
      v4 += 64 - v6;
      v3 = v8 - 64;
      result = sub_18000C710(a1 + 64, a1);
      v6 = 0;
    }
  }
  if ( v3 >= 0x40 )
  {
    v9 = (unsigned __int64)v3 >> 6;
    do
    {
      result = sub_18000C710(a1 + 64, v4);
      v4 += 64;
      v3 -= 64;
      --v9;
    }
    while ( v9 );
  }
  if ( v3 )
    return (__int64)memmove((void *)(a1 + v6), v4, v3);
  return result;
}
