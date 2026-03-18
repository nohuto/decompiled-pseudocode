/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x1408C6E80
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1408C4EA4 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleCleanup @ 0x1408C6CE4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C7E84 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1)
{
  __int64 v1; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    if ( (v1 & 1) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64))(FltMgrCallbacks + 32))(v1 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    else
    {
      UnicodeString.Buffer = (wchar_t *)(v1 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_DWORD *)&UnicodeString.Length = 65537;
      RtlFreeAnsiString(&UnicodeString);
    }
    *a1 = 0LL;
  }
}
