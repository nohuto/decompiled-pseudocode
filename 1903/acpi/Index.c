/*
 * XREFs of Index @ 0x1C001AEF0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 */

__int64 __fastcall Index(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int *v6; // r14
  __int64 v7; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "CI");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 133LL, &v12);
    if ( !v4 )
    {
      v5 = *(_QWORD *)(a2 + 80);
      if ( *(_WORD *)(v5 + 2) == 3 )
      {
        if ( *(_DWORD *)(v5 + 56) < *(_DWORD *)(v5 + 24) )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 14;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 48;
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(
                                                       *(struct _SLIST_ENTRY **)(a1 + 320),
                                                       1145455176,
                                                       *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v9 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
          if ( !v9 )
          {
            v4 = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(a1, 3221225626LL);
            PrintDebugMessage(60, 0, 0, 0, 0LL);
            return v4;
          }
          *(_DWORD *)(v9 + 16) = 0;
          *(_DWORD *)(v9 + 20) = 8;
          *(_QWORD *)v9 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL);
          *(_DWORD *)(v9 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
          *(_DWORD *)(v9 + 12) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
          return (unsigned int)WriteObject(a1, v12, *(_QWORD *)(a2 + 88));
        }
        v4 = -1072431100;
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        v11 = *(_QWORD *)(a2 + 80);
        v10 = *(_DWORD *)(v11 + 24);
LABEL_14:
        PrintDebugMessage(61, *(_QWORD *)(v11 + 56), v10, 0, 0LL);
        return v4;
      }
      if ( *(_WORD *)(v5 + 2) == 4 )
      {
        v6 = *(int **)(v5 + 32);
        if ( *(_DWORD *)(v5 + 56) < (unsigned int)*v6 )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 129;
          v7 = *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL);
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = &v6[8 * v7 + 2 + 2 * v7];
          return (unsigned int)WriteObject(a1, v12, *(_QWORD *)(a2 + 88));
        }
        v4 = -1072431100;
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        v10 = *v6;
        v11 = *(_QWORD *)(a2 + 80);
        goto LABEL_14;
      }
    }
  }
  return v4;
}
