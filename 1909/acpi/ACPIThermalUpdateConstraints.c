/*
 * XREFs of ACPIThermalUpdateConstraints @ 0x1C0009C24
 * Callers:
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0009DD8 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0009E1C (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0009EE0 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0049B80 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

void __fastcall ACPIThermalUpdateConstraints(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r9
  KIRQL v3; // r15
  __int64 *i; // rbx
  __int64 v5; // rcx
  char v6; // bp
  unsigned int v7; // eax
  unsigned int v8; // ecx
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx

  v1 = *(_QWORD *)(a1 + 200);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  for ( i = *(__int64 **)(v1 + 176); i != (__int64 *)(v1 + 176); i = (__int64 *)*i )
  {
    v6 = 0;
    if ( *((_BYTE *)i + 52) )
    {
      if ( *((unsigned __int8 *)i + 53) != *(_DWORD *)(v1 + 96) )
      {
        v11 = i[5];
        v6 = 1;
        *((_BYTE *)i + 53) = *(_BYTE *)(v1 + 96);
        if ( v11 )
          AcpiDiagTracePassiveCoolingConstraint(i[4], v11, 0LL);
      }
    }
    else
    {
      v7 = *((unsigned __int8 *)i + 54);
      v8 = *(_DWORD *)(v1 + 92);
      v9 = v7 >= v8;
      if ( *((_BYTE *)i + 55) )
      {
        if ( v7 >= v8 )
          goto LABEL_3;
      }
      else if ( v7 < v8 )
      {
        goto LABEL_3;
      }
      v10 = i[5];
      v6 = 1;
      *((_BYTE *)i + 55) = v9;
      if ( v10 )
      {
        LOBYTE(v2) = v7 >= v8;
        AcpiDiagTraceActiveCoolingConstraint(i[4], v10, 0LL, v2);
        AcpiDiagTraceActiveCoolingDevicePower(i[4], i[5], *((unsigned __int8 *)i + 54), *((_DWORD *)i + 12), v9);
      }
    }
LABEL_3:
    v5 = i[5];
    if ( v5 )
    {
      if ( v6 )
        ACPIThermalReevaluateConstraints(*(PVOID *)(v5 + 608));
    }
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
}
