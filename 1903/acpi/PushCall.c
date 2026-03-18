/*
 * XREFs of PushCall @ 0x1C001070C
 * Callers:
 *     ParseLoad @ 0x1C0006D20 (ParseLoad.c)
 *     ParseNameObj @ 0x1C0011FCC (ParseNameObj.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall PushCall(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  void *v12; // rax

  v6 = HeapAlloc(a1 + 30, 1297237576, 0x190u);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v6;
    *(_DWORD *)v6 = 1280065859;
    *(_QWORD *)(v6 + 24) = ParseCall;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v6 + 48) = a2;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
      if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
        *(_DWORD *)(v6 + 16) |= 0x10000u;
      if ( *(_WORD *)(a2 + 66) == 8 && (*(_WORD *)(a2 + 64) & 0x200) != 0 )
        *(_DWORD *)(v6 + 16) |= 0x80000u;
      v10 = (*(_BYTE *)(v9 + 193) & 7) == 0;
      v11 = *(_BYTE *)(v9 + 193) & 7;
      *(_DWORD *)(v8 + 60) = v11;
      if ( !v10 )
      {
        v12 = (void *)HeapAlloc(a1[20].Next, 1413563464, 40 * v11);
        *(_QWORD *)(v8 + 64) = v12;
        if ( v12 )
        {
          memset(v12, 0, 40LL * *(unsigned int *)(v8 + 60));
        }
        else
        {
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(152, 0, 0, 0, 0LL);
          v7 = -1073741670;
        }
      }
    }
    else
    {
      a1[6].Next = (_SLIST_ENTRY *)v6;
      *(_DWORD *)(v6 + 16) = 5;
    }
    *(_QWORD *)(v8 + 392) = a3;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v7;
}
