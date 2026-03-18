/*
 * XREFs of NewObjData @ 0x1C000A678
 * Callers:
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     Return @ 0x1C000A220 (Return.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0061EF8 (AMLICreateNativeNamespaceObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C00627C8 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C00628BC (AMLICreateOverrideObjectDep.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall NewObjData(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d
  __int64 v5; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  __int64 v16; // r8
  int ObjectTypeName; // eax

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = 0LL;
  if ( v4 > 0x82 )
  {
    v16 = v4 - 131;
    if ( !(_DWORD)v16 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1329874504;
      return HeapAlloc(a1, v11, v10);
    }
    if ( (_DWORD)v16 == 1 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1180191048;
      return HeapAlloc(a1, v11, v10);
    }
    goto LABEL_33;
  }
  if ( v4 == 130 )
  {
    v10 = *(_DWORD *)(a2 + 24);
    v11 = 1179337288;
    return HeapAlloc(a1, v11, v10);
  }
  if ( v4 > 8 )
  {
    v13 = v4 - 9;
    if ( !v13 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1414876488;
      return HeapAlloc(a1, v11, v10);
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1196576584;
      return HeapAlloc(a1, v11, v10);
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1397903432;
      return HeapAlloc(a1, v11, v10);
    }
    v16 = v15 - 1;
    if ( !(_DWORD)v16 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1330794568;
      return HeapAlloc(a1, v11, v10);
    }
    if ( (_DWORD)v16 == 2 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1145455176;
      return HeapAlloc(a1, v11, v10);
    }
LABEL_33:
    LogError(3222536195LL, a2, v16, a4);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
    PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
    return v5;
  }
  if ( v4 == 8 )
  {
    v10 = *(_DWORD *)(a2 + 24);
    v11 = 1413827912;
    return HeapAlloc(a1, v11, v10);
  }
  v7 = v4 - 2;
  if ( !v7 )
  {
    v10 = *(_DWORD *)(a2 + 24);
    v11 = 1381258056;
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *(_DWORD *)(a2 + 24);
    v11 = 1179992648;
    goto LABEL_9;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v16 = v9 - 1;
    if ( !(_DWORD)v16 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1430537800;
      return HeapAlloc(a1, v11, v10);
    }
    if ( (_DWORD)v16 == 2 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = 1314276680;
      return HeapAlloc(a1, v11, v10);
    }
    goto LABEL_33;
  }
  v10 = *(_DWORD *)(a2 + 24);
  v11 = 1196118088;
LABEL_9:
  a1 = (struct _SLIST_ENTRY *)gpheapGlobal;
  return HeapAlloc(a1, v11, v10);
}
