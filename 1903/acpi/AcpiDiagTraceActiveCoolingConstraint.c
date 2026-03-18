/*
 * XREFs of AcpiDiagTraceActiveCoolingConstraint @ 0x1C0009EE0
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C0009C24 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0009D34 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00311A4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0049CF0 (AcpiDiagTraceThermalZoneRundown.c)
 *     AcpiThermalDestroyContraints @ 0x1C0060098 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     AcpiDiagTraceConstraintEvent @ 0x1C0009F64 (AcpiDiagTraceConstraintEvent.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

__int64 __fastcall AcpiDiagTraceActiveCoolingConstraint(__int64 a1, __int64 a2, char a3, char a4)
{
  void *v5; // r8
  __int16 v7; // [rsp+30h] [rbp-78h] BYREF
  __int16 *v8; // [rsp+80h] [rbp-28h]
  int v9; // [rsp+88h] [rbp-20h]
  int v10; // [rsp+8Ch] [rbp-1Ch]

  v9 = 2;
  v5 = &ACPI_ETW_EVENT_ACTIVE_CONSTRAINT_CHANGE;
  v10 = 0;
  v7 = a4 != 0;
  v8 = &v7;
  if ( a3 )
    v5 = &ACPI_ETW_EVENT_ACTIVE_CONSTRAINT_RUNDOWN;
  return AcpiDiagTraceConstraintEvent(a1, a2, v5);
}
