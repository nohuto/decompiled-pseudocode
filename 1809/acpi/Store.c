/*
 * XREFs of Store @ 0x1C000A740
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     MatchObjType @ 0x1C000A868 (MatchObjType.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // r10
  __int16 v13; // r11
  _OWORD *v14; // rcx
  _OWORD *v15; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  int v21; // eax
  int v22; // r11d
  int ObjectTypeName; // eax
  __int64 v24; // [rsp+48h] [rbp+10h]

  v4 = 0;
  v5 = *(_QWORD *)(a2 + 80) + 40LL;
  v8 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL);
  if ( (_WORD)v8 == 128 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 64LL;
  }
  else if ( (_WORD)v8 == 129 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
  }
  else if ( (unsigned __int16)v8 > 0x10u || (v20 = 81921, !_bittest(&v20, v8)) )
  {
    LogError(3222536202LL, a2, a3, a4);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
    v5 = v24;
    goto LABEL_20;
  }
  if ( (_WORD)v8 == 128 )
  {
    if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(v5 + 2), 135LL) )
    {
      if ( v12 == v13 )
        goto LABEL_6;
      goto LABEL_12;
    }
    LogError(3222536202LL, v9, v10, v11);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(135LL);
    v21 = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    PrintDebugMessage(207, v21, v22, 0, 0LL);
LABEL_20:
    v4 = -1072431094;
    goto LABEL_6;
  }
LABEL_12:
  if ( (unsigned __int8)MatchObjType(*(unsigned __int16 *)(v5 + 2), 133LL) )
    FreeData(v5, v17, v18, v19);
LABEL_6:
  if ( v4 )
    return v4;
  v14 = *(_OWORD **)(a2 + 80);
  v15 = *(_OWORD **)(a2 + 88);
  if ( v15 != v14 )
  {
    *v15 = *v14;
    v15[1] = v14[1];
    *((_QWORD *)v15 + 4) = *((_QWORD *)v14 + 4);
    memset(v14, 0, 0x28uLL);
    v15 = *(_OWORD **)(a2 + 88);
  }
  return WriteObject(a1, v5, v15);
}
