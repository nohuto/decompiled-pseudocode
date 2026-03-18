/*
 * XREFs of ACPIThermalUpdateConstraints @ 0x1C0014550
 * Callers:
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0014708 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C001474C (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C00147FC (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C00484F0 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

void __fastcall ACPIThermalUpdateConstraints(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r9
  KIRQL v3; // r15
  __int64 *i; // rbx
  int v5; // ecx
  __int64 v6; // rcx
  char v7; // si
  unsigned int v8; // eax
  unsigned int v9; // ecx
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx

  v1 = *(_QWORD *)(a1 + 200);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  for ( i = *(__int64 **)(v1 + 176); i != (__int64 *)(v1 + 176); i = (__int64 *)*i )
  {
    v7 = 0;
    if ( *((_BYTE *)i + 52) )
    {
      v5 = *(_DWORD *)(v1 + 96);
      if ( *((unsigned __int8 *)i + 53) != v5 )
      {
        v12 = i[5];
        v7 = 1;
        *((_BYTE *)i + 53) = v5;
        if ( v12 )
        {
          LOBYTE(v2) = v5;
          AcpiDiagTracePassiveCoolingConstraint(i[4], v12, 0LL, v2);
        }
      }
    }
    else
    {
      v8 = *((unsigned __int8 *)i + 54);
      v9 = *(_DWORD *)(v1 + 92);
      v10 = v8 >= v9;
      if ( *((_BYTE *)i + 55) )
      {
        if ( v8 >= v9 )
          goto LABEL_3;
      }
      else if ( v8 < v9 )
      {
        goto LABEL_3;
      }
      v11 = i[5];
      v7 = 1;
      *((_BYTE *)i + 55) = v10;
      if ( v11 )
      {
        LOBYTE(v2) = v8 >= v9;
        AcpiDiagTraceActiveCoolingConstraint(i[4], v11, 0LL, v2);
        AcpiDiagTraceActiveCoolingDevicePower(i[4], i[5], *((unsigned __int8 *)i + 54), *((_DWORD *)i + 12), v10);
      }
    }
LABEL_3:
    v6 = i[5];
    if ( v6 )
    {
      if ( v7 )
        ACPIThermalReevaluateConstraints(*(PVOID *)(v6 + 608));
    }
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
}
