/*
 * XREFs of PopDiagTraceCoolingExtension @ 0x1406DC478
 * Callers:
 *     PopRundownThermalRequests @ 0x1406DC2B0 (PopRundownThermalRequests.c)
 *     PopAssociateThermalRequest @ 0x140746C38 (PopAssociateThermalRequest.c)
 *     PopCoolingExtensionPnpNotification @ 0x1408687B0 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14086890C (PopDeactiveThermalRequest.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtension(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  int v9; // ecx
  char v10; // [rsp+30h] [rbp-59h] BYREF
  __int16 v11; // [rsp+34h] [rbp-55h] BYREF
  BOOL v12; // [rsp+38h] [rbp-51h] BYREF
  BOOL v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  BOOL v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  BOOL *v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  char *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  BOOL *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  __int64 *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  __int16 *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]
  __int64 v32; // [rsp+B0h] [rbp+27h]
  int v33; // [rsp+B8h] [rbp+2Fh]
  int v34; // [rsp+BCh] [rbp+33h]

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a2) )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x67446F50u);
    v5 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v11 = *(_WORD *)(v6 + 280) >> 1;
      v7 = *(_QWORD *)(a1 + 128) == 0LL;
      UserData.Size = 4;
      v18 = 4;
      v13 = !v7;
      v7 = *(_QWORD *)(a1 + 136) == 0LL;
      v24 = 4;
      v15 = a1;
      v12 = !v7;
      v7 = *(_BYTE *)(a1 + 65) == 0;
      v21 = 1;
      v27 = 8;
      UserData.Reserved = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v14 = !v7;
      v10 = *(_BYTE *)(a1 + 66);
      UserData.Ptr = (ULONGLONG)&v12;
      v17 = &v13;
      v20 = &v10;
      v23 = &v14;
      v26 = &v15;
      v29 = &v11;
      v30 = 2;
      v8 = *(_QWORD *)(v6 + 288);
      v9 = *(unsigned __int16 *)(v6 + 280);
      v34 = 0;
      v32 = v8;
      v33 = v9;
      EtwWrite(PopDiagHandle, a2, 0LL, 7u, &UserData);
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
}
