/*
 * XREFs of PipIommuValidateDeviceId @ 0x140774D90
 * Callers:
 *     PipIommuRetrieveDeviceId @ 0x140774CB4 (PipIommuRetrieveDeviceId.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     IdpValidateAcpiName @ 0x140774E1C (IdpValidateAcpiName.c)
 */

__int64 __fastcall PipIommuValidateDeviceId(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // r10
  ULONG_PTR v4; // r11
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int16 v7; // cx

  v3 = a2;
  v4 = a1;
  result = (unsigned int)(*(_DWORD *)a2 - 1);
  if ( (unsigned int)result > 5 )
  {
    result = 3221225485LL;
  }
  else if ( *(_DWORD *)a2 == 1 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 && (v7 = *(_WORD *)(v3 + 10), (v7 & 0xF8) != 0) )
    {
      if ( v6 < v3 + 24 )
        result = 3221225793LL;
      else
        result = v3 + a3 < v6 + ((unsigned __int8)v7 >> 3) ? 0x80000005 : 0;
    }
    else
    {
      result = 3221225990LL;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      return result;
    result = IdpValidateAcpiName(a2, a3);
  }
  if ( (int)result < 0 )
    KeBugCheckEx(0xCAu, 0x12uLL, v4, v3, (int)result);
  return result;
}
