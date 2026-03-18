/*
 * XREFs of ACPIThermalActivateConstraint @ 0x1C000A480
 * Callers:
 *     ACPIThermalBuildConstraints @ 0x1C0093090 (ACPIThermalBuildConstraints.c)
 * Callees:
 *     ACPIThermalAssocaiteConstraint @ 0x1C0009D34 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000A814 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C000A838 (ACPIThermalQueryCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 */

void __fastcall ACPIThermalActivateConstraint(_QWORD *a1)
{
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v2 = *(_QWORD *)(a1[4] + 200LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v4 = v2 + 176;
  v5 = *(_QWORD **)(v4 + 8);
  if ( *v5 != v4
    || (*a1 = v4,
        a1[1] = v5,
        v6 = a1 + 2,
        *v5 = a1,
        *(_QWORD *)(v4 + 8) = a1,
        v7 = (_QWORD *)qword_1C00819F8,
        *(__int64 **)qword_1C00819F8 != &AcpiThermalUnclaimedConstraintList) )
  {
    __fastfail(3u);
  }
  a1[3] = qword_1C00819F8;
  *v6 = &AcpiThermalUnclaimedConstraintList;
  *v7 = v6;
  qword_1C00819F8 = (__int64)(a1 + 2);
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
  AMLIGetNameSpaceObject(a1 + 7);
}
