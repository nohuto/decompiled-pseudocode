/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x1C00311A4
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0011E50 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFanStopDevice @ 0x1C0055364 (ACPIFanStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00AD860 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AD9E0 (ACPIBusIrpStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B48E0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0009DD8 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0009EE0 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0049B80 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // bp
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = *(_QWORD **)(a1 + 608);
  v4 = v2;
  *(_BYTE *)(a1 + 616) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    v6 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) == v3 )
    {
      v7 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v7 == v3 )
      {
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = (_QWORD *)v3[2];
        if ( v8 == v3 + 2 )
        {
LABEL_16:
          ACPIThermalReevaluateConstraints(v3);
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v3[7] = &Event;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          PoDeleteThermalRequest(v3[8]);
          IoFreeWorkItem((PIO_WORKITEM)v3[6]);
          ExFreePoolWithTag(v3, 0x54706341u);
          return 0LL;
        }
        while ( 1 )
        {
          v9 = v8;
          v10 = v8;
          v8 = (_QWORD *)*v8;
          if ( *((_BYTE *)v9 + 36) )
          {
            if ( *((_BYTE *)v9 + 37) != 100 )
              AcpiDiagTracePassiveCoolingConstraint(v9[2], v9[3], 0LL);
          }
          else if ( *((_BYTE *)v9 + 39) )
          {
            AcpiDiagTraceActiveCoolingConstraint(v9[2], v9[3], 0, 0);
          }
          v9[3] = 0LL;
          v11 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 )
            break;
          v12 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v12 != v10 )
            break;
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          v13 = (_QWORD *)qword_1C00819F8;
          if ( *(__int64 **)qword_1C00819F8 != &AcpiThermalUnclaimedConstraintList )
            break;
          *v10 = &AcpiThermalUnclaimedConstraintList;
          v10[1] = v13;
          *v13 = v10;
          qword_1C00819F8 = (__int64)v10;
          if ( v8 == v3 + 2 )
            goto LABEL_16;
        }
      }
    }
    __fastfail(3u);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  return 0LL;
}
