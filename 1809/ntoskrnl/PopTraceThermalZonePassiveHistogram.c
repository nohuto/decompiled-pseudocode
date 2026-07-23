/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x1401426F0
 * Callers:
 *     PopThermalSxEntry @ 0x140142634 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x1402DC640 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PopDiagSnapPassiveHistogram @ 0x14014286C (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v3; // rbx
  __int64 v4; // rdi
  const WCHAR *v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v8; // [rsp+58h] [rbp-B0h]
  __int64 v9; // [rsp+60h] [rbp-A8h]
  __int64 v10; // [rsp+68h] [rbp-A0h]
  _DWORD v11[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v13; // [rsp+88h] [rbp-80h]
  int v14; // [rsp+90h] [rbp-78h]
  int v15; // [rsp+94h] [rbp-74h]
  void *v16; // [rsp+98h] [rbp-70h]
  int v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A4h] [rbp-64h]
  _BYTE v19[96]; // [rsp+A8h] [rbp-60h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v3 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v4 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v4 = 0LL;
  if ( v4 )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = PopDiagSnapPassiveHistogram(a1 + 504, v19);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
      {
        v11[1] = 0;
        v8 = v11;
        v10 = *(_QWORD *)(v4 + 288);
        v11[0] = *(unsigned __int16 *)(v4 + 280);
        v9 = 2LL;
        TlgCreateWsz(&pDesc, v5);
        v15 = 0;
        v18 = 0;
        v16 = &PopThermalTrackingThresholds;
        v13 = v19;
        v14 = 84;
        v17 = 21;
        LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgWrite(&pCallbackContext, &unk_140371359, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( v3 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v3, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
