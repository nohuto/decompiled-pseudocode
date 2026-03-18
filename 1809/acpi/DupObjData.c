/*
 * XREFs of DupObjData @ 0x1C000A090
 * Callers:
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     Return @ 0x1C000A220 (Return.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     EvalPackageElement @ 0x1C0011FB4 (EvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     Simulator_Copy_Arguments @ 0x1C00615A8 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C0061674 (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C0063414 (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C0066BC0 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C0067C40 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C0069730 (ParseNestedContext.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall DupObjData(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v6; // r15
  unsigned int v7; // ebp
  __int64 result; // rax
  int v9; // eax
  void *v10; // r14
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  _DWORD *v16; // r14
  int v17; // edi
  _DWORD *v18; // rcx
  _DWORD *v19; // r12
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int ObjectTypeName; // eax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx

  v6 = a1;
  v7 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v9 = *(unsigned __int16 *)(a3 + 2);
  v10 = 0LL;
  if ( v9 == 4 )
  {
    v11 = 1196118088;
    goto LABEL_6;
  }
  if ( v9 == 3 )
  {
    v11 = 1179992648;
LABEL_6:
    a1 = (struct _SLIST_ENTRY *)gpheapGlobal;
LABEL_7:
    v10 = (void *)HeapAlloc(a1, v11, *(_DWORD *)(a3 + 24));
    goto LABEL_8;
  }
  switch ( *(_WORD *)(a3 + 2) )
  {
    case 2:
      v11 = 1381258056;
      goto LABEL_6;
    case 5:
      v11 = 1430537800;
      goto LABEL_7;
    case 7:
      v11 = 1314276680;
      goto LABEL_7;
    case 8:
      v11 = 1413827912;
      goto LABEL_7;
    case 9:
      v11 = 1414876488;
      goto LABEL_7;
    case 0xA:
      v11 = 1196576584;
      goto LABEL_7;
    case 0xB:
      v11 = 1397903432;
      goto LABEL_7;
    case 0xC:
      v11 = 1330794568;
      goto LABEL_7;
    case 0xE:
      v11 = 1145455176;
      goto LABEL_7;
    case 0x82:
      v11 = 1179337288;
      goto LABEL_7;
    case 0x83:
      v11 = 1329874504;
      goto LABEL_7;
    case 0x84:
      v11 = 1180191048;
      goto LABEL_7;
    default:
      LogError(3222536195LL, 0x1C0000000uLL, a3, a4);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
      PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
      break;
  }
LABEL_8:
  *(_QWORD *)(a2 + 32) = v10;
  if ( v10 )
  {
    memmove(v10, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v15 = *(unsigned __int16 *)(a2 + 2);
    if ( v15 == 4 )
    {
      v16 = *(_DWORD **)(a3 + 32);
      v17 = 0;
      v18 = *(_DWORD **)(a2 + 32);
      *v18 = *v16;
      if ( (int)*v16 > 0 )
      {
        v19 = v18 + 2;
        do
        {
          v7 = DupObjData(v6, &v19[10 * v17], &v16[10 * v17 + 2]);
          if ( v7 )
            break;
          ++v17;
        }
        while ( v17 < *v16 );
      }
    }
    else
    {
      v20 = v15 - 5;
      if ( !v20 )
        goto LABEL_45;
      v21 = v20 - 125;
      if ( !v21 )
      {
        v25 = *(_QWORD **)(a2 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v25 + 112LL));
          v25 = *(_QWORD **)(a2 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v25[1] + 112LL));
        goto LABEL_14;
      }
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v24 = *(_QWORD **)(a2 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v24[1] + 112LL));
            v24 = *(_QWORD **)(a2 + 32);
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*v24 + 112LL));
        }
      }
      else
      {
LABEL_45:
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
      }
    }
LABEL_14:
    *(_WORD *)a2 &= ~1u;
    result = v7;
    _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
    return result;
  }
  LogError(3221225626LL, v12, v13, v14);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
