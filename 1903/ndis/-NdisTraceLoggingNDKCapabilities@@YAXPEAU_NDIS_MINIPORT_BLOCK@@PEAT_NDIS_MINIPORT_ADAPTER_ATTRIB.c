/*
 * XREFs of ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00C29C4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031294 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingNDKCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // r14d
  int v7; // r15d
  _DWORD *MiniportAddDeviceContext; // rax
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // r10d
  int v12; // r11d
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  int *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  int *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  int *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int64 *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  __int64 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]

  LOBYTE(v13) = 0;
  v22 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      LOBYTE(v13) = a2->NDKAttributes.Enabled;
      if ( (_BYTE)v13 )
      {
        MiniportAddDeviceContext = a2->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
        if ( MiniportAddDeviceContext )
        {
          v3 = MiniportAddDeviceContext[5];
          v4 = MiniportAddDeviceContext[6];
          v5 = MiniportAddDeviceContext[7];
          v6 = MiniportAddDeviceContext[8];
          v7 = MiniportAddDeviceContext[9];
          v22 = *((_QWORD *)MiniportAddDeviceContext + 5);
        }
      }
    }
  }
  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v25 = 16LL;
      p_InterfaceGuid = &a1->InterfaceGuid;
      v26 = &v13;
      v28 = &v14;
      v30 = &v15;
      v32 = &v16;
      v34 = &v17;
      v36 = &v18;
      v38 = &v19;
      v40 = &v20;
      v42 = &v21;
      v44 = &v22;
      v27 = 1LL;
      v14 = (int)v10;
      v29 = 4LL;
      v15 = v11;
      v31 = 4LL;
      v16 = v12;
      v33 = 4LL;
      v17 = v3;
      v35 = 4LL;
      v18 = v4;
      v37 = 4LL;
      v19 = v5;
      v39 = 4LL;
      v20 = v6;
      v41 = 4LL;
      LODWORD(v21) = v7;
      v43 = 4LL;
      v45 = 8LL;
      TlgWrite(&hProvider, &unk_1C00D1B4D, v9, v10, 0xDu, &pData);
    }
  }
}
