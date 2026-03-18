/*
 * XREFs of PopTraceThermalZoneActiveActivity @ 0x140167004
 * Callers:
 *     PopThermalSxEntry @ 0x140166CE0 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x1402F7B00 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x1408A8810 (PopThermalZoneRemove.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14008BAAC (_TlgCreateWsz.c)
 *     PopDiagSnapActiveActivity @ 0x1401676FC (PopDiagSnapActiveActivity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZoneActiveActivity(__int64 a1)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v3; // rbx
  __int64 v4; // rdi
  const WCHAR *v5; // r9
  int v6; // r10d
  int v7; // eax
  int v8; // r11d
  int v9; // r10d
  unsigned __int8 v11[4]; // [rsp+38h] [rbp-69h] BYREF
  _DWORD v12[3]; // [rsp+3Ch] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp-39h]
  int v15; // [rsp+70h] [rbp-31h]
  int v16; // [rsp+74h] [rbp-2Dh]
  __int64 v17; // [rsp+78h] [rbp-29h]
  _DWORD v18[2]; // [rsp+80h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-19h] BYREF
  _DWORD *v20; // [rsp+98h] [rbp-9h]
  int v21; // [rsp+A0h] [rbp-1h]
  int v22; // [rsp+A4h] [rbp+3h]
  unsigned __int8 *v23; // [rsp+A8h] [rbp+7h]
  int v24; // [rsp+B0h] [rbp+Fh]
  int v25; // [rsp+B4h] [rbp+13h]
  _BYTE *v26; // [rsp+B8h] [rbp+17h]
  int v27; // [rsp+C0h] [rbp+1Fh]
  int v28; // [rsp+C4h] [rbp+23h]
  _BYTE v29[40]; // [rsp+C8h] [rbp+27h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v3 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v4 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v4 = 0LL;
  if ( v4 )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = PopDiagSnapActiveActivity(a1 + 504, v12, v11, v29);
    if ( v12[0] )
    {
      DeviceAttachmentBaseRefWithTag = *(void **)(a1 + 1048);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
        if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
        {
          v16 = 0;
          v18[1] = 0;
          v14 = v18;
          v17 = *(_QWORD *)(v4 + 288);
          v7 = *(unsigned __int16 *)(v4 + 280);
          v12[0] = v6;
          v18[0] = v7;
          *(_WORD *)v11 = v11[0];
          v15 = 2;
          TlgCreateWsz(&pDesc, v5);
          v22 = 0;
          v25 = 0;
          v28 = 0;
          v23 = v11;
          v26 = v29;
          v20 = v12;
          v21 = 4;
          v24 = v8;
          v27 = 4 * v9;
          LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgWrite(&pCallbackContext, &unk_14039054A, 0LL, 0LL, 8u, &pData);
        }
      }
    }
  }
  if ( v3 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v3, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
