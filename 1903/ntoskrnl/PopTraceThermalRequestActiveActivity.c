/*
 * XREFs of PopTraceThermalRequestActiveActivity @ 0x140167A2C
 * Callers:
 *     PopCoolingSxTransition @ 0x14016775C (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x1402F0FE8 (PopCoolingTelemetryWorker.c)
 *     PopDeactiveThermalRequest @ 0x1408A3BB8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408A3D98 (PopOrphanCoolingExtension.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14008A7AC (_TlgCreateWsz.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400EBF7C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PoStoreDiagnosticContext @ 0x140167C04 (PoStoreDiagnosticContext.c)
 *     PopDiagSnapActiveActivity @ 0x140167CAC (PopDiagSnapActiveActivity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestActiveActivity(__int64 a1)
{
  void *v2; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // rdi
  __int64 v5; // r14
  PVOID PoolWithTag; // rax
  int v7; // r9d
  const WCHAR *v8; // r10
  _BYTE v9[4]; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp-39h]
  int v14; // [rsp+68h] [rbp-31h]
  int v15; // [rsp+6Ch] [rbp-2Dh]
  __int64 v16; // [rsp+70h] [rbp-29h]
  _DWORD v17[2]; // [rsp+78h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  int *v19; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]
  SIZE_T *p_NumberOfBytes; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  _DWORD v25[10]; // [rsp+B0h] [rbp+17h] BYREF

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
    PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &NumberOfBytes);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x50455654u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), PoolWithTag, &NumberOfBytes) >= 0 )
      {
        PopDiagSnapActiveActivity(a1 + 40, &v10, v9, v25);
        if ( v10 )
        {
          if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
          {
            v15 = 0;
            v17[1] = 0;
            LODWORD(NumberOfBytes) = v25[0];
            v13 = v17;
            v16 = *(_QWORD *)(v5 + 288);
            v17[0] = *(unsigned __int16 *)(v5 + 280);
            v10 = v7;
            v14 = 2;
            TlgCreateWsz(&pDesc, v8);
            v21 = 0;
            v24 = 0;
            p_NumberOfBytes = &NumberOfBytes;
            v20 = 4;
            v23 = 4;
            v19 = &v10;
            TlgWrite(&pCallbackContext, &unk_140390216, 0LL, 0LL, 7u, &pData);
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
