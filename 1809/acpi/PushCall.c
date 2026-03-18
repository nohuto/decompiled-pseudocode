/*
 * XREFs of PushCall @ 0x1C0021414
 * Callers:
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseNameObj @ 0x1C0021368 (ParseNameObj.c)
 *     ParseLoad @ 0x1C0022E60 (ParseLoad.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall PushCall(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool v13; // zf
  int v14; // eax
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v6 = HeapAlloc(a1 + 30, 1297237576, 0x190u);
  v10 = 0;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v6;
    *(_DWORD *)v6 = 1280065859;
    *(_QWORD *)(v6 + 24) = ParseCall;
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v6 + 48) = a2;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
      if ( (*(_BYTE *)(v12 + 193) & 8) != 0 )
        *(_DWORD *)(v6 + 16) |= 0x10000u;
      if ( *(_WORD *)(a2 + 66) == 8 && (*(_WORD *)(a2 + 64) & 0x200) != 0 )
        *(_DWORD *)(v6 + 16) |= 0x80000u;
      v13 = (*(_BYTE *)(v12 + 193) & 7) == 0;
      v14 = *(_BYTE *)(v12 + 193) & 7;
      *(_DWORD *)(v11 + 60) = v14;
      if ( !v13 )
      {
        v15 = (void *)HeapAlloc(a1[20].Next, 1413563464, 40 * v14);
        *(_QWORD *)(v11 + 64) = v15;
        if ( v15 )
        {
          memset(v15, 0, 40LL * *(unsigned int *)(v11 + 60));
        }
        else
        {
          LogError(3221225626LL, v16, v17, v18);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(152, 0, 0, 0, 0LL);
          v10 = -1073741670;
        }
      }
    }
    else
    {
      a1[6].Next = (_SLIST_ENTRY *)v6;
      *(_DWORD *)(v6 + 16) = 5;
    }
    *(_QWORD *)(v11 + 392) = a3;
  }
  else
  {
    LogError(3222536194LL, v7, v8, v9);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v10;
}
