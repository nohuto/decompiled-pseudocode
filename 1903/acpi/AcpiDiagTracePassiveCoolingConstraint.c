/*
 * XREFs of AcpiDiagTracePassiveCoolingConstraint @ 0x1C0049B80
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

void __fastcall AcpiDiagTracePassiveCoolingConstraint(__int64 a1, __int64 a2, char a3, char a4)
{
  const EVENT_DESCRIPTOR *v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-68h] BYREF
  char *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]
  char v10; // [rsp+B8h] [rbp+20h] BYREF

  v10 = a4;
  v7 = &v10;
  v5 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_CHANGE;
  v9 = 0;
  v8 = 1;
  if ( a3 )
    v5 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN;
  AcpiDiagTraceConstraintEvent(a1, a2, v5, (int)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN, &v6);
}
