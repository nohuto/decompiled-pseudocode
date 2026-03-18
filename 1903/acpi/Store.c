/*
 * XREFs of Store @ 0x1C001B540
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     MatchObjType @ 0x1C001B668 (MatchObjType.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  unsigned int v6; // r10d
  __int16 v7; // r10
  __int16 v8; // r11
  _OWORD *v9; // rcx
  _OWORD *v10; // r8
  int v12; // ecx
  int v13; // eax
  int v14; // r11d
  int ObjectTypeName; // eax
  __int64 v16; // [rsp+48h] [rbp+10h]

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 80) + 40LL;
  v6 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL);
  if ( (_WORD)v6 == 128 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 64LL;
  }
  else if ( (_WORD)v6 == 129 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
  }
  else if ( (unsigned __int16)v6 > 0x10u || (v12 = 81921, !_bittest(&v12, v6)) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v3 + 2));
    PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
    v3 = v16;
    goto LABEL_20;
  }
  if ( (_WORD)v6 == 128 )
  {
    if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(v3 + 2), 135LL) )
    {
      if ( v7 == v8 )
        goto LABEL_6;
      goto LABEL_12;
    }
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(135LL);
    v13 = GetObjectTypeName(*(unsigned __int16 *)(v3 + 2));
    PrintDebugMessage(207, v13, v14, 0, 0LL);
LABEL_20:
    v2 = -1072431094;
    goto LABEL_6;
  }
LABEL_12:
  if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(v3 + 2), 133LL) )
    FreeData((_QWORD *)v3);
LABEL_6:
  if ( v2 )
    return v2;
  v9 = *(_OWORD **)(a2 + 80);
  v10 = *(_OWORD **)(a2 + 88);
  if ( v10 != v9 )
  {
    *v10 = *v9;
    v10[1] = v9[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v9 + 4);
    memset(v9, 0, 0x28uLL);
    v10 = *(_OWORD **)(a2 + 88);
  }
  return WriteObject(a1, v3, v10);
}
