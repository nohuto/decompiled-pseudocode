/*
 * XREFs of DpiGetMonitorDescriptor @ 0x1C01794F4
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0179328 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0157B30 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0157B64 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C015BFB0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiGetMonitorDescriptor(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  __int64 v4; // rbp
  unsigned int DeviceDescriptor; // esi
  __int64 v6; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17[2]; // [rsp+30h] [rbp-28h] BYREF
  char *v18; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 64);
  DeviceDescriptor = 0;
  v6 = a2;
  v8 = *(_QWORD *)(v4 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  v17[1] = 128;
  v17[0] = a2;
  v18 = a4;
  v10 = *(_QWORD *)(v4 + 936);
  if ( *(_QWORD *)(v10 + 104) )
  {
    v15 = *(unsigned __int16 *)(v10 + 94);
    if ( a2 >= v15 )
    {
      return (unsigned int)-1071841272;
    }
    else
    {
      v16 = v15 - a2;
      if ( v16 >= 0x80 )
      {
        v16 = 128;
      }
      else
      {
        memset(&a4[v16], 0, 128 - v16);
        v10 = *(_QWORD *)(v4 + 936);
      }
      memmove(a4, (const void *)(*(_QWORD *)(v10 + 112) + v6), v16);
    }
  }
  else
  {
    KeWaitForSingleObject(*(PVOID *)(v10 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3896), 1LL, v11);
    DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(v8, *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 504), v17);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3896), v12, v13);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 72LL), 0);
  }
  return DeviceDescriptor;
}
