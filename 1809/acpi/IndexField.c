/*
 * XREFs of IndexField @ 0x1C00231D0
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

__int64 __fastcall IndexField(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned int NameSpaceObject; // eax
  unsigned __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *v17; // rcx
  unsigned __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v4 = a2[10];
  v5 = 0LL;
  v19 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(v4 + 32), *(_QWORD *)(a1 + 80), (__int64 *)&v20, 0x80000000);
  v7 = v20;
  v8 = NameSpaceObject;
  if ( NameSpaceObject )
    goto LABEL_11;
  v8 = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72), *(_QWORD *)(a1 + 80), (__int64 *)&v19, 0x80000000);
  if ( v8 )
    goto LABEL_10;
  if ( *(_WORD *)(v7 + 66) != 5 )
  {
    v8 = -1072431095;
    LogError(3222536201LL, v9, v10, v11);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    PrintDebugMessage(64, *(_QWORD *)(a2[10] + 32), 0, 0, 0LL);
LABEL_10:
    v5 = v19;
    goto LABEL_11;
  }
  v5 = v19;
  if ( *(_WORD *)(v19 + 66) == 5 )
  {
    v12 = (__int64 *)(a2 + 8);
    v8 = CreateNameSpaceObject(
           *(_QWORD *)(a1 + 320),
           0LL,
           *(_QWORD *)(a1 + 80),
           *(struct _EX_RUNDOWN_REF **)(a1 + 88),
           a2 + 8,
           0);
    if ( !v8 )
    {
      *(_WORD *)(*v12 + 66) = 132;
      *(_DWORD *)(*v12 + 88) = 16;
      v13 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1180191048, *(_DWORD *)(*v12 + 88));
      *(_QWORD *)(*v12 + 96) = v13;
      if ( v13 )
      {
        memset(*(void **)(*v12 + 96), 0, *(unsigned int *)(*v12 + 88));
        v17 = *(unsigned __int64 **)(*v12 + 96);
        *v17 = v7;
        v17[1] = v5;
        v8 = ParseFieldList(a1, a2[5], *v12, *(unsigned int *)(a2[10] + 96), 0xFFFFFFFF);
        if ( !v8 )
          return v8;
      }
      else
      {
        v8 = -1073741670;
        LogError(3221225626LL, v14, v15, v16);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(63, 0, 0, 0, 0LL);
      }
    }
  }
  else
  {
    v8 = -1072431095;
    LogError(3222536201LL, v9, v10, v11);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    PrintDebugMessage(62, *(_QWORD *)(a2[10] + 72), 0, 0, 0LL);
  }
LABEL_11:
  if ( v7 )
    DereferenceObjectEx(v7);
  if ( v5 )
    DereferenceObjectEx(v5);
  return v8;
}
