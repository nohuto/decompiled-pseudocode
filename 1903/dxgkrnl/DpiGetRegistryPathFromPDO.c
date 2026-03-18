/*
 * XREFs of DpiGetRegistryPathFromPDO @ 0x1C001EFFC
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x1C001EF34 (DpiGetDeviceRegistryPaths.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiGetRegistryPathFromPDO(struct _DEVICE_OBJECT *a1, int a2, unsigned __int16 *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int16 *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int16 *v14; // rsi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  SIZE_T v19; // rdx
  PVOID v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp+20h] BYREF

  DeviceRegKey = 0LL;
  v4 = IoOpenDeviceRegistryKey(a1, 2 - (a2 != 0), 0x20019u, &DeviceRegKey);
  v8 = v4;
  if ( v4 < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v26 + 24) = v8;
    WdLogEvent5_WdError(v26);
  }
  else
  {
    LODWORD(v8) = ZwQueryKey(DeviceRegKey, KeyNameInformation, 0LL, 0, &Length);
    if ( (_DWORD)v8 == -1073741789 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, Length, 0x74727044u);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Length);
        v15 = ZwQueryKey(DeviceRegKey, KeyNameInformation, v14, Length, &Length);
        v8 = v15;
        if ( v15 < 0 )
        {
          v28 = WdLogNewEntry5_WdError(v17, v16, v18);
          *(_QWORD *)(v28 + 24) = v8;
          WdLogEvent5_WdError(v28);
        }
        else
        {
          v19 = (unsigned __int16)(*v14 + 2);
          a3[1] = v19;
          *a3 = *v14;
          v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x74727044u);
          *((_QWORD *)a3 + 1) = v20;
          if ( v20 )
          {
            memset(v20, 0, a3[1]);
            memmove(*((void **)a3 + 1), v14 + 2, *a3);
          }
          else
          {
            LODWORD(v8) = -1073741801;
            v29 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
            *(_QWORD *)(v29 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v29);
          }
        }
        ExFreePoolWithTag(v14, 0x74727044u);
      }
      else
      {
        LODWORD(v8) = -1073741801;
        v27 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
        *(_QWORD *)(v27 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v27);
      }
    }
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v8;
}
