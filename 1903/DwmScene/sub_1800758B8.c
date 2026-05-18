/*
 * XREFs of sub_1800758B8 @ 0x1800758B8
 * Callers:
 *     sub_18007B724 @ 0x18007B724 (sub_18007B724.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1800758B8(__int64 **a1)
{
  __int64 *v1; // rcx
  __int64 *result; // rax
  __int64 **v3; // rdx
  __int64 *i; // rdx
  __int64 *v5; // r8

  v1 = *a1;
  result = (__int64 *)*v1;
  while ( result != v1 )
  {
    *((_DWORD *)result + 10) = -8388609;
    *(__int64 *)((char *)result + 44) = 2139095039LL;
    result[7] = 0LL;
    v3 = (__int64 **)result[2];
    if ( *((_BYTE *)v3 + 25) )
    {
      for ( i = (__int64 *)result[1]; !*((_BYTE *)i + 25) && result == (__int64 *)i[2]; i = (__int64 *)i[1] )
        result = i;
      result = i;
    }
    else
    {
      v5 = *v3;
      for ( result = (__int64 *)result[2]; !*((_BYTE *)v5 + 25); v5 = (__int64 *)*v5 )
        result = v5;
    }
  }
  return result;
}
