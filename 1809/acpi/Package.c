/*
 * XREFs of Package @ 0x1C0020DF0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall Package(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  result = ValidateArgTypes((__int64)a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    v7 = *(_QWORD *)(a2[10] + 16LL);
    if ( v7 > 0xFF )
    {
      LogError(3222536196LL, v7, v5, v6);
      AcpiDiagTraceAmlError(a1, 3222536196LL);
      PrintDebugMessage(118, *(_QWORD *)(a2[10] + 16LL), 0, 0, 0LL);
      return 3222536196LL;
    }
    else
    {
      *(_DWORD *)(a2[11] + 24LL) = 40 * v7 + 8;
      v8 = (_DWORD *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1196118088, *(_DWORD *)(a2[11] + 24LL));
      v12 = v8;
      if ( v8 )
      {
        *(_WORD *)(a2[11] + 2LL) = 4;
        memset(v8, 0, *(unsigned int *)(a2[11] + 24LL));
        *(_QWORD *)(a2[11] + 32LL) = v12;
        *v12 = *(unsigned __int8 *)(a2[10] + 16LL);
        v13 = HeapAlloc(a1 + 30, 1297237576, 0x38u);
        if ( v13 )
        {
          *(_QWORD *)(v13 + 8) = a1[26].Next;
          a1[26].Next = (_SLIST_ENTRY *)v13;
          *(_QWORD *)(v13 + 24) = ParsePackage;
          *(_DWORD *)v13 = 1179077456;
          *(_QWORD *)(v13 + 32) = v12;
          *(_QWORD *)(v13 + 48) = a2[5];
          return 0LL;
        }
        else
        {
          LogError(3222536194LL, v14, v15, v16);
          AcpiDiagTraceAmlError(a1, 3222536194LL);
          PrintDebugMessage(153, 0, 0, 0, 0LL);
          return 3222536194LL;
        }
      }
      else
      {
        LogError(3221225626LL, v9, v10, v11);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(117, *(_DWORD *)(a2[11] + 24LL), 0, 0, 0LL);
        return 3221225626LL;
      }
    }
  }
  return result;
}
