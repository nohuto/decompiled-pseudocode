/*
 * XREFs of ndisPowerIrpWorker @ 0x1C00A6E60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisSetPower @ 0x1C0013948 (ndisSetPower.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00A68C8 (WPP_RECORDER_SF_qs.c)
 *     WPP_RECORDER_SF_qsD @ 0x1C00A69F0 (WPP_RECORDER_SF_qsD_ea_1C00A69F0.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 */

void __fastcall ndisPowerIrpWorker(PIRP Irp, __int64 a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rdi
  const char *v6; // rdx
  int Power; // eax
  __int64 v8; // r9
  const char *v9; // rdx
  int v10; // [rsp+20h] [rbp-28h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (__int64)CurrentStackLocation->DeviceObject->DeviceExtension;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = "SET";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v6 = "QUERY";
    WPP_RECORDER_SF_qs(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v6, a3, 151);
  }
  if ( CurrentStackLocation->MinorFunction == 3 )
    Power = ndisQueryPower(Irp);
  else
    Power = ndisSetPower(Irp, (__int64)CurrentStackLocation, DeviceExtension);
  if ( (Power & 0xC0000000) == 0xC0000000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = "Set";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v9 = "Query";
    WPP_RECORDER_SF_qsD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)v9, (__int64)"Query", v8, v10);
  }
  ndisDereferenceMiniport(DeviceExtension, 0xDu);
}
