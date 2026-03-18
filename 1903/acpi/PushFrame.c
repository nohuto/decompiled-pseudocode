/*
 * XREFs of PushFrame @ 0x1C0020A84
 * Callers:
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     ReadObject @ 0x1C001BF34 (ReadObject.c)
 *     PushPreserveWriteObj @ 0x1C001E8F8 (PushPreserveWriteObj.c)
 *     LoadDDB @ 0x1C001EEB0 (LoadDDB.c)
 *     Release @ 0x1C001F230 (Release.c)
 *     Acquire @ 0x1C001F460 (Acquire.c)
 *     AccessBaseField @ 0x1C00201A0 (AccessBaseField.c)
 *     SleepQueueRequest @ 0x1C006707C (SleepQueueRequest.c)
 *     PushPost @ 0x1C0067DB8 (PushPost.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 */

__int64 __fastcall PushFrame(struct _SLIST_ENTRY *a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

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
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
