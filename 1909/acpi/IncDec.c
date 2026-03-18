/*
 * XREFs of IncDec @ 0x1C001BE80
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     ReadObject @ 0x1C001BF34 (ReadObject.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 */

__int64 __fastcall IncDec(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned int v8; // ebx

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
    return (unsigned int)ReadObject(a1, a2[10], a2[11]);
  }
  else
  {
    v8 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
  }
  return v8;
}
