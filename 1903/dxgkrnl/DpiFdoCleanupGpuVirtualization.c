/*
 * XREFs of DpiFdoCleanupGpuVirtualization @ 0x1C029ED0C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01613F0 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoResetFdo @ 0x1C02A247C (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
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

  if ( *(_QWORD *)(a1 + 2768) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2760), 0);
    v2 = *(void **)(a1 + 2768);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(a1 + 2768) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2784) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2776), 0);
    v3 = *(void **)(a1 + 2784);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 2784) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2800) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2792), 0);
    v4 = *(void **)(a1 + 2800);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(a1 + 2800) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2816) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2808), 0);
    v5 = *(void **)(a1 + 2816);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 2816) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2832) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2824), 0);
    v6 = *(void **)(a1 + 2832);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a1 + 2832) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2848) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2840), 0);
    v7 = *(void **)(a1 + 2848);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(a1 + 2848) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2864) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2856), 0);
    v8 = *(void **)(a1 + 2864);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(a1 + 2864) = 0LL;
    }
  }
  v9 = *(void (__fastcall **)(_QWORD))(a1 + 5104);
  if ( v9 )
  {
    v9(*(_QWORD *)(a1 + 5088));
    *(_BYTE *)(a1 + 5072) = 0;
    *(_QWORD *)(a1 + 5104) = 0LL;
  }
  v10 = *(void (__fastcall **)(_QWORD))(a1 + 4976);
  if ( v10 )
  {
    v10(*(_QWORD *)(a1 + 4960));
    *(_BYTE *)(a1 + 4944) = 0;
    *(_QWORD *)(a1 + 4976) = 0LL;
  }
  v11 = *(void (__fastcall **)(_QWORD))(a1 + 5240);
  if ( v11 )
  {
    v11(*(_QWORD *)(a1 + 5224));
    *(_BYTE *)(a1 + 5208) = 0;
    *(_QWORD *)(a1 + 5240) = 0LL;
  }
  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5296);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5280));
    *(_BYTE *)(a1 + 5264) = 0;
    *(_QWORD *)(a1 + 5296) = 0LL;
  }
  return result;
}
