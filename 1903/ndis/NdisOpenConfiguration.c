/*
 * XREFs of NdisOpenConfiguration @ 0x1C002B170
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C0119D6C (ndisNDKHandleWmiChangeRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F500 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C01186B0 (ndisLWMOpenConfigurationKey.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  PNDIS_HANDLE v4; // r15
  HANDLE *PoolWithTag; // rax
  HANDLE *v7; // rbx
  int v8; // edx
  HANDLE *v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  NTSTATUS v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  HANDLE v15; // rcx
  unsigned int v16; // eax
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v4 = ConfigurationHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      17,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)WrapperConfigurationContext);
  }
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6863444Eu);
  v7 = PoolWithTag;
  v8 = PoolWithTag == 0LL ? 0xC000009A : 0;
  *Status = v8;
  if ( !v8 )
  {
    *(_DWORD *)PoolWithTag = 2621707;
    v9 = PoolWithTag + 4;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[2] = WrapperConfigurationContext;
    if ( *(_BYTE *)WrapperConfigurationContext == 10 )
    {
      v10 = *((_QWORD *)WrapperConfigurationContext + 1);
      PoolWithTag[1] = (HANDLE)v10;
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 120);
        if ( (v11 & 0x100) != 0 )
        {
          Handle = 0LL;
          v13 = ndisLWMOpenConfigurationKey(v10 + 4008, (KRegKey *)&Handle);
          v14 = NdisConvertNtStatusToNdisStatus(v13);
          *Status = v14;
          if ( v14 )
          {
            v15 = Handle;
          }
          else
          {
            v15 = 0LL;
            *v9 = Handle;
          }
          if ( v15 )
            ZwClose(v15);
        }
        else
        {
          if ( (v11 & 0x80u) != 0 )
          {
            v16 = ndisWdfOpenConfigurationKey(v10);
            v12 = NdisConvertNtStatusToNdisStatus(v16);
          }
          else
          {
            v12 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v10 + 3832), 2u, 0xC2000000, v9);
          }
          *Status = v12;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        8,
        18,
        (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
        (char)WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *v4 = v7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      8,
      19,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)WrapperConfigurationContext);
  }
}
