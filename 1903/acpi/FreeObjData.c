/*
 * XREFs of FreeObjData @ 0x1C0013EB0
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249A0 (ACPIGetWorkerForInteger.c)
 *     Simulator_DuplicateObjData @ 0x1C00635F4 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C00636B8 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0063E84 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00644E4 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0064848 (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C0069CA0 (ProcessLoadTable.c)
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C0007088 (PerformMutexDriverCallbacks.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C0014540 (HeapInsertFreeList.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  int v1; // eax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // r9
  _QWORD *v6; // rax
  _QWORD *i; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rbx
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *j; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  bool v29; // zf
  __int64 v30; // rbx
  _QWORD *v31; // rdi
  __int64 v32; // r10
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // r10
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned __int64 *v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == 4 )
  {
    v3 = *(_QWORD **)(a1 + 32);
    *((_DWORD *)v3 - 4) = 0;
    v4 = v3 - 2;
    byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v5 = *(v3 - 1);
    v6 = *(_QWORD **)(v5 + 40);
    for ( i = (_QWORD *)(v5 + 40); v6 != i; v6 = (_QWORD *)*v6 )
    {
      if ( v3 < v6 )
        break;
    }
    v8 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v8 == v6 )
    {
      v3[1] = v8;
      *v3 = v6;
      *v8 = v3;
      v6[1] = v3;
      v9 = (_QWORD *)*v3;
      v10 = *v3 - 16LL;
      if ( (_QWORD *)*v3 != i )
      {
        v35 = *((unsigned int *)v4 + 1);
        if ( (_QWORD *)v10 == (_QWORD *)((char *)v4 + v35) )
        {
          *((_DWORD *)v4 + 1) = v35 + *(_DWORD *)(v10 + 4);
          v36 = *v9;
          if ( *(_QWORD **)(*v9 + 8LL) != v9 )
            goto LABEL_48;
          v37 = (_QWORD *)v9[1];
          if ( (_QWORD *)*v37 != v9 )
            goto LABEL_48;
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
        }
      }
      v11 = (_QWORD *)v4[3];
      v12 = v11 - 2;
      if ( v11 != i )
      {
        v13 = *((unsigned int *)v12 + 1);
        if ( v4 == (_QWORD *)((char *)v12 + v13) )
        {
          *((_DWORD *)v12 + 1) = *((_DWORD *)v4 + 1) + v13;
          v14 = *v3;
          if ( *(_QWORD **)(*v3 + 8LL) != v3 )
            goto LABEL_48;
          v15 = (_QWORD *)v3[1];
          if ( (_QWORD *)*v15 != v3 )
            goto LABEL_48;
          *v15 = v14;
          v4 = v12;
          *(_QWORD *)(v14 + 8) = v15;
        }
      }
      if ( *(_QWORD *)(v5 + 32) > (unsigned __int64)v4 + *((unsigned int *)v4 + 1) )
      {
LABEL_13:
        KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
        return;
      }
      *(_QWORD *)(v5 + 32) = v4;
      v31 = v4 + 2;
      v27 = *v31;
      if ( *(_QWORD **)(*v31 + 8LL) == v31 )
      {
        v28 = (_QWORD *)v31[1];
        v29 = *v28 == (_QWORD)v31;
LABEL_27:
        if ( v29 )
        {
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          goto LABEL_13;
        }
        goto LABEL_48;
      }
    }
    goto LABEL_48;
  }
  if ( v1 == 3 )
  {
    v16 = *(_QWORD **)(a1 + 32);
    *((_DWORD *)v16 - 4) = 0;
    v17 = v16 - 2;
    byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v18 = *(v16 - 1);
    v19 = *(_QWORD **)(v18 + 40);
    for ( j = (_QWORD *)(v18 + 40); v19 != j; v19 = (_QWORD *)*v19 )
    {
      if ( v16 < v19 )
        break;
    }
    v21 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v21 == v19 )
    {
      v16[1] = v21;
      *v16 = v19;
      *v21 = v16;
      v19[1] = v16;
      v22 = (_QWORD *)*v16;
      v23 = *v16 - 16LL;
      if ( (_QWORD *)*v16 != j )
      {
        v32 = *((unsigned int *)v17 + 1);
        if ( (_QWORD *)v23 == (_QWORD *)((char *)v17 + v32) )
        {
          *((_DWORD *)v17 + 1) = v32 + *(_DWORD *)(v23 + 4);
          v33 = *v22;
          if ( *(_QWORD **)(*v22 + 8LL) != v22 )
            goto LABEL_48;
          v34 = (_QWORD *)v22[1];
          if ( (_QWORD *)*v34 != v22 )
            goto LABEL_48;
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
        }
      }
      v24 = (_QWORD *)v17[3];
      v25 = v24 - 2;
      if ( v24 != j )
      {
        v38 = *((unsigned int *)v25 + 1);
        if ( v17 == (_QWORD *)((char *)v25 + v38) )
        {
          *((_DWORD *)v25 + 1) = *((_DWORD *)v17 + 1) + v38;
          v39 = *v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 )
            goto LABEL_48;
          v40 = (_QWORD *)v16[1];
          if ( (_QWORD *)*v40 != v16 )
            goto LABEL_48;
          *v40 = v39;
          v17 = v25;
          *(_QWORD *)(v39 + 8) = v40;
        }
      }
      if ( *(_QWORD *)(v18 + 32) > (unsigned __int64)v17 + *((unsigned int *)v17 + 1) )
        goto LABEL_13;
      *(_QWORD *)(v18 + 32) = v17;
      v26 = v17 + 2;
      v27 = *v26;
      if ( *(_QWORD **)(*v26 + 8LL) == v26 )
      {
        v28 = (_QWORD *)v26[1];
        v29 = *v28 == (_QWORD)v26;
        goto LABEL_27;
      }
    }
LABEL_48:
    __fastfail(3u);
  }
  switch ( *(_WORD *)(a1 + 2) )
  {
    case 2:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
      goto LABEL_46;
    case 5:
    case 0x83:
      v41 = *(unsigned __int64 **)(a1 + 32);
      v42 = *v41;
      goto LABEL_44;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0LL, 0LL, 0);
      goto LABEL_46;
    case 0xE:
      v30 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v30 - 16) = 0;
      byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v30 - 8), v30 - 16);
      goto LABEL_13;
    case 0x82:
      v41 = *(unsigned __int64 **)(a1 + 32);
      v43 = *v41;
      if ( *v41 )
        goto LABEL_51;
      goto LABEL_52;
    case 0x84:
      v41 = *(unsigned __int64 **)(a1 + 32);
      v43 = *v41;
      if ( *v41 )
      {
LABEL_51:
        DereferenceObjectEx(v43);
        v41 = *(unsigned __int64 **)(a1 + 32);
      }
LABEL_52:
      v42 = v41[1];
LABEL_44:
      if ( v42 )
      {
        DereferenceObjectEx(v42);
LABEL_46:
        v41 = *(unsigned __int64 **)(a1 + 32);
      }
      HeapFree(v41);
      break;
    default:
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
      break;
  }
}
