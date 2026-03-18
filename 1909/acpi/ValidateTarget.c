/*
 * XREFs of ValidateTarget @ 0x1C001BBA0
 * Callers:
 *     Index @ 0x1C001AEF0 (Index.c)
 *     Load @ 0x1C001E7B0 (Load.c)
 *     ExprOp1_64 @ 0x1C001ED2C (ExprOp1_64.c)
 *     CondRefOf @ 0x1C001F180 (CondRefOf.c)
 *     ToInteger @ 0x1C002AAB0 (ToInteger.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0068A20 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0068C20 (CopyObject.c)
 *     Divide @ 0x1C0068D40 (Divide.c)
 *     ExprOp1_32 @ 0x1C0068DD4 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0068F10 (ExprOp2_32.c)
 *     MidString @ 0x1C0069810 (MidString.c)
 *     ToBuffer @ 0x1C006A280 (ToBuffer.c)
 *     ToDecStr @ 0x1C006A300 (ToDecStr.c)
 *     ToHexStr @ 0x1C006A6D0 (ToHexStr.c)
 *     ToString @ 0x1C006A9F0 (ToString.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     MatchObjType @ 0x1C001B668 (MatchObjType.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // edi
  __int64 v8; // rbx
  int v10; // ecx
  unsigned int v11; // eax
  __int16 v13; // r10
  __int16 v14; // r11
  int ObjectTypeName; // eax
  int v16; // r11d
  int v17; // r8d
  int v18; // ecx

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = 0;
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
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
    v17 = 0;
    v18 = 208;
    goto LABEL_24;
  }
  *(_QWORD *)a4 = v8;
  if ( (_WORD)v4 != 128 )
    goto LABEL_6;
  if ( !MatchObjType(*(unsigned __int16 *)(v8 + 2), a3) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(a3);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
    v17 = v16;
    v18 = 207;
LABEL_24:
    PrintDebugMessage(v18, ObjectTypeName, v17, 0, 0LL);
    return (unsigned int)-1072431094;
  }
  if ( v13 == v14 )
    return v5;
LABEL_6:
  v11 = *(unsigned __int16 *)(v8 + 2);
  if ( v11 == 133 )
  {
LABEL_10:
    FreeData((_QWORD *)v8);
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
