/*
 * XREFs of PopTraceZoneCr3Tripped @ 0x1402E2E20
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopTraceZoneCr3Tripped(int a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r9
  int v8; // r11d
  char v9; // cl
  bool v10; // zf
  const WCHAR *v11; // rdx
  LPCWSTR v12; // r10
  bool v14; // [rsp+38h] [rbp-69h] BYREF
  char v15; // [rsp+39h] [rbp-68h] BYREF
  bool v16; // [rsp+3Ah] [rbp-67h] BYREF
  int v17; // [rsp+3Ch] [rbp-65h] BYREF
  int v18; // [rsp+40h] [rbp-61h] BYREF
  int v19; // [rsp+44h] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  int *v21; // [rsp+68h] [rbp-39h]
  int v22; // [rsp+70h] [rbp-31h]
  int v23; // [rsp+74h] [rbp-2Dh]
  bool *v24; // [rsp+78h] [rbp-29h]
  int v25; // [rsp+80h] [rbp-21h]
  int v26; // [rsp+84h] [rbp-1Dh]
  char *v27; // [rsp+88h] [rbp-19h]
  int v28; // [rsp+90h] [rbp-11h]
  int v29; // [rsp+94h] [rbp-Dh]
  bool *v30; // [rsp+98h] [rbp-9h]
  int v31; // [rsp+A0h] [rbp-1h]
  int v32; // [rsp+A4h] [rbp+3h]
  int *v33; // [rsp+A8h] [rbp+7h]
  int v34; // [rsp+B0h] [rbp+Fh]
  int v35; // [rsp+B4h] [rbp+13h]
  int *v36; // [rsp+B8h] [rbp+17h]
  int v37; // [rsp+C0h] [rbp+1Fh]
  int v38; // [rsp+C4h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+D8h] [rbp+37h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x67446F50u);
  v5 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v6 = 0LL;
  if ( v6 )
  {
    DeviceAttachmentBaseRefWithTag = *(void **)(a2 + 864);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
      {
        v9 = *(_BYTE *)(a2 + 65);
        v10 = *(_BYTE *)(a2 + 228) == 0;
        v25 = 1;
        v14 = !v10;
        v28 = 1;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v15 = v9 & 1;
        v19 = *(_DWORD *)(a2 + 136);
        v21 = &v17;
        v24 = &v14;
        v27 = &v15;
        v30 = &v16;
        v16 = (v9 & 4) != 0;
        v33 = &v18;
        v22 = 4;
        v31 = 1;
        v11 = *(const WCHAR **)(v7 + 288);
        v34 = 4;
        v37 = 4;
        v36 = &v19;
        v17 = a1;
        v18 = v8;
        TlgCreateWsz(&pDesc, v11);
        TlgCreateWsz(&v40, v12);
        LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgWrite(&pCallbackContext, &unk_1403713D0, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  if ( v5 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
