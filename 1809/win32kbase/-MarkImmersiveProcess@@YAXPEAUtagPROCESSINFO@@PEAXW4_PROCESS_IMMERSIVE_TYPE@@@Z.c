/*
 * XREFs of ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C007CC54
 * Callers:
 *     xxxInitProcessInfo @ 0x1C009B0FC (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkImmersiveProcess(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  unsigned int v6; // eax
  __int64 result; // rax
  int v8; // edi
  unsigned int v9; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 820) ^ (*(_DWORD *)(a1 + 820) ^ (16 * a3)) & 0x30;
  *(_DWORD *)(a1 + 820) = v5;
  if ( a3 == 1 )
  {
    v8 = 0;
    if ( (int)RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v11, 0LL) < 0 )
    {
      v9 = *(_DWORD *)(a1 + 820);
    }
    else
    {
      if ( (unsigned __int8)ExQueryFastCacheDevLicense() && (unsigned __int64)BYTE2(v11) - 4 <= 1 )
        v8 = 512;
      v9 = v8 | *(_DWORD *)(a1 + 820) & 0xFFFFFDFF;
      *(_DWORD *)(a1 + 820) = v9;
    }
    v6 = v9 | 4;
  }
  else
  {
    v6 = v5 & 0xFFFFFDFF;
  }
  *(_DWORD *)(a1 + 820) = v6;
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  result = (*(_DWORD *)(a1 + 820) ^ ((unsigned __int8)SeSecurityAttributePresent(a2, &DestinationString) << 13)) & 0x2000;
  *(_DWORD *)(a1 + 820) ^= result;
  return result;
}
