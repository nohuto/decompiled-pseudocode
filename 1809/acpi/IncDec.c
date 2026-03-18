/*
 * XREFs of IncDec @ 0x1C0029A90
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ReadObject @ 0x1C000B1A0 (ReadObject.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall IncDec(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx

  v3 = a2[11];
  v5 = a2[10];
  v6 = *(unsigned int *)(a2[7] + 8LL);
  v7 = HeapAlloc(a1 + 30, 1297237576, 0x38u);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v7;
    *(_QWORD *)(v7 + 24) = ProcessIncDec;
    *(_DWORD *)v7 = 1414745936;
    *(_QWORD *)(v7 + 32) = v6;
    *(_QWORD *)(v7 + 40) = v5;
    *(_QWORD *)(v7 + 48) = v3;
    return (unsigned int)ReadObject((__int64)a1, a2[10], a2[11]);
  }
  else
  {
    v11 = -1072431102;
    LogError(3222536194LL, v8, v9, v10);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
  }
  return v11;
}
