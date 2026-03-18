/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1C01484A8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiFdoGetInterruptIrql @ 0x1C01485D8 (DpiFdoGetInterruptIrql.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C0272AE8 (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  int InterruptIrqlForChain; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int8 v11; // bl
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v18; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v18);
  else
    InterruptIrqlForChain = DpiFdoGetInterruptIrql(*(_QWORD *)(v1 + 1216), &v18);
  LODWORD(v6) = InterruptIrqlForChain;
  if ( InterruptIrqlForChain < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480)
      && !*(_BYTE *)(v1 + 2623)
      && !*(_BYTE *)(v1 + 1151)
      && !*(_BYTE *)(v1 + 2624)
      && !*(_BYTE *)(v1 + 2620) )
    {
      v14 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v14 + 24) = (int)v6;
      WdLogEvent5_WdError(v14);
    }
    return (unsigned int)v6;
  }
  memset(&Parameters, 0, sizeof(Parameters));
  if ( *(_QWORD *)(v3 + 184) )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    v11 = v18;
    *(_QWORD *)(v10 + 24) = v18;
    WdLogEvent5_WdEvent(v10);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1296);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1384);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v11;
    v12 = IoConnectInterruptEx(&Parameters);
    v6 = v12;
    if ( v12 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v16 + 24) = v6;
      WdLogEvent5_WdError(v16);
      if ( (_DWORD)v6 == -1073741275 )
        LODWORD(v6) = -1073741823;
    }
    else
    {
      *(_DWORD *)(v1 + 1288) = Parameters.Version;
      *(_QWORD *)(v1 + 1304) = *Parameters.FullySpecified.InterruptObject;
    }
    return (unsigned int)v6;
  }
  if ( *(_BYTE *)(v1 + 1147) )
    return 3221226021LL;
  v15 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v15 + 24) = (int)v6;
  WdLogEvent5_WdError(v15);
  return 3221225473LL;
}
