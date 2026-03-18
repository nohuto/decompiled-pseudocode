/*
 * XREFs of InitMutex @ 0x1C000FFF8
 * Callers:
 *     Mutex @ 0x1C000FE70 (Mutex.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall InitMutex(__int64 a1, struct _SLIST_ENTRY *a2, __int64 a3, int a4, char a5)
{
  unsigned int v7; // edi
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rbx

  v7 = 0;
  *(_WORD *)(a3 + 66) = 9;
  *(_DWORD *)(a3 + 88) = 192;
  v9 = (char *)HeapAlloc(a2, 1414876488, 0xC0u);
  *(_QWORD *)(a3 + 96) = v9;
  v13 = v9;
  if ( v9 )
  {
    memset(v9, 0, *(unsigned int *)(a3 + 88));
    *(_DWORD *)v13 = a4;
    if ( a5 )
      *((_DWORD *)v13 + 8) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)v13 + 23);
    *((_QWORD *)v13 + 3) = v13 + 16;
    *((_QWORD *)v13 + 2) = v13 + 16;
  }
  else
  {
    LogError(3221225626LL, v10, v11, v12);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    PrintDebugMessage(76, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v7;
}
