/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x1C000DB28
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000CDE0 (ACPIProcessorStartDevice.c)
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00A9F20 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B0E20 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C000E398 (ACPIThermalQueryCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0014664 (ACPIThermalAssocaiteConstraint.c)
 */

__int64 __fastcall ACPIThermalAcquireCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  char v4; // bp
  __int64 v5; // rbx
  KIRQL v6; // r14
  __int64 *v7; // rcx
  int v8; // eax
  __int64 result; // rax
  KIRQL v10; // al
  __int64 *v11; // rdi
  KIRQL v12; // r14
  __int64 *v13; // rbp
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  *(_BYTE *)(a1 + 616) = 1;
  v3 = (__int64 *)AcpiThermalUnclaimedConstraintList;
  v4 = 0;
  v5 = 0LL;
  v6 = v2;
  if ( (__int64 *)AcpiThermalUnclaimedConstraintList == &AcpiThermalUnclaimedConstraintList )
    goto LABEL_9;
  while ( 1 )
  {
    v17 = 0LL;
    v7 = v3;
    v3 = (__int64 *)*v3;
    v8 = AMLIGetNameSpaceObject((_BYTE *)v7 + 40, *(__int64 **)(v7[2] + 712), (unsigned __int64 *)&v17, 0);
    v5 = v17;
    if ( v8 < 0 || !v17 )
      goto LABEL_6;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 104LL) == a1 )
      break;
    AMLIDereferenceHandleEx(v17);
    v5 = 0LL;
LABEL_6:
    if ( v3 == &AcpiThermalUnclaimedConstraintList )
      goto LABEL_7;
  }
  v4 = 1;
LABEL_7:
  if ( v5 )
  {
    AMLIDereferenceHandleEx(v5);
    v5 = 0LL;
  }
LABEL_9:
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v6);
  if ( !v4 )
    return 3221225659LL;
  result = ACPIThermalQueryCoolingInterfaces(a1);
  if ( (int)result >= 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v11 = (__int64 *)AcpiThermalUnclaimedConstraintList;
    v12 = v10;
    while ( v11 != &AcpiThermalUnclaimedConstraintList )
    {
      v17 = 0LL;
      v13 = v11 - 2;
      v14 = v11[2];
      v15 = v11 + 5;
      v11 = (__int64 *)*v11;
      v16 = AMLIGetNameSpaceObject(v15, *(__int64 **)(v14 + 712), (unsigned __int64 *)&v17, 0);
      v5 = v17;
      if ( v16 >= 0 && v17 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v17 + 104LL) == a1 )
        {
          ACPIThermalAssocaiteConstraint(a1, v13);
        }
        else
        {
          AMLIDereferenceHandleEx(v17);
          v5 = 0LL;
        }
      }
    }
    if ( v5 )
      AMLIDereferenceHandleEx(v5);
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v12);
    return 0LL;
  }
  return result;
}
