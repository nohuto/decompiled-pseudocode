/*
 * XREFs of PopTraceThermalRequestPassiveHistogram @ 0x1402E29BC
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x1402D6AF8 (PopCoolingTelemetryWorker.c)
 *     PopDeactiveThermalRequest @ 0x14086890C (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140868AB0 (PopOrphanCoolingExtension.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PopDiagSnapPassiveHistogram @ 0x14014286C (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PoStoreDiagnosticContext @ 0x1402D3460 (PoStoreDiagnosticContext.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestPassiveHistogram(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rdi
  __int64 v5; // r14
  unsigned __int64 *PoolWithTag; // rax
  const WCHAR *v7; // r11
  SIZE_T NumberOfBytes[2]; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+6Ch] [rbp-94h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  _DWORD v14[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  int v18; // [rsp+9Ch] [rbp-64h]
  void *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+ACh] [rbp-54h]
  _DWORD v22[24]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
                                     0x67446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v5 = 0LL;
  if ( v5 )
  {
    PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, NumberOfBytes);
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x50455654u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), PoolWithTag, NumberOfBytes) >= 0 )
      {
        PopDiagSnapPassiveHistogram(a1 + 40, v22);
        if ( pCallbackContext.LevelPlus1 > 5 )
        {
          if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
          {
            v12 = 0;
            v14[1] = 0;
            v10 = v14;
            v13 = *(_QWORD *)(v5 + 288);
            v14[0] = *(unsigned __int16 *)(v5 + 280);
            v11 = 2;
            TlgCreateWsz(&pDesc, v7);
            v18 = 0;
            v21 = 0;
            v19 = &PopThermalTrackingThresholds;
            v16 = v22;
            v17 = 84;
            v20 = 21;
            TlgWrite(&pCallbackContext, &unk_1403712DA, 0LL, 0LL, 7u, &pData);
          }
        }
      }
    }
  }
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x50455654u);
}
