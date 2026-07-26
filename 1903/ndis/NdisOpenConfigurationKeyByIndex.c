/*
 * XREFs of NdisOpenConfigurationKeyByIndex @ 0x1C002CBE0
 * Callers:
 *     ndisIfInitialize @ 0x1C01440C8 (ndisIfInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisOpenProtocolSubkey@@YAHPEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C0023AF0 (-ndisOpenProtocolSubkey@@YAHPEAU_NDIS_CONFIGURATION_HANDLE@@@Z.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C002AD70 (NdisOpenConfigurationKeyByName.c)
 */

void __stdcall NdisOpenConfigurationKeyByIndex(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        ULONG Index,
        PNDIS_STRING KeyName,
        PNDIS_HANDLE KeyHandle)
{
  _QWORD *v7; // rbx
  PVOID *v9; // r15
  void *v10; // rbp
  unsigned __int16 *PoolWithTag; // rax
  int v12; // edx
  unsigned __int16 *v13; // rsi
  NTSTATUS v14; // eax
  unsigned __int16 v15; // ax
  int v16; // eax
  char ResultLength; // [rsp+28h] [rbp-40h]
  UNICODE_STRING SubKeyName; // [rsp+30h] [rbp-38h] BYREF
  ULONG Length; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)&SubKeyName.Length = 0LL;
  SubKeyName.Buffer = 0LL;
  v7 = ConfigurationHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ResultLength = (char)ConfigurationHandle;
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      22,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      ResultLength);
  }
  v9 = KeyHandle;
  *KeyHandle = 0LL;
  if ( (*(_DWORD *)(v7[2] + 16LL) & 2) == 0
    || v7[4]
    || (v16 = ndisOpenProtocolSubkey((struct _NDIS_CONFIGURATION_HANDLE *)v7), *Status = v16, v16 >= 0) )
  {
    v10 = (void *)v7[4];
    Length = 280;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x2020444Eu);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      v14 = ZwEnumerateKey(v10, Index, KeyBasicInformation, PoolWithTag, Length, &Length);
      *Status = v14;
      if ( v14 >= 0 )
      {
        SubKeyName.MaximumLength = v13[6];
        SubKeyName.Length = SubKeyName.MaximumLength;
        SubKeyName.Buffer = v13 + 8;
        NdisOpenConfigurationKeyByName(Status, v7, &SubKeyName, v9);
        if ( !*Status )
        {
          v15 = SubKeyName.Length;
          KeyName->MaximumLength = SubKeyName.Length;
          KeyName->Length = v15;
          KeyName->Buffer = (wchar_t *)((char *)*v9 + 176);
        }
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      *Status = -1073741670;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      8,
      23,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)v7);
  }
}
