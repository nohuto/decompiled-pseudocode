/*
 * XREFs of NdisOpenConfigurationKeyByName @ 0x1C002AD70
 * Callers:
 *     NdisOpenConfigurationKeyByIndex @ 0x1C002CBE0 (NdisOpenConfigurationKeyByIndex.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329D4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C00B2580 (ndisOidPostIovNicSwitchParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisOpenProtocolSubkey@@YAHPEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C0023AF0 (-ndisOpenProtocolSubkey@@YAHPEAU_NDIS_CONFIGURATION_HANDLE@@@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __stdcall NdisOpenConfigurationKeyByName(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING SubKeyName,
        PNDIS_HANDLE SubKeyHandle)
{
  HANDLE *v4; // rdi
  int v9; // edx
  int v10; // eax
  int v11; // edx
  char *PoolWithTag; // rax
  char *v13; // rbx
  NTSTATUS v14; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      8,
      20,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)ConfigurationHandle);
  }
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
    || *((_QWORD *)ConfigurationHandle + 4)
    || (v10 = ndisOpenProtocolSubkey((struct _NDIS_CONFIGURATION_HANDLE *)ConfigurationHandle), *Status = v10, v10 >= 0) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, SubKeyName->Length + 176LL, 0x6863444Eu);
    v4 = (HANDLE *)PoolWithTag;
    v11 = PoolWithTag == 0LL ? 0xC000009A : 0;
    *Status = v11;
    if ( v11 )
    {
      *SubKeyHandle = 0LL;
    }
    else
    {
      v13 = PoolWithTag + 40;
      *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 40;
      PoolWithTag[40] = 10;
      *(_BYTE *)(*((_QWORD *)PoolWithTag + 2) + 1LL) = 1;
      *(_WORD *)(*((_QWORD *)PoolWithTag + 2) + 2LL) = 40;
      memmove(PoolWithTag + 176, SubKeyName->Buffer, SubKeyName->Length);
      *((_DWORD *)v13 + 14) = 0;
      *((_QWORD *)v13 + 10) = 0LL;
      *((_DWORD *)v13 + 22) = 0;
      *((_QWORD *)v13 + 12) = 0LL;
      *((_QWORD *)v13 + 3) = &ndisSaveParameters;
      *((_DWORD *)v13 + 8) = 20;
      *((_QWORD *)v13 + 1) = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
      ObjectAttributes.RootDirectory = (HANDLE)*((_QWORD *)ConfigurationHandle + 4);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = SubKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(v4 + 4, 0xBu, &ObjectAttributes);
      *Status = v14;
      if ( v14 >= 0 )
      {
        v4[3] = 0LL;
        v4[1] = (HANDLE)*((_QWORD *)ConfigurationHandle + 1);
        *SubKeyHandle = v4;
      }
    }
  }
  if ( *Status < 0 && v4 )
    ExFreePoolWithTag(v4, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      8,
      21,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)ConfigurationHandle);
  }
}
