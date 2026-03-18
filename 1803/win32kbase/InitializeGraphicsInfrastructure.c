/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C00C9854
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     DlpLoadDxgkrnl @ 0x1C0141FE8 (DlpLoadDxgkrnl.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rax
  IRP *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-39h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+88h] [rbp-19h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+1Fh]
  int v24; // [rsp+C8h] [rbp+27h]
  _BYTE v25[40]; // [rsp+D0h] [rbp+2Fh] BYREF
  int v26; // [rsp+108h] [rbp+67h] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v3 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
  {
    v4 = WdLogNewEntry5_WdError(0x80000000LL, v1, v2);
    *(_QWORD *)(v4 + 24) = v3;
    goto LABEL_4;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  qword_1C01A17B8 = 0x1C0000000uLL;
  gDxgkInterface.LowPart = 2492560;
  v5 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         gpDxgkDeviceObject,
         &gDxgkInterface,
         0x890u,
         &gDxgkInterface,
         0x890u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( v5 )
  {
    LODWORD(v3) = IofCallDriver(gpDxgkDeviceObject, v5);
    if ( (_DWORD)v3 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v3) = IoStatusBlock.Status;
    }
    if ( (int)v3 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v11);
      if ( PsGetProcessWin32Process(CurrentProcess) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        WdLogEvent5_WdAssertion(v18);
      }
      v26 = 0;
      QueryTable.QueryRoutine = 0LL;
      v23 = 0LL;
      v24 = 0;
      QueryTable.Name = L"DisableLddmSpriteTearDown";
      QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
      gdwDirectDrawContext = 4;
      QueryTable.DefaultLength = 4;
      QueryTable.DefaultData = &v26;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      memset(v25, 0, sizeof(v25));
      RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
LABEL_14:
      if ( (int)v3 >= 0 )
        return (unsigned int)v3;
      goto LABEL_15;
    }
    v4 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v4 + 24) = (int)v3;
LABEL_4:
    WdLogEvent5_WdError(v4);
    goto LABEL_14;
  }
  LODWORD(v3) = -1073741670;
  v9 = WdLogNewEntry5_WdError(v7, v6, v8);
  *(_QWORD *)(v9 + 24) = -1073741670LL;
  WdLogEvent5_WdError(v9);
LABEL_15:
  memset(&gDxgkInterface, 0, 0x890uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return (unsigned int)v3;
}
