/*
 * XREFs of Index @ 0x1C000ADE0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall Index(struct _SLIST_ENTRY *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // r14
  __int64 v10; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 1, "CI");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 133LL, &v16);
    if ( !v4 )
    {
      v7 = *(_QWORD *)(a2 + 80);
      v8 = (unsigned int)*(unsigned __int16 *)(v7 + 2) - 3;
      if ( *(_WORD *)(v7 + 2) == 3 )
      {
        if ( *(_DWORD *)(v7 + 56) < *(_DWORD *)(v7 + 24) )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 14;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 48;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(
                                                       a1[20].Next,
                                                       1145455176,
                                                       *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v13 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
          if ( !v13 )
          {
            v4 = -1073741670;
            LogError(3221225626LL, 0LL, v12, v6);
            AcpiDiagTraceAmlError(a1, 3221225626LL);
            PrintDebugMessage(60, 0, 0, 0, 0LL);
            return v4;
          }
          *(_DWORD *)(v13 + 16) = 0;
          *(_DWORD *)(v13 + 20) = 8;
          *(_QWORD *)v13 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL);
          *(_DWORD *)(v13 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
          *(_DWORD *)(v13 + 12) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
          return (unsigned int)WriteObject(a1, v16, *(_QWORD *)(a2 + 88), v6);
        }
        v4 = -1072431100;
        LogError(3222536196LL, v8, v5, v6);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        v15 = *(_QWORD *)(a2 + 80);
        v14 = *(_DWORD *)(v15 + 24);
LABEL_14:
        PrintDebugMessage(61, *(_QWORD *)(v15 + 56), v14, 0, 0LL);
        return v4;
      }
      if ( *(_WORD *)(v7 + 2) == 4 )
      {
        v9 = *(int **)(v7 + 32);
        if ( *(_DWORD *)(v7 + 56) < (unsigned int)*v9 )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 129;
          v10 = *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = &v9[8 * v10 + 2 + 2 * v10];
          return (unsigned int)WriteObject(a1, v16, *(_QWORD *)(a2 + 88), v6);
        }
        v4 = -1072431100;
        LogError(3222536196LL, v8, v5, v6);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        v14 = *v9;
        v15 = *(_QWORD *)(a2 + 80);
        goto LABEL_14;
      }
    }
  }
  return v4;
}
