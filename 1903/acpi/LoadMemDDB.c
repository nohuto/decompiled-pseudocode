/*
 * XREFs of LoadMemDDB @ 0x1C001E898
 * Callers:
 *     Load @ 0x1C001E7B0 (Load.c)
 * Callees:
 *     LoadDDB @ 0x1C001EEB0 (LoadDDB.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadMemDDB(void *a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v5; // ebp

  if ( ghValidateTable && (v5 = ghValidateTable(a2, qword_1C0083228)) != 0 )
  {
    v3 = -1072431079;
    LogError(3222536217LL);
    AcpiDiagTraceAmlError(a1, 3222536217LL);
    PrintDebugMessage(81, v5, 0, 0, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB(a1);
  }
  return v3;
}
