/*
 * XREFs of ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C009B78C
 * Callers:
 *     CoreMsgCreatePort @ 0x1C009B2A0 (CoreMsgCreatePort.c)
 * Callees:
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C009B990 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C009BA98 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 CoreMessagingK::RegistrarClient::Connect(void)
{
  unsigned __int16 v0; // cx
  NTSTATUS v1; // ebx
  unsigned __int64 v2; // rdx
  NTSTATUS v4; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v5; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v6[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v7; // [rsp+88h] [rbp-78h]
  __int64 v8; // [rsp+90h] [rbp-70h]
  int v9; // [rsp+98h] [rbp-68h]
  int v10; // [rsp+9Ch] [rbp-64h]
  __int128 v11; // [rsp+A0h] [rbp-60h]
  _DWORD v12[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v13; // [rsp+B8h] [rbp-48h]
  __int128 *v14; // [rsp+C0h] [rbp-40h]
  int v15; // [rsp+C8h] [rbp-38h]
  int v16; // [rsp+CCh] [rbp-34h]
  __int128 v17; // [rsp+D0h] [rbp-30h]
  PVOID SecurityDescriptor[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v19; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v20[12]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v21[10]; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS *v23; // [rsp+1C0h] [rbp+C0h]
  int v24; // [rsp+1C8h] [rbp+C8h]
  int v25; // [rsp+1CCh] [rbp+CCh]
  _BYTE v26[32]; // [rsp+1D0h] [rbp+D0h] BYREF

  v12[1] = 0;
  v16 = 0;
  v6[1] = 0;
  v10 = 0;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v13 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  *((_QWORD *)&v5 + 1) = L"\\BaseNamedObjects\\CoreMessagingRegistrar";
  v15 = 512;
  v9 = 512;
  LODWORD(v5) = 5374032;
  v19 = v5;
  v17 = 0LL;
  v12[0] = 48;
  v11 = 0LL;
  v14 = &v19;
  v6[0] = 48;
  memset(v21, 0, 0x48uLL);
  v0 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize;
  LODWORD(v21[0]) = 1114112;
  if ( CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize > CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize )
    v0 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  HIDWORD(v21[0]) = 12;
  v21[2] = v0 + 80LL;
  LODWORD(v21[1]) = 1;
  WORD2(v21[1]) = 257;
  v1 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v1 >= 0 )
  {
    v1 = CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(SecurityDescriptor);
    if ( v1 >= 0 )
    {
      memset(v20, 0, sizeof(v20));
      v20[0] = 3145736;
      LOWORD(v20[1]) = 0x8000;
      *(_QWORD *)&v5 = 48LL;
      CoreMessagingK::RegistrarClient::InitializeMessageAttributes((struct _ALPC_MESSAGE_ATTRIBUTES *)v26, v2);
      v1 = ZwAlpcConnectPortEx(
             &CoreMessagingK::RegistrarClient::s_Port,
             v12,
             v6,
             v21,
             0x20000,
             SecurityDescriptor,
             v20,
             &v5,
             v26,
             0LL,
             0LL);
    }
  }
  if ( SecurityDescriptor[4] )
    ExFreePoolWithTag(SecurityDescriptor[4], 0x44534D43u);
  SecurityDescriptor[4] = 0LL;
  v4 = v1;
  if ( dword_1C020C5E0 > 5u )
  {
    v25 = 0;
    v23 = &v4;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C5E0, &unk_1C01E8195, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v1;
}
