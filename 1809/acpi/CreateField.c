/*
 * XREFs of CreateField @ 0x1C0064CF0
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C0028790 (CreateXField.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall CreateField(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v5; // edi
  _DWORD *v6; // r9
  __int64 v7; // rdx
  _DWORD *v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  if ( *(_WORD *)(v2 + 82) == 1 )
  {
    v5 = CreateXField(a1, a2, v2 + 120, &v9);
    if ( !v5 )
    {
      v6 = v9;
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) >> 3;
      v9[3] = v7;
      v6[4] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL) - 8 * v7;
      v6[5] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
      v6[6] = 65537;
    }
  }
  else
  {
    v5 = -1072431096;
    LogError(-1072431096);
    AcpiDiagTraceAmlError(a1, -1072431096);
    PrintDebugMessage(34, 0LL, 0LL, 0LL, 0LL);
  }
  return v5;
}
