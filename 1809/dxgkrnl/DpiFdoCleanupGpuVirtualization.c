/*
 * XREFs of DpiFdoCleanupGpuVirtualization @ 0x1C02638B0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C014C474 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoResetFdo @ 0x1C0266BAC (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DpiFdoCleanupGpuVirtualization(__int64 a1))(_QWORD)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void (__fastcall *v9)(_QWORD); // rax
  void (__fastcall *v10)(_QWORD); // rax
  void (__fastcall *v11)(_QWORD); // rax
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( *(_QWORD *)(a1 + 2696) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2688), 0);
    v2 = *(void **)(a1 + 2696);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(a1 + 2696) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2712) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2704), 0);
    v3 = *(void **)(a1 + 2712);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 2712) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2728) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2720), 0);
    v4 = *(void **)(a1 + 2728);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(a1 + 2728) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2744) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2736), 0);
    v5 = *(void **)(a1 + 2744);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 2744) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2760) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2752), 0);
    v6 = *(void **)(a1 + 2760);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a1 + 2760) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2776) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2768), 0);
    v7 = *(void **)(a1 + 2776);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(a1 + 2776) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2792) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2784), 0);
    v8 = *(void **)(a1 + 2792);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(a1 + 2792) = 0LL;
    }
  }
  v9 = *(void (__fastcall **)(_QWORD))(a1 + 4976);
  if ( v9 )
  {
    v9(*(_QWORD *)(a1 + 4960));
    *(_BYTE *)(a1 + 4944) = 0;
    *(_QWORD *)(a1 + 4976) = 0LL;
  }
  v10 = *(void (__fastcall **)(_QWORD))(a1 + 4848);
  if ( v10 )
  {
    v10(*(_QWORD *)(a1 + 4832));
    *(_BYTE *)(a1 + 4816) = 0;
    *(_QWORD *)(a1 + 4848) = 0LL;
  }
  v11 = *(void (__fastcall **)(_QWORD))(a1 + 5112);
  if ( v11 )
  {
    v11(*(_QWORD *)(a1 + 5096));
    *(_BYTE *)(a1 + 5080) = 0;
    *(_QWORD *)(a1 + 5112) = 0LL;
  }
  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5168);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5152));
    *(_BYTE *)(a1 + 5136) = 0;
    *(_QWORD *)(a1 + 5168) = 0LL;
  }
  return result;
}
