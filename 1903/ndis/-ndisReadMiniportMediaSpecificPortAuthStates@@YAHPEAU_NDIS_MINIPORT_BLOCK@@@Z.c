/*
 * XREFs of ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C1F8
 * Callers:
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C002C8E0 (ndisReadMiniportDefaultPortAuthStates.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00238B0 (NdisOpenProtocolConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002C460 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisReadMiniportMediaSpecificPortAuthStates(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  wchar_t *PoolWithTag; // rax
  unsigned int MiniportSpecificPortAuthStates; // ebx
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-79h] BYREF
  NTSTATUS v7; // [rsp+58h] [rbp-69h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+60h] [rbp-61h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-59h] BYREF
  _UNICODE_STRING v10; // [rsp+78h] [rbp-49h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-39h] BYREF
  _UNICODE_STRING Source; // [rsp+98h] [rbp-29h] BYREF
  char v13; // [rsp+A8h] [rbp-19h] BYREF
  char v14; // [rsp+D0h] [rbp+Fh] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_DWORD *)(&v10.MaximumLength + 1) = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  ConfigurationHandle = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      62,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1);
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)&v13;
  *(_DWORD *)&v10.Length = 2621440;
  v10.Buffer = (wchar_t *)&v14;
  if ( RtlIntegerToUnicodeString(a1->IfBlock->ifType, 0xAu, &String)
    || RtlIntegerToUnicodeString(a1->PhysicalMediumType, 0xAu, &v10) )
  {
    MiniportSpecificPortAuthStates = -1073741670;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\");
    RtlInitUnicodeString(&Source, L"\\");
    Destination.Length = 0;
    Destination.MaximumLength = String.Length + v10.Length + DestinationString.Length + Source.Length + 4;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      MiniportSpecificPortAuthStates = -1073741670;
      goto LABEL_9;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeStringToString(&Destination, &v10);
    v7 = RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer);
    MiniportSpecificPortAuthStates = v7;
    if ( !v7 )
    {
      NdisOpenProtocolConfiguration(&v7, &ConfigurationHandle, &Destination);
      MiniportSpecificPortAuthStates = v7;
      if ( !v7 )
      {
        MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
        NdisCloseConfiguration(ConfigurationHandle);
        if ( !MiniportSpecificPortAuthStates )
          a1->FilterPnPFlags |= 0x10u;
      }
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      63,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      MiniportSpecificPortAuthStates);
  }
  return MiniportSpecificPortAuthStates;
}
