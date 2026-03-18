/*
 * XREFs of LoadMemDDB @ 0x1C0024870
 * Callers:
 *     Load @ 0x1C00248D0 (Load.c)
 * Callees:
 *     LoadDDB @ 0x1C0023114 (LoadDDB.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadMemDDB(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9

  if ( ghValidateTable && (v9 = ghValidateTable(a2, qword_1C0081228)) != 0 )
  {
    v6 = -1072431079;
    LogError(3222536217LL, v8, v10, v11);
    AcpiDiagTraceAmlError(a1, 3222536217LL);
    PrintDebugMessage(81, v9, 0, 0, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB((struct _SLIST_ENTRY *)a1, a2, *(_QWORD *)(a1 + 80), a3);
  }
  return v6;
}
