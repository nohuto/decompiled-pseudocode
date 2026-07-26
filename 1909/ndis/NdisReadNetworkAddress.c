/*
 * XREFs of NdisReadNetworkAddress @ 0x1C002C100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 */

void __stdcall NdisReadNetworkAddress(
        PNDIS_STATUS Status,
        PVOID *NetworkAddress,
        PUINT NetworkAddressLength,
        NDIS_HANDLE ConfigurationHandle)
{
  int v7; // edx
  unsigned int v8; // ebp
  CHAR *Buffer; // rdi
  CHAR *v10; // r12
  CHAR *v11; // rsi
  unsigned __int64 v12; // r15
  NTSTATUS v13; // eax
  CHAR String; // [rsp+80h] [rbp+8h] BYREF
  CHAR v15; // [rsp+81h] [rbp+9h]
  char v16; // [rsp+82h] [rbp+Ah]
  PVOID *v17; // [rsp+88h] [rbp+10h]
  ULONG Value; // [rsp+90h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp+20h] BYREF

  v17 = NetworkAddress;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NetworkAddress) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NetworkAddress,
      8,
      32,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)ConfigurationHandle);
  }
  *Status = -1073741823;
  *NetworkAddressLength = 0;
  NdisReadConfiguration(Status, &ParameterValue, ConfigurationHandle, (PNDIS_STRING)&Keyword, NdisParameterString);
  if ( *Status
    || ParameterValue->ParameterType != NdisParameterString
    || ParameterValue->ParameterData.StringData.Length < 4u )
  {
    *Status = -1073741823;
  }
  else
  {
    v16 = 0;
    v8 = 0;
    Buffer = (CHAR *)ParameterValue->ParameterData.StringData.Buffer;
    v10 = Buffer;
    v11 = Buffer + 4;
    v12 = (unsigned __int64)&Buffer[2 * ((unsigned __int64)ParameterValue->ParameterData.StringData.Length >> 1)];
    if ( (unsigned __int64)(Buffer + 4) <= v12 )
    {
      while ( 1 )
      {
        String = *Buffer;
        v15 = Buffer[2];
        Buffer += 4;
        v11 += 4;
        v13 = RtlCharToInteger(&String, 0x10u, &Value);
        if ( v13 < 0 )
          break;
        ++v8;
        *v10++ = Value;
        if ( (unsigned __int64)Buffer < v12 && *(_WORD *)Buffer == 45 )
        {
          Buffer += 2;
          v11 += 2;
        }
        if ( (unsigned __int64)v11 > v12 )
          goto LABEL_18;
      }
      *Status = -1073741823;
LABEL_18:
      if ( v13 >= 0 )
      {
        *Status = 0;
        *v17 = ParameterValue->ParameterData.StringData.Buffer;
        *NetworkAddressLength = v8;
        if ( !v8 )
          *Status = -1073741823;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      8,
      33,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)ConfigurationHandle);
  }
}
