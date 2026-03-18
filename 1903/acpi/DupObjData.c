/*
 * XREFs of DupObjData @ 0x1C001B9B0
 * Callers:
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     Return @ 0x1C001B880 (Return.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     EvalPackageElement @ 0x1C00247D0 (EvalPackageElement.c)
 *     Simulator_Copy_Arguments @ 0x1C0063528 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C00635F4 (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C00653C4 (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C0068C20 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C0069CA0 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C006B790 (ParseNestedContext.c)
 * Callees:
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     NewObjData @ 0x1C001BAD0 (NewObjData.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall DupObjData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  __int64 result; // rax
  void *v8; // rax
  int v9; // ecx
  _DWORD *v10; // rcx
  _DWORD *v11; // r15
  int v12; // edi
  _DWORD *v13; // r12
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx

  v6 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v8 = (void *)NewObjData(a1, a3);
  *(_QWORD *)(a2 + 32) = v8;
  if ( v8 )
  {
    memmove(v8, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v9 = *(unsigned __int16 *)(a2 + 2);
    if ( v9 == 4 )
    {
      v10 = *(_DWORD **)(a2 + 32);
      v11 = *(_DWORD **)(a3 + 32);
      v12 = 0;
      *v10 = *v11;
      if ( (int)*v11 > 0 )
      {
        v13 = v10 + 2;
        do
        {
          v6 = DupObjData(a1, &v13[10 * v12], &v11[10 * v12 + 2]);
          if ( v6 )
            break;
          ++v12;
        }
        while ( v12 < *v11 );
      }
    }
    else
    {
      v14 = v9 - 5;
      if ( !v14 )
        goto LABEL_25;
      v15 = v14 - 125;
      if ( !v15 )
      {
        v18 = *(_QWORD **)(a2 + 32);
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*v18 + 112LL));
          v18 = *(_QWORD **)(a2 + 32);
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v18[1] + 112LL));
        goto LABEL_10;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          v17 = *(_QWORD **)(a2 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v17[1] + 112LL));
            v17 = *(_QWORD **)(a2 + 32);
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*v17 + 112LL));
        }
      }
      else
      {
LABEL_25:
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
      }
    }
LABEL_10:
    *(_WORD *)a2 &= ~1u;
    result = v6;
    _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
    return result;
  }
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
