/*
 * XREFs of While @ 0x1C000ACB0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall While(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rdx
  char v16; // al
  __int64 v17; // rax

  v4 = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !v4 )
  {
    if ( *(_QWORD *)(a2[10] + 16LL) )
    {
      v5 = a2[11];
      v6 = a2[4];
      v7 = a2[5];
      v8 = *(_QWORD *)(a1 + 320);
      v9 = *(_QWORD *)(a1 + 88);
      v10 = *(_QWORD *)(a1 + 80);
      v11 = *(_QWORD *)(a1 + 120);
      v12 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
      v15 = (_QWORD *)v12;
      if ( v12 )
      {
        *(_QWORD *)(v12 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v12;
        *(_DWORD *)v12 = 1347371859;
        *(_QWORD *)(v12 + 24) = ParseScope;
        *(_QWORD *)(a1 + 120) = v11;
        *(_QWORD *)(v12 + 32) = v7;
        *(_QWORD *)(v12 + 40) = v6;
        *(_QWORD *)(v12 + 48) = *(_QWORD *)(a1 + 80);
        v16 = gdwfAMLI;
        *(_QWORD *)(a1 + 80) = v10;
        if ( (v16 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 112));
        v4 = 0;
        v15[7] = *(_QWORD *)(a1 + 88);
        v17 = *(_QWORD *)(a1 + 320);
        *(_QWORD *)(a1 + 88) = v9;
        v15[8] = v17;
        *(_QWORD *)(a1 + 320) = v8;
        v15[9] = v5;
        *(_DWORD *)(*(_QWORD *)(a1 + 416) + 16LL) |= 0x20000u;
      }
      else
      {
        v4 = -1072431102;
        LogError(3222536194LL, 0LL, v13, v14);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 120) = a2[5];
    }
  }
  return v4;
}
