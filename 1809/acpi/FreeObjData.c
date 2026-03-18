/*
 * XREFs of FreeObjData @ 0x1C0002EB0
 * Callers:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026500 (ACPIGetWorkerForInteger.c)
 *     Simulator_DuplicateObjData @ 0x1C0061674 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C0061738 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0061EF8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C00628BC (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C0067C40 (ProcessLoadTable.c)
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C0002D28 (HeapInsertFreeList.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     PerformMutexDriverCallbacks @ 0x1C000FF18 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

void __fastcall FreeObjData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // r10
  _QWORD *v9; // rax
  _QWORD *i; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *j; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r10
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  bool v33; // zf
  __int64 v34; // rbx
  __int64 v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  int ObjectTypeName; // eax

  v4 = *(unsigned __int16 *)(a1 + 2);
  if ( v4 == 4 )
  {
    v6 = *(_QWORD **)(a1 + 32);
    *((_DWORD *)v6 - 4) = 0;
    v7 = v6 - 2;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v8 = *(v6 - 1);
    v9 = *(_QWORD **)(v8 + 40);
    for ( i = (_QWORD *)(v8 + 40); v9 != i; v9 = (_QWORD *)*v9 )
    {
      if ( v6 < v9 )
        break;
    }
    v11 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v11 == v9 )
    {
      v6[1] = v11;
      *v6 = v9;
      *v11 = v6;
      v9[1] = v6;
      v12 = (_QWORD *)*v6;
      v13 = *v6 - 16LL;
      if ( (_QWORD *)*v6 != i )
      {
        v35 = *((unsigned int *)v7 + 1);
        if ( (_QWORD *)v13 == (_QWORD *)((char *)v7 + v35) )
        {
          *((_DWORD *)v7 + 1) = v35 + *(_DWORD *)(v13 + 4);
          v36 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 )
            goto LABEL_48;
          v37 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v37 != v12 )
            goto LABEL_48;
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
        }
      }
      v14 = (_QWORD *)v7[3];
      v15 = v14 - 2;
      if ( v14 != i )
      {
        v16 = *((unsigned int *)v15 + 1);
        if ( v7 == (_QWORD *)((char *)v15 + v16) )
        {
          *((_DWORD *)v15 + 1) = *((_DWORD *)v7 + 1) + v16;
          v17 = *v6;
          if ( *(_QWORD **)(*v6 + 8LL) != v6 )
            goto LABEL_48;
          v18 = (_QWORD *)v6[1];
          if ( (_QWORD *)*v18 != v6 )
            goto LABEL_48;
          *v18 = v17;
          v7 = v15;
          *(_QWORD *)(v17 + 8) = v18;
        }
      }
      if ( *(_QWORD *)(v8 + 32) > (unsigned __int64)v7 + *((unsigned int *)v7 + 1) )
      {
LABEL_13:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return;
      }
      *(_QWORD *)(v8 + 32) = v7;
      v38 = v7 + 2;
      v31 = *v38;
      if ( *(_QWORD **)(*v38 + 8LL) == v38 )
      {
        v32 = (_QWORD *)v38[1];
        v33 = *v32 == (_QWORD)v38;
LABEL_32:
        if ( v33 )
        {
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          goto LABEL_13;
        }
        goto LABEL_48;
      }
    }
    goto LABEL_48;
  }
  if ( v4 == 3 )
  {
    v19 = *(_QWORD **)(a1 + 32);
    *((_DWORD *)v19 - 4) = 0;
    v20 = v19 - 2;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v21 = *(v19 - 1);
    v22 = *(_QWORD **)(v21 + 40);
    for ( j = (_QWORD *)(v21 + 40); v22 != j; v22 = (_QWORD *)*v22 )
    {
      if ( v19 < v22 )
        break;
    }
    v24 = (_QWORD *)v22[1];
    if ( (_QWORD *)*v24 == v22 )
    {
      v19[1] = v24;
      *v19 = v22;
      *v24 = v19;
      v22[1] = v19;
      v25 = (_QWORD *)*v19;
      v26 = *v19 - 16LL;
      if ( (_QWORD *)*v19 != j )
      {
        v27 = *((unsigned int *)v20 + 1);
        if ( (_QWORD *)v26 == (_QWORD *)((char *)v20 + v27) )
        {
          *((_DWORD *)v20 + 1) = v27 + *(_DWORD *)(v26 + 4);
          v44 = *v25;
          if ( *(_QWORD **)(*v25 + 8LL) != v25 )
            goto LABEL_48;
          v45 = (_QWORD *)v25[1];
          if ( (_QWORD *)*v45 != v25 )
            goto LABEL_48;
          *v45 = v44;
          *(_QWORD *)(v44 + 8) = v45;
        }
      }
      v28 = (_QWORD *)v20[3];
      v29 = v28 - 2;
      if ( v28 != j )
      {
        v39 = *((unsigned int *)v29 + 1);
        if ( v20 == (_QWORD *)((char *)v29 + v39) )
        {
          *((_DWORD *)v29 + 1) = *((_DWORD *)v20 + 1) + v39;
          v40 = *v19;
          if ( *(_QWORD **)(*v19 + 8LL) != v19 )
            goto LABEL_48;
          v41 = (_QWORD *)v19[1];
          if ( (_QWORD *)*v41 != v19 )
            goto LABEL_48;
          *v41 = v40;
          v20 = v29;
          *(_QWORD *)(v40 + 8) = v41;
        }
      }
      if ( *(_QWORD *)(v21 + 32) > (unsigned __int64)v20 + *((unsigned int *)v20 + 1) )
        goto LABEL_13;
      *(_QWORD *)(v21 + 32) = v20;
      v30 = v20 + 2;
      v31 = *v30;
      if ( *(_QWORD **)(*v30 + 8LL) == v30 )
      {
        v32 = (_QWORD *)v30[1];
        v33 = *v32 == (_QWORD)v30;
        goto LABEL_32;
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
      goto LABEL_43;
    case 5:
    case 0x83:
      v42 = *(__int64 **)(a1 + 32);
      v43 = *v42;
      goto LABEL_41;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
      goto LABEL_43;
    case 0xE:
      v34 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v34 - 16) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v34 - 8), (unsigned int *)(v34 - 16));
      goto LABEL_13;
    case 0x82:
      v42 = *(__int64 **)(a1 + 32);
      v46 = *v42;
      if ( *v42 )
        goto LABEL_51;
      goto LABEL_52;
    case 0x84:
      v42 = *(__int64 **)(a1 + 32);
      v46 = *v42;
      if ( *v42 )
      {
LABEL_51:
        DereferenceObjectEx(v46, 0LL);
        v42 = *(__int64 **)(a1 + 32);
      }
LABEL_52:
      v43 = v42[1];
LABEL_41:
      if ( v43 )
      {
        DereferenceObjectEx(v43, 0LL);
LABEL_43:
        v42 = *(__int64 **)(a1 + 32);
      }
      HeapFree(v42);
      break;
    default:
      LogError(3222536195LL, 0x1C0000000uLL, a3, a4);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
      break;
  }
}
