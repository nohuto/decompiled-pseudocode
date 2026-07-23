/*
 * XREFs of DrvDbBuildDeviceIdDriverInfMatch @ 0x1406F67C4
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0 (DrvDbGetDeviceIdDriverInfMatches.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 */

int __fastcall DrvDbBuildDeviceIdDriverInfMatch(__int64 a1, unsigned __int8 *a2, wchar_t *a3, unsigned int a4)
{
  unsigned __int8 v5; // al
  int v6; // eax
  int result; // eax
  unsigned __int8 v8; // cl
  __int64 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp+10h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v5 = *a2;
  if ( !*a2 )
    return RtlStringCchCopyExW(a3, a4, &word_140767740, 0LL, 0LL, 0x800u);
  if ( v5 > 2u )
  {
    if ( v5 == 3 )
      return RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\*", &word_140767740);
    else
      return -1073741811;
  }
  else
  {
    if ( v5 == 1 )
      v6 = 0;
    else
      v6 = *((unsigned __int16 *)a2 + 1) + 1;
    v10 = v6;
    result = RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\%X", &word_140767740, v10);
    if ( result >= 0 )
    {
      v8 = a2[1];
      if ( v8 != 0xFF )
      {
        LODWORD(v9) = v8;
        return RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining, 0LL, 0LL, 0x800u, L"\\%X", v9);
      }
    }
  }
  return result;
}
