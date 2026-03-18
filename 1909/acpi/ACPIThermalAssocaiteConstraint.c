/*
 * XREFs of ACPIThermalAssocaiteConstraint @ 0x1C0009D34
 * Callers:
 *     ACPIThermalActivateConstraint @ 0x1C000A480 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0009DD8 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0009EE0 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0049B80 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalAssocaiteConstraint(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  bool v9; // zf

  result = a2;
  v3 = *(_QWORD *)(a1 + 608);
  if ( !*(_QWORD *)(a2 + 40) )
  {
    v5 = (_QWORD *)(a2 + 16);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5
      || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5)
      || (*v7 = v6, *(_QWORD *)(v6 + 8) = v7, v8 = *(_QWORD **)(v3 + 24), *v8 != v3 + 16) )
    {
      __fastfail(3u);
    }
    *v5 = v3 + 16;
    v5[1] = v8;
    *v8 = v5;
    *(_QWORD *)(v3 + 24) = v5;
    v9 = *(_BYTE *)(result + 52) == 0;
    *(_QWORD *)(result + 40) = a1;
    if ( v9 )
    {
      LOBYTE(v3) = *(_BYTE *)(result + 55);
      if ( (_BYTE)v3 )
        AcpiDiagTraceActiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL, v3);
    }
    else if ( *(_BYTE *)(result + 53) != 100 )
    {
      AcpiDiagTracePassiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL);
    }
    return ACPIThermalReevaluateConstraints(*(PVOID *)(a1 + 608));
  }
  return result;
}
