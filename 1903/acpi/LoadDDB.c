/*
 * XREFs of LoadDDB @ 0x1C001EEB0
 * Callers:
 *     LoadMemDDB @ 0x1C001E898 (LoadMemDDB.c)
 *     LoadFieldUnitDDB @ 0x1C006688C (LoadFieldUnitDDB.c)
 *     LoadTable @ 0x1C00690A0 (LoadTable.c)
 *     AMLILoadDDB @ 0x1C00BD8C8 (AMLILoadDDB.c)
 * Callees:
 *     PushFrame @ 0x1C0020A84 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     RtlStringCchCopyNA @ 0x1C00266CC (RtlStringCchCopyNA.c)
 *     FreeContext @ 0x1C0067BB4 (FreeContext.c)
 */

__int64 __fastcall LoadDDB(_QWORD *Entry, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v9; // rcx
  char pszSrc[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwfAMLIInit >= 0 && !strncmp((const char *)(a2 + 28), "MSFT", 4uLL) && *(_DWORD *)(a2 + 32) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(3222536217LL);
    AcpiDiagTraceAmlError(Entry, 3222536217LL);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_1C0082AD4, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(80, (unsigned int)byte_1C0082AD4, a2, 0, 0LL);
    goto LABEL_8;
  }
  v8 = PushFrame((_DWORD)Entry, 1179927628, 64, (unsigned int)ParseLoad, (__int64)pszSrc);
  if ( v8 )
  {
LABEL_8:
    Entry[11] = 0LL;
    FreeContext(Entry);
    return v8;
  }
  v9 = *(_QWORD *)pszSrc;
  *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
  *(_QWORD *)(v9 + 48) = a4;
  *(_QWORD *)(v9 + 56) = a2;
  return v8;
}
