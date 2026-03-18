/*
 * XREFs of HeapFree @ 0x1C0001FAC
 * Callers:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     ParseRelease @ 0x1C0003260 (ParseRelease.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     FindNSObjMainNoLock @ 0x1C0013AC0 (FindNSObjMainNoLock.c)
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017200 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018130 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C00186D0 (GetPciAddressWorker.c)
 *     ParseFieldList @ 0x1C00216F8 (ParseFieldList.c)
 *     ParseLoad @ 0x1C0022E60 (ParseLoad.c)
 *     PreserveWriteObj @ 0x1C0023D40 (PreserveWriteObj.c)
 *     WriteCookAccess @ 0x1C0029190 (WriteCookAccess.c)
 *     ProcessIncDec @ 0x1C002A1D0 (ProcessIncDec.c)
 *     Simulator_Free_Arguments @ 0x1C0061738 (Simulator_Free_Arguments.c)
 *     FreeObjOwner @ 0x1C0062D20 (FreeObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C00648AC (LoadFieldUnitDDB.c)
 *     ProcessSleep @ 0x1C0064F20 (ProcessSleep.c)
 *     RawFieldAccess @ 0x1C0065834 (RawFieldAccess.c)
 *     ProcessDivide @ 0x1C0067AF0 (ProcessDivide.c)
 *     ProcessLoadTable @ 0x1C0067C40 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C00680F0 (ProcessWait.c)
 *     ParseFieldConnection @ 0x1C0069484 (ParseFieldConnection.c)
 *     ParseNestedContext @ 0x1C0069730 (ParseNestedContext.c)
 *     ParseUnload @ 0x1C0069850 (ParseUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall HeapFree(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // r9
  _QWORD *v4; // r8
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r10
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax

  v1 = a1 - 2;
  *((_DWORD *)a1 - 4) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v3 = v1[1];
  v4 = (_QWORD *)(v3 + 40);
  for ( i = *(_QWORD **)(v3 + 40); i != v4 && a1 >= i; i = (_QWORD *)*i )
    ;
  v6 = (_QWORD *)i[1];
  if ( (_QWORD *)*v6 != i )
    goto LABEL_21;
  *a1 = i;
  a1[1] = v6;
  *v6 = a1;
  i[1] = a1;
  v7 = (_QWORD *)*a1;
  v8 = *a1 - 16LL;
  if ( (_QWORD *)*a1 != v4 )
  {
    v14 = *((unsigned int *)v1 + 1);
    if ( (_QWORD *)v8 == (_QWORD *)((char *)v1 + v14) )
    {
      *((_DWORD *)v1 + 1) = *(_DWORD *)(v8 + 4) + v14;
      v15 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_21;
      v16 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v16 != v7 )
        goto LABEL_21;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
  }
  v9 = (_QWORD *)v1[3];
  v10 = v9 - 2;
  if ( v9 != v4 )
  {
    v17 = *((unsigned int *)v10 + 1);
    if ( v1 == (_QWORD *)((char *)v10 + v17) )
    {
      *((_DWORD *)v10 + 1) = *((_DWORD *)v1 + 1) + v17;
      v18 = *a1;
      if ( *(_QWORD **)(*a1 + 8LL) != a1 )
        goto LABEL_21;
      v19 = (_QWORD *)a1[1];
      if ( (_QWORD *)*v19 != a1 )
        goto LABEL_21;
      *v19 = v18;
      v1 = v10;
      *(_QWORD *)(v18 + 8) = v19;
    }
  }
  if ( *(_QWORD *)(v3 + 32) <= (unsigned __int64)v1 + *((unsigned int *)v1 + 1) )
  {
    *(_QWORD *)(v3 + 32) = v1;
    v11 = v1 + 2;
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) == v11 )
    {
      v13 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v13 == v11 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        goto LABEL_10;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_10:
  KeReleaseSpinLock(&gmutHeap, NewIrql);
}
