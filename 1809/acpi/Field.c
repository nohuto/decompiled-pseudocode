/*
 * XREFs of Field @ 0x1C00215D0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C00216F8 (ParseFieldList.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall Field(__int64 a1, _QWORD *a2)
{
  unsigned int NameSpaceObject; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32LL), *(_QWORD *)(a1 + 80), (__int64 *)&v17, 0x80000000);
  v8 = v17;
  v9 = NameSpaceObject;
  if ( !NameSpaceObject )
  {
    if ( *(_WORD *)(v17 + 66) == 10 )
    {
      v10 = a2 + 8;
      v9 = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             0LL,
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             a2 + 8,
             0);
      if ( !v9 )
      {
        *(_WORD *)(*v10 + 66LL) = 131;
        *(_DWORD *)(*v10 + 88LL) = 8;
        v11 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1329874504, *(_DWORD *)(*v10 + 88LL));
        *(_QWORD *)(*v10 + 96LL) = v11;
        if ( v11 )
        {
          memset(*(void **)(*v10 + 96LL), 0, *(unsigned int *)(*v10 + 88LL));
          v15 = *(_QWORD *)(*v10 + 96LL);
          *(_QWORD *)v15 = v8;
          v8 = 0LL;
          v9 = ParseFieldList(
                 a1,
                 a2[5],
                 *v10,
                 *(_DWORD *)(a2[10] + 56LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 96LL) + 8LL));
        }
        else
        {
          v9 = -1073741670;
          LogError(3221225626LL, v12, v13, v14);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(51, 0, 0, 0, 0LL);
        }
      }
    }
    else
    {
      v9 = -1072431095;
      LogError(3222536201LL, v5, v6, v7);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      PrintDebugMessage(52, *(_QWORD *)(a2[10] + 32LL), 0, 0, 0LL);
    }
  }
  if ( v8 )
    DereferenceObjectEx(v8);
  return v9;
}
