/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x1C00304E0
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFanStopDevice @ 0x1C0053904 (ACPIFanStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00AA190 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AA300 (ACPIBusIrpStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00B0F50 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0014708 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C00147FC (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C00484F0 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r9
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v4 = *(_QWORD **)(a1 + 608);
  v5 = v2;
  *(_BYTE *)(a1 + 616) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    v7 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v8 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v8 == v4 )
      {
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        v9 = (_QWORD *)v4[2];
        if ( v9 == v4 + 2 )
        {
LABEL_16:
          ACPIThermalReevaluateConstraints(v4);
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v4[7] = &Event;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          PoDeleteThermalRequest(v4[8]);
          IoFreeWorkItem((PIO_WORKITEM)v4[6]);
          ExFreePoolWithTag(v4, 0x54706341u);
          return 0LL;
        }
        while ( 1 )
        {
          v10 = v9;
          v11 = v9;
          v9 = (_QWORD *)*v9;
          if ( *((_BYTE *)v10 + 36) )
          {
            if ( *((_BYTE *)v10 + 37) != 100 )
            {
              LOBYTE(v3) = 100;
              AcpiDiagTracePassiveCoolingConstraint(v10[2], v10[3], 0LL, v3);
            }
          }
          else if ( *((_BYTE *)v10 + 39) )
          {
            AcpiDiagTraceActiveCoolingConstraint(v10[2], v10[3], 0, 0);
          }
          v10[3] = 0LL;
          v12 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) != v11 )
            break;
          v13 = (_QWORD *)v11[1];
          if ( (_QWORD *)*v13 != v11 )
            break;
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          v14 = (_QWORD *)qword_1C007F9F8;
          if ( *(__int64 **)qword_1C007F9F8 != &AcpiThermalUnclaimedConstraintList )
            break;
          *v11 = &AcpiThermalUnclaimedConstraintList;
          v11[1] = v14;
          *v14 = v11;
          qword_1C007F9F8 = (__int64)v11;
          if ( v9 == v4 + 2 )
            goto LABEL_16;
        }
      }
    }
    __fastfail(3u);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  return 0LL;
}
