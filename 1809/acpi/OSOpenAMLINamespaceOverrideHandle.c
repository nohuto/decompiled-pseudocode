/*
 * XREFs of OSOpenAMLINamespaceOverrideHandle @ 0x1C00AE994
 * Callers:
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C604 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchCatA @ 0x1C005C0C4 (RtlStringCchCatA.c)
 *     RtlStringCchCatNA @ 0x1C005C120 (RtlStringCchCatNA.c)
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 */

__int64 __fastcall OSOpenAMLINamespaceOverrideHandle(__int64 a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // ecx
  __int64 v4; // rax
  char pszDest[128]; // [rsp+20h] [rbp-98h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763908LL, 0LL, 0LL);
  v3 = RtlStringCchPrintfA(
         pszDest,
         0x75uLL,
         "%s\\",
         "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\NamespaceOverride");
  if ( v3 >= 0 )
  {
    v3 = RtlStringCchCatNA(pszDest, 0x75uLL, (STRSAFE_PCNZCH)(v2 + 10), 6uLL);
    if ( (int)(v3 + 0x80000000) < 0 || v3 == -2147483643 )
    {
      v3 = RtlStringCchCatA(pszDest, 0x75uLL, "\\");
      if ( v3 >= 0 )
      {
        v3 = RtlStringCchCatNA(pszDest, 0x75uLL, (STRSAFE_PCNZCH)(v2 + 16), 8uLL);
        if ( ((v3 + 0x80000000) & 0x80000000) != 0 || v3 == -2147483643 )
        {
          v4 = -1LL;
          do
            ++v4;
          while ( pszDest[v4] );
          v3 = RtlStringCchPrintfA(&pszDest[v4], 117 - v4, "\\%lu", *(_DWORD *)(v2 + 24));
          if ( v3 >= 0 )
            return (unsigned int)OSOpenHandle(pszDest, 0LL, a1);
        }
      }
    }
  }
  return (unsigned int)v3;
}
