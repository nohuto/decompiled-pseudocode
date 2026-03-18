/*
 * XREFs of VidSchNotifyDeviceRemoved @ 0x1C00327E0
 * Callers:
 *     VidSchiNotifyDeviceRemoved @ 0x1C0039BBC (VidSchiNotifyDeviceRemoved.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchNotifyDeviceRemoved(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+98h] [rbp+18h] BYREF
  void *ProcessHandle; // [rsp+A0h] [rbp+20h] BYREF

  ProcessHandle = 0LL;
  ClientId.UniqueProcess = Context;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId) >= 0 )
  {
    v13 = 1;
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, &v13, 4LL);
    v10 = updated;
    if ( updated >= 0 )
      goto LABEL_6;
    v6 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v6 + 24) = v10;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = ClientId.UniqueProcess;
  }
  WdLogEvent5_WdAssertion(v6);
LABEL_6:
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
