/*
 * XREFs of Buffer @ 0x1C000B020
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     PrintBuffData @ 0x1C0064384 (PrintBuffData.c)
 */

__int64 __fastcall Buffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v2 = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120);
  v6 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v6 )
  {
    if ( (gDebugger & 0xD0) != 0 )
      PrintBuffData(*(_QWORD *)(a1 + 120), v2);
    v8 = *(_QWORD *)(a2 + 80);
    v9 = *(unsigned int *)(v8 + 16);
    if ( (unsigned int)v9 < v2 )
    {
      v6 = -1073741789;
      LogError(3221225507LL, v5, v9, v7);
      AcpiDiagTraceAmlError(a1, 3221225507LL);
      PrintDebugMessage(19, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), v2, 0, 0LL);
    }
    else
    {
      if ( *(_QWORD *)(v8 + 16) )
      {
        v10 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v9);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v10;
        if ( !v10 )
        {
          v6 = -1073741670;
          LogError(3221225626LL, v11, v12, v13);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(17, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, 0, 0LL);
          return v6;
        }
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
        memset(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), 0, *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
        memmove(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), *(const void **)(a1 + 120), v2);
      }
      else
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = 0LL;
      }
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    }
  }
  return v6;
}
