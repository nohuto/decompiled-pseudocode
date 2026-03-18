/*
 * XREFs of InitEvent @ 0x1C0064E60
 * Callers:
 *     Event @ 0x1C0064E00 (Event.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall InitEvent(__int64 a1, struct _SLIST_ENTRY *a2, __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx

  v5 = 0;
  *(_WORD *)(a3 + 66) = 7;
  *(_DWORD *)(a3 + 88) = 32;
  v6 = (_QWORD *)HeapAlloc(a2, 1314276680, 0x20u);
  *(_QWORD *)(a3 + 96) = v6;
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, *(unsigned int *)(a3 + 88));
    KeInitializeSpinLock(v7 + 3);
    v7[2] = v7 + 1;
    v7[1] = v7 + 1;
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    PrintDebugMessage(65, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v5;
}
