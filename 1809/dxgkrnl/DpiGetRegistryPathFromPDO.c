/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C001EBE8
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C001EB20 (DpiGetDeviceRegistryPaths.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v8; // rsi
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  SIZE_T v11; // rdx
  PVOID v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF

  DeviceRegKey = 0LL;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &DeviceRegKey);
  v6 = v4;
  if ( v4 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
  }
  else
  {
    LODWORD(v6) = ZwQueryKey(DeviceRegKey, KeyNameInformation, 0LL, 0, &Length);
    if ( (_DWORD)v6 == -1073741789 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Length);
        v9 = ZwQueryKey(DeviceRegKey, KeyNameInformation, v8, Length, &Length);
        v6 = v9;
        if ( v9 < 0 )
        {
          v16 = WdLogNewEntry5_WdError(v10);
          *(_QWORD *)(v16 + 24) = v6;
          WdLogEvent5_WdError(v16);
        }
        else
        {
          v11 = (unsigned __int16)(*v8 + 2);
          a3[1] = v11;
          *a3 = *v8;
          v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u);
          *((_QWORD *)a3 + 1) = v12;
          if ( v12 )
          {
            memset(v12, 0, a3[1]);
            memmove(*((void **)a3 + 1), v8 + 2, *a3);
          }
          else
          {
            LODWORD(v6) = -1073741801;
            v17 = WdLogNewEntry5_WdLowResource();
            *(_QWORD *)(v17 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v17);
          }
        }
        ExFreePoolWithTag(v8, 0x74727044u);
      }
      else
      {
        LODWORD(v6) = -1073741801;
        v15 = WdLogNewEntry5_WdLowResource();
        *(_QWORD *)(v15 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v15);
      }
    }
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v6;
}
