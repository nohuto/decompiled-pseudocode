/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1C015DC0C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiFdoGetInterruptIrql @ 0x1C015DD3C (DpiFdoGetInterruptIrql.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C02ADF1C (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  int InterruptIrqlForChain; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int8 v14; // bl
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v23; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v23);
  else
    InterruptIrqlForChain = DpiFdoGetInterruptIrql(*(_QWORD *)(v1 + 1288), &v23);
  LODWORD(v8) = InterruptIrqlForChain;
  if ( InterruptIrqlForChain < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480)
      && !*(_BYTE *)(v1 + 2695)
      && !*(_BYTE *)(v1 + 1159)
      && !*(_BYTE *)(v1 + 2696)
      && !*(_BYTE *)(v1 + 2692) )
    {
      v19 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v19 + 24) = (int)v8;
      WdLogEvent5_WdError(v19);
    }
    return (unsigned int)v8;
  }
  memset(&Parameters, 0, sizeof(Parameters));
  if ( *(_QWORD *)(v3 + 184) )
  {
    v13 = WdLogNewEntry5_WdEvent(v11);
    v14 = v23;
    *(_QWORD *)(v13 + 24) = v23;
    WdLogEvent5_WdEvent(v13);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1368);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1456);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v14;
    v15 = IoConnectInterruptEx(&Parameters);
    v8 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v21 + 24) = v8;
      WdLogEvent5_WdError(v21);
      if ( (_DWORD)v8 == -1073741275 )
        LODWORD(v8) = -1073741823;
    }
    else
    {
      *(_DWORD *)(v1 + 1360) = Parameters.Version;
      *(_QWORD *)(v1 + 1376) = *Parameters.FullySpecified.InterruptObject;
    }
    return (unsigned int)v8;
  }
  if ( *(_BYTE *)(v1 + 1155) )
    return 3221226021LL;
  v20 = WdLogNewEntry5_WdError(v11, v10, v12);
  *(_QWORD *)(v20 + 24) = (int)v8;
  WdLogEvent5_WdError(v20);
  return 3221225473LL;
}
