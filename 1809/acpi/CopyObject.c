/*
 * XREFs of CopyObject @ 0x1C0066BC0
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     MatchObjType @ 0x1C000A868 (MatchObjType.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     MoveObjData @ 0x1C00630E8 (MoveObjData.c)
 */

__int64 __fastcall CopyObject(struct _SLIST_ENTRY *a1, __int64 a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // eax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0LL, (__int64)&v13);
  v6 = v5;
  if ( v5 )
  {
    LogError(v5);
    AcpiDiagTraceAmlError((__int64)a1, v6);
    v8 = 33;
    goto LABEL_11;
  }
  v7 = v13;
  if ( MatchObjType(*(unsigned __int16 *)(v13 + 2), 134) )
  {
    v4 = 1;
    if ( ((*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 1) & 0xFFFD) != 0 )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)a1, -1072431098);
      v8 = 32;
LABEL_11:
      PrintDebugMessage(v8, 0LL, 0LL, 0LL, 0LL);
      return v6;
    }
  }
  MoveObjData(*(_OWORD **)(a2 + 88), *(_OWORD **)(a2 + 80));
  v10 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    v11 = WriteObject(a1, v7, v10, v9);
  else
    v11 = DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v7, v10, v9);
  v6 = v11;
  if ( v11 )
  {
    LogError(v11);
    AcpiDiagTraceAmlError((__int64)a1, v6);
    v8 = 31;
    goto LABEL_11;
  }
  return v6;
}
