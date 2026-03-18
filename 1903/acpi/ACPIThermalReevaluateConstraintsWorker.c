/*
 * XREFs of ACPIThermalReevaluateConstraintsWorker @ 0x1C002C450
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1C002C594 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x1C004977C (AcpiDiagTraceDevicePassiveCooling.c)
 */

void __fastcall ACPIThermalReevaluateConstraintsWorker(ULONG_PTR IoObject, _BYTE *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 DeviceExtension; // r15
  KIRQL v5; // bp
  __int64 **v6; // r14
  __int64 *v7; // rcx
  unsigned __int8 v8; // di
  char v9; // si
  unsigned __int8 v10; // dl
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  struct _KEVENT *v14; // rcx
  __int64 v15; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(IoObject);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( Context[44] )
  {
    v6 = (__int64 **)(Context + 16);
    do
    {
      v7 = *v6;
      v8 = 100;
      Context[44] = 0;
      v9 = 0;
      while ( v7 != (__int64 *)v6 )
      {
        v10 = v8;
        if ( *((_BYTE *)v7 + 36) )
        {
          v8 = *((_BYTE *)v7 + 37);
          if ( v8 >= v10 )
            v8 = v10;
        }
        else if ( *((_BYTE *)v7 + 39) )
        {
          v9 = 1;
        }
        v7 = (__int64 *)*v7;
      }
      KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
      if ( v8 != Context[42] )
      {
        v12 = Context[40] == 0;
        Context[42] = v8;
        if ( !v12 )
        {
          LOBYTE(v11) = v8;
          AcpiDiagTraceDevicePassiveCooling(DeviceExtension, v11);
          LOBYTE(v15) = v8;
          PoSetThermalPassiveCooling(*((_QWORD *)Context + 8), v15);
        }
      }
      if ( v9 != Context[43] )
      {
        v12 = Context[41] == 0;
        Context[43] = v9;
        if ( !v12 )
        {
          LOBYTE(v11) = v9;
          AcpiDiagTraceDeviceActiveCooling(DeviceExtension, v11);
          LOBYTE(v13) = v9;
          PoSetThermalActiveCooling(*((_QWORD *)Context + 8), v13);
        }
      }
      v5 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    }
    while ( Context[44] );
  }
  v14 = (struct _KEVENT *)*((_QWORD *)Context + 7);
  Context[45] = 0;
  if ( v14 )
    KeSetEvent(v14, 0, 0);
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
}
