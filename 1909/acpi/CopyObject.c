/*
 * XREFs of CopyObject @ 0x1C0068C20
 * Callers:
 *     <none>
 * Callees:
 *     MatchObjType @ 0x1C001B668 (MatchObjType.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     MoveObjData @ 0x1C0065098 (MoveObjData.c)
 */

__int64 __fastcall CopyObject(struct _SLIST_ENTRY *a1, __int64 a2)
{
  char v4; // bp
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // r8
  int v10; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0, (__int64)&v12);
  v6 = v5;
  if ( v5 )
  {
    LogError(v5);
    AcpiDiagTraceAmlError((__int64)a1, v6);
    v8 = 33;
    goto LABEL_11;
  }
  v7 = v12;
  if ( MatchObjType(*(unsigned __int16 *)(v12 + 2), 134) )
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
  v9 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    v10 = WriteObject(a1, v7, v9);
  else
    v10 = DupObjData(gpheapGlobal, v7, v9);
  v6 = v10;
  if ( v10 )
  {
    LogError(v10);
    AcpiDiagTraceAmlError((__int64)a1, v6);
    v8 = 31;
    goto LABEL_11;
  }
  return v6;
}
