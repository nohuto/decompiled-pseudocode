/*
 * XREFs of PushFrame @ 0x1C00227C0
 * Callers:
 *     AccessBaseField @ 0x1C00019E0 (AccessBaseField.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     ReadObject @ 0x1C000B1A0 (ReadObject.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     Acquire @ 0x1C00226E0 (Acquire.c)
 *     Release @ 0x1C0022840 (Release.c)
 *     LoadDDB @ 0x1C0023114 (LoadDDB.c)
 *     PushPreserveWriteObj @ 0x1C0023CD8 (PushPreserveWriteObj.c)
 *     SleepQueueRequest @ 0x1C006508C (SleepQueueRequest.c)
 *     PushPost @ 0x1C0065D54 (PushPost.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall PushFrame(struct _SLIST_ENTRY *a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9

  v8 = 0;
  v9 = HeapAlloc(a1 + 30, 1297237576, a3);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v9;
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 24) = a4;
    if ( a5 )
      *a5 = v9;
  }
  else
  {
    LogError(3222536194LL, v10, 0LL, v11);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
