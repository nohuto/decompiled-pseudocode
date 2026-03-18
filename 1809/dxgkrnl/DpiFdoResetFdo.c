/*
 * XREFs of DpiFdoResetFdo @ 0x1C0266BAC
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0265190 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C014314C (DpiRequestIoPowerState.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C01C841C (DxgkReleaseAdapterFdoReference.c)
 *     DxgkFreeUnicodeString @ 0x1C02634C8 (DxgkFreeUnicodeString.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02638B0 (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  void *v5; // rcx
  DXGADAPTER *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  _QWORD *v11; // rcx
  void (__fastcall *v12)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 1296) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
    v3[3] = 275LL;
    v3[4] = 21LL;
    v3[5] = -1073741823LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  ExDeleteResourceLite((PERESOURCE)(v1 + 3688));
  ExDeleteResourceLite((PERESOURCE)(v1 + 3232));
  if ( *(_QWORD *)(v1 + 3832) )
    DpiRequestIoPowerState(a1, 7, v4, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4728));
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4744));
  DxgkFreeUnicodeString((_QWORD *)(v1 + 4792));
  v5 = *(void **)(v1 + 2656);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(v1 + 2656) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v1);
  v6 = *(DXGADAPTER **)(v1 + 3792);
  if ( v6 )
  {
    DxgkReleaseAdapterFdoReference(v6);
    *(_QWORD *)(v1 + 3792) = 0LL;
    *(_QWORD *)(v1 + 3816) = 0LL;
  }
  *(_DWORD *)(v1 + 3208) = 0;
  v7 = *(void **)(v1 + 3224);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 3224) = 0LL;
  }
  v8 = *(void **)(v1 + 3216);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 3216) = 0LL;
  }
  v9 = *(void **)(v1 + 4760);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 4760) = 0LL;
  }
  v10 = *(void **)(v1 + 4768);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v1 + 4768) = 0LL;
  }
  v11 = *(_QWORD **)(v1 + 4808);
  if ( v11 )
  {
    v12 = (void (__fastcall *)(_QWORD))v11[4];
    if ( v12 )
    {
      v12(v11[2]);
      memset((void *)(*(_QWORD *)(v1 + 4808) + 8LL), 0, 0x38uLL);
      v11 = *(_QWORD **)(v1 + 4808);
    }
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)(v1 + 4808) = 0LL;
    }
  }
}
