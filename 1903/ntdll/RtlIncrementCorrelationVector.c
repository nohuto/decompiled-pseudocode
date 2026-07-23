/*
 * XREFs of RtlIncrementCorrelationVector @ 0x180072600
 * Callers:
 *     <none>
 * Callees:
 *     sub_180072FCC @ 0x180072FCC (sub_180072FCC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180096F80 (_snprintf_s.c)
 *     sscanf_s @ 0x180097AF0 (sscanf_s.c)
 *     strcpy_s @ 0x180097BF0 (strcpy_s.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  __int64 v1; // rdx
  DWORD v2; // ebx
  int v3; // ebp
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // rax
  char v12; // dl
  int v13; // ecx
  __int64 v14; // rsi
  int v15; // eax
  int v17; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v17 = 0;
  v3 = sub_180072FCC(CorrelationVector, v1);
  v4 = -1;
  v7 = sub_180072FCC(v6, v5);
  v10 = v7;
  if ( v7 <= 0 )
    return -2147483643;
  v11 = 0LL;
  do
  {
    v12 = *(_BYTE *)(v8 + v11 + 1);
    v13 = v9;
    if ( !v12 )
      break;
    ++v9;
    ++v11;
    if ( v12 != 46 )
      v13 = v4;
    v4 = v13;
  }
  while ( v11 < v10 );
  if ( v4 < 0 )
    return -2147483643;
  v14 = v8 + v4 + 1;
  if ( sscanf_s((const char *const)(v14 + 1), "%d", &v17) != 1 )
    return -2147483643;
  v15 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", ++v17);
  if ( v15 >= v3 - v4 - 2 )
    return -2147483643;
  strcpy_s((char *)(v14 + 1), v15 + 1, Buffer);
  return v2;
}
