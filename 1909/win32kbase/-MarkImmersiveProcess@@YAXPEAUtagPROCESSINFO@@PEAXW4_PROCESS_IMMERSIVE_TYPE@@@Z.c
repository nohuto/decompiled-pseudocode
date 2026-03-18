/*
 * XREFs of ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C0089D38
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00AA140 (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkImmersiveProcess(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned int v9; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v11 = 0LL;
  v6 = *(_DWORD *)(a1 + 812) ^ (*(_DWORD *)(a1 + 812) ^ (16 * a3)) & 0x30;
  *(_DWORD *)(a1 + 812) = v6;
  if ( a3 == 1 )
  {
    if ( (int)RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v11, 0LL) < 0 )
    {
      v9 = *(_DWORD *)(a1 + 812);
    }
    else
    {
      if ( (unsigned __int8)ExQueryFastCacheDevLicense() && (unsigned __int64)BYTE2(v11) - 4 <= 1 )
        v3 = 512;
      v9 = v3 | *(_DWORD *)(a1 + 812) & 0xFFFFFDFF;
    }
    v7 = v9 | 4;
  }
  else
  {
    v7 = v6 & 0xFFFFFDFF;
  }
  *(_DWORD *)(a1 + 812) = v7;
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  result = (*(_DWORD *)(a1 + 812) ^ ((unsigned __int8)SeSecurityAttributePresent(a2, &DestinationString) << 13)) & 0x2000;
  *(_DWORD *)(a1 + 812) ^= result;
  return result;
}
