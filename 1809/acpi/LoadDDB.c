/*
 * XREFs of LoadDDB @ 0x1C0023114
 * Callers:
 *     LoadMemDDB @ 0x1C0024870 (LoadMemDDB.c)
 *     LoadFieldUnitDDB @ 0x1C00648AC (LoadFieldUnitDDB.c)
 *     LoadTable @ 0x1C0067040 (LoadTable.c)
 *     AMLILoadDDB @ 0x1C00BA078 (AMLILoadDDB.c)
 * Callees:
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     RtlStringCchCopyNA @ 0x1C0027FEC (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     FreeContext @ 0x1C0065B50 (FreeContext.c)
 */

__int64 __fastcall LoadDDB(struct _SLIST_ENTRY *Entry, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  __int64 v12; // rcx
  char pszSrc[8]; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwfAMLIInit >= 0 && !strncmp((const char *)(a2 + 28), "MSFT", 4uLL) && *(_DWORD *)(a2 + 32) < 0x1000000u )
  {
    v11 = -1072431079;
    LogError(3222536217LL, v8, v9, v10);
    AcpiDiagTraceAmlError(Entry, 3222536217LL);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_1C0080ADC, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(80, (unsigned int)byte_1C0080ADC, a2, 0, 0LL);
    goto LABEL_8;
  }
  v11 = PushFrame(Entry, 1179927628, 0x40u, (__int64)ParseLoad, (__int64 *)pszSrc);
  if ( v11 )
  {
LABEL_8:
    *((_QWORD *)&Entry[5].Next + 1) = 0LL;
    FreeContext(Entry);
    return v11;
  }
  v12 = *(_QWORD *)pszSrc;
  *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
  *(_QWORD *)(v12 + 48) = a4;
  *(_QWORD *)(v12 + 56) = a2;
  return v11;
}
