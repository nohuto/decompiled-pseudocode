/*
 * XREFs of NdisOpenConfiguration @ 0x1C00C6DD0
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00F7980 (ndisNDKHandleWmiChangeRequest.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C00EAAB0 (ndisWdfOpenConfigurationKey.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C00F2BEC (ndisLWMOpenConfigurationKey.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  HANDLE *PoolWithTag; // rax
  HANDLE *v7; // rbx
  HANDLE *v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  HANDLE v14; // rcx
  int v15; // eax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0257 >= 4u )
    WPP_SF_q(0x11u, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, (__int64)WrapperConfigurationContext);
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6863444Eu);
  v7 = PoolWithTag;
  *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) == 0 )
  {
    *(_DWORD *)PoolWithTag = 2621707;
    v8 = PoolWithTag + 4;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[2] = WrapperConfigurationContext;
    if ( *(_BYTE *)WrapperConfigurationContext == 10 )
    {
      v9 = *((_QWORD *)WrapperConfigurationContext + 1);
      PoolWithTag[1] = (HANDLE)v9;
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 120);
        if ( (v10 & 0x100) != 0 )
        {
          Handle = 0LL;
          v12 = ndisLWMOpenConfigurationKey(v9 + 4040, &Handle);
          v13 = NdisConvertNtStatusToNdisStatus(v12);
          *Status = v13;
          if ( v13 )
          {
            v14 = Handle;
          }
          else
          {
            v14 = 0LL;
            *v8 = Handle;
          }
          if ( v14 )
            ZwClose(v14);
        }
        else
        {
          if ( (v10 & 0x80u) != 0 )
          {
            v15 = ndisWdfOpenConfigurationKey(v9, v8);
            v11 = NdisConvertNtStatusToNdisStatus(v15);
          }
          else
          {
            v11 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v9 + 3864), 2u, 0xC2000000, v8);
          }
          *Status = v11;
        }
      }
    }
    else if ( (unsigned __int8)byte_1C00A0257 >= 2u )
    {
      WPP_SF_q(0x12u, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, (__int64)WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *ConfigurationHandle = v7;
  }
  if ( (unsigned __int8)byte_1C00A0257 >= 4u )
    WPP_SF_q(0x13u, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, (__int64)WrapperConfigurationContext);
}
