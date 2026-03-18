/*
 * XREFs of NewGlobalHeap @ 0x1C0023C48
 * Callers:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall NewGlobalHeap(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *PoolWithTag; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  __int64 v8; // rbx

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)gdwGlobalHeapBlkSize, 0x486C6D41u);
  *a1 = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = (unsigned int)gdwGlobalHeapBlkSize;
    memset(PoolWithTag, 0, (unsigned int)gdwGlobalHeapBlkSize);
    *(_DWORD *)v7 = 1346454856;
    v7[1] = (char *)v7 + v8;
    v7[4] = v7 + 7;
    v7[6] = v7 + 5;
    v7[5] = v7 + 5;
  }
  else
  {
    LogError(3221225626LL, v4, v5, v6);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(110, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
