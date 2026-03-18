/*
 * XREFs of ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C0084774
 * Callers:
 *     CoreMsgCreatePort @ 0x1C0083ED4 (CoreMsgCreatePort.c)
 * Callees:
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C0084958 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C0085574 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 CoreMessagingK::RegistrarClient::Connect(void)
{
  unsigned __int16 v0; // cx
  NTSTATUS v1; // ebx
  unsigned __int64 v2; // rdx
  NTSTATUS v4; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v5; // [rsp+70h] [rbp-90h] BYREF
  __int128 v6; // [rsp+80h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h]
  int v9; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v10; // [rsp+C0h] [rbp-40h]
  __int64 v11; // [rsp+C8h] [rbp-38h]
  int v12; // [rsp+D0h] [rbp-30h]
  __int128 v13; // [rsp+D8h] [rbp-28h]
  int v14; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v15; // [rsp+F0h] [rbp-10h]
  __int128 *v16; // [rsp+F8h] [rbp-8h]
  int v17; // [rsp+100h] [rbp+0h]
  __int128 v18; // [rsp+108h] [rbp+8h]
  _DWORD v19[14]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v20[10]; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS *v22; // [rsp+1C0h] [rbp+C0h]
  int v23; // [rsp+1C8h] [rbp+C8h]
  int v24; // [rsp+1CCh] [rbp+CCh]
  _BYTE v25[32]; // [rsp+1D0h] [rbp+D0h] BYREF

  v15 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  *((_QWORD *)&v5 + 1) = L"\\BaseNamedObjects\\CoreMessagingRegistrar";
  v17 = 512;
  v12 = 512;
  LODWORD(v5) = 5374032;
  v6 = v5;
  v18 = 0LL;
  v14 = 48;
  v13 = 0LL;
  v16 = &v6;
  v9 = 48;
  memset(v20, 0, 0x48uLL);
  v0 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize;
  LODWORD(v20[0]) = 1114112;
  if ( CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize > CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize )
    v0 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  HIDWORD(v20[0]) = 12;
  v20[2] = v0 + 80LL;
  LODWORD(v20[1]) = 1;
  WORD2(v20[1]) = 257;
  v1 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v1 >= 0 )
  {
    v1 = CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(SecurityDescriptor);
    if ( v1 >= 0 )
    {
      memset(v19, 0, 0x30uLL);
      v19[0] = 3145736;
      LOWORD(v19[1]) = 0x8000;
      *(_QWORD *)&v5 = 48LL;
      CoreMessagingK::RegistrarClient::InitializeMessageAttributes((struct _ALPC_MESSAGE_ATTRIBUTES *)v25, v2);
      v1 = ZwAlpcConnectPortEx(
             &CoreMessagingK::RegistrarClient::s_Port,
             &v14,
             &v9,
             v20,
             0x20000,
             SecurityDescriptor,
             v19,
             &v5,
             v25,
             0LL,
             0LL);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44534D43u);
  P = 0LL;
  v4 = v1;
  if ( dword_1C01C77B8 > 5u )
  {
    v24 = 0;
    v22 = &v4;
    v23 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A33B9, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v1;
}
