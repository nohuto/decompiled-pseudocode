/*
 * XREFs of ValidateTarget @ 0x1C000AF3C
 * Callers:
 *     Index @ 0x1C000ADE0 (Index.c)
 *     ToInteger @ 0x1C000BDD0 (ToInteger.c)
 *     Load @ 0x1C00248D0 (Load.c)
 *     CondRefOf @ 0x1C002B500 (CondRefOf.c)
 *     ExprOp1_64 @ 0x1C002ED8C (ExprOp1_64.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00669C0 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0066BC0 (CopyObject.c)
 *     Divide @ 0x1C0066CE0 (Divide.c)
 *     ExprOp1_32 @ 0x1C0066D74 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0066EB0 (ExprOp2_32.c)
 *     MidString @ 0x1C00677B0 (MidString.c)
 *     ToBuffer @ 0x1C0068220 (ToBuffer.c)
 *     ToDecStr @ 0x1C00682A0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0068670 (ToHexStr.c)
 *     ToString @ 0x1C0068990 (ToString.c)
 * Callees:
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     MatchObjType @ 0x1C000A868 (MatchObjType.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // edi
  unsigned int v7; // ebp
  __int64 v8; // rbx
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v13; // rdx
  __int16 v14; // r10
  __int16 v15; // r11
  int ObjectTypeName; // eax
  int v17; // r11d
  int v18; // r8d
  int v19; // ecx

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( (_WORD)v4 == 128 )
  {
    v8 = *(_QWORD *)(a2 + 16) + 64LL;
  }
  else if ( (_WORD)v4 == 129 )
  {
    v8 = *(_QWORD *)(a2 + 16);
  }
  else if ( (unsigned __int16)v4 > 0x10u || (v10 = 81921, !_bittest(&v10, v4)) )
  {
    LogError(3222536202LL, a2, a3, a4);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
    v18 = 0;
    v19 = 208;
    goto LABEL_24;
  }
  *(_QWORD *)a4 = v8;
  if ( (_WORD)v4 != 128 )
    goto LABEL_6;
  if ( !MatchObjType(*(unsigned __int16 *)(v8 + 2), a3) )
  {
    LogError(3222536202LL, v13, a3, a4);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(v7);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
    v18 = v17;
    v19 = 207;
LABEL_24:
    PrintDebugMessage(v19, ObjectTypeName, v18, 0, 0LL);
    return (unsigned int)-1072431094;
  }
  if ( v14 == v15 )
    return v5;
LABEL_6:
  v11 = *(unsigned __int16 *)(v8 + 2);
  if ( v11 == 133 )
  {
LABEL_10:
    FreeData(v8, 133LL, a3, a4);
    return v5;
  }
  if ( *(_WORD *)(v8 + 2) )
  {
    if ( v11 <= 4 )
    {
      v11 = 133;
    }
    else if ( v11 == 5 || v11 == 14 )
    {
      return v5;
    }
  }
  if ( v11 == 133 || !v11 )
    goto LABEL_10;
  return v5;
}
