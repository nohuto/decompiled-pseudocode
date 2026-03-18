/*
 * XREFs of RIMGetFeatureReport @ 0x1C013F9A4
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C013FAC8 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall RIMGetFeatureReport(
        PLARGE_INTEGER Timeout,
        unsigned __int16 a2,
        char a3,
        struct _DEVICE_OBJECT *a4,
        struct _FILE_OBJECT *a5)
{
  ULONG OutputBufferLength; // ebx
  PIRP v8; // rax
  int v9; // edx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  LOBYTE(Timeout->LowPart) = a3;
  OutputBufferLength = a2;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(0xB0192u, a4, 0LL, 0, Timeout, OutputBufferLength, 0, &Object, &IoStatusBlock);
  v9 = (int)v8;
  if ( v8 )
  {
    v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a5;
    result = IofCallDriver(a4, v8);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 36, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
    return -1073741668;
  }
  return result;
}
