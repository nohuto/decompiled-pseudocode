/*
 * XREFs of PushTerm @ 0x1C0028534
 * Callers:
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     ParseArg @ 0x1C0021B5C (ParseArg.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall PushTerm(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v22; // edi
  int v23; // ecx

  v9 = HeapAlloc(a1 + 30, 1297237576, 0x60u);
  v13 = 0;
  v14 = v9;
  if ( !v9 )
  {
    v22 = -1072431102;
    LogError(3222536194LL, v10, v11, v12);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    v23 = 153;
    goto LABEL_12;
  }
  *(_QWORD *)(v9 + 8) = a1[26].Next;
  a1[26].Next = (_SLIST_ENTRY *)v9;
  *(_DWORD *)v9 = 1297237332;
  *(_QWORD *)(v9 + 24) = ParseTerm;
  *(_QWORD *)(v9 + 32) = a2;
  *(_QWORD *)(v9 + 48) = a3;
  *(_QWORD *)(v9 + 56) = a4;
  *(_QWORD *)(v9 + 88) = a5;
  v15 = *(_QWORD *)(a4 + 16);
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v15 + v16) );
  }
  else
  {
    LODWORD(v16) = 0;
  }
  *(_DWORD *)(v14 + 76) = v16;
  if ( (_DWORD)v16 )
  {
    v17 = (void *)HeapAlloc(a1[20].Next, 1413563464, 40 * (int)v16);
    *(_QWORD *)(v14 + 80) = v17;
    if ( v17 )
    {
      memset(v17, 0, 40LL * *(unsigned int *)(v14 + 76));
      return v13;
    }
    v22 = -1073741670;
    LogError(3221225626LL, v18, v19, v20);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v23 = 154;
LABEL_12:
    PrintDebugMessage(v23, 0, 0, 0, 0LL);
    return v22;
  }
  return v13;
}
