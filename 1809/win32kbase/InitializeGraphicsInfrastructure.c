/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C0090A94
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     DlpLoadDxgkrnl @ 0x1C0090C48 (DlpLoadDxgkrnl.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rbx
  IRP *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-49h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+80h] [rbp-29h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+Fh]
  int v23; // [rsp+C0h] [rbp+17h]
  _BYTE v24[40]; // [rsp+C8h] [rbp+1Fh] BYREF
  int v25; // [rsp+110h] [rbp+67h] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v3 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
  {
    v16 = WdLogNewEntry5_WdError(0x80000000LL, v1, v2);
    *(_QWORD *)(v16 + 24) = v3;
    goto LABEL_14;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  qword_1C01CD658 = 0x1C0000000uLL;
  gDxgkInterface.LowPart = 2623624;
  v4 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         gpDxgkDeviceObject,
         &gDxgkInterface,
         0x888u,
         &gDxgkInterface,
         0x888u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( v4 )
  {
    LODWORD(v3) = IofCallDriver(gpDxgkDeviceObject, v4);
    if ( (_DWORD)v3 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v3) = IoStatusBlock.Status;
    }
    if ( (int)v3 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v9);
      if ( PsGetProcessWin32Process(CurrentProcess) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
        WdLogEvent5_WdAssertion(v18);
      }
      v25 = 0;
      QueryTable.QueryRoutine = 0LL;
      v22 = 0LL;
      v23 = 0;
      QueryTable.Name = L"DisableLddmSpriteTearDown";
      QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
      gdwDirectDrawContext = 4;
      QueryTable.DefaultLength = 4;
      QueryTable.DefaultData = &v25;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      memset(v24, 0, sizeof(v24));
      RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
LABEL_9:
      if ( (int)v3 >= 0 )
        return (unsigned int)v3;
      goto LABEL_16;
    }
    v16 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v16 + 24) = (int)v3;
LABEL_14:
    WdLogEvent5_WdError(v16);
    goto LABEL_9;
  }
  LODWORD(v3) = -1073741670;
  v17 = WdLogNewEntry5_WdError(v6, v5, v7);
  *(_QWORD *)(v17 + 24) = -1073741670LL;
  WdLogEvent5_WdError(v17);
LABEL_16:
  memset(&gDxgkInterface, 0, 0x888uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return (unsigned int)v3;
}
