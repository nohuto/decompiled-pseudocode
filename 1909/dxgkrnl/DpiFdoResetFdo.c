/*
 * XREFs of DpiFdoResetFdo @ 0x1C02A288C
 * Callers:
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02A0CF0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C0158AA0 (DpiRequestIoPowerState.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C01F7308 (DxgkReleaseAdapterFdoReference.c)
 *     DxgkFreeUnicodeString @ 0x1C029D650 (DxgkFreeUnicodeString.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C029F11C (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  DXGADAPTER *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rcx
  void (__fastcall *v15)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v2 + 1368) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v4[3] = 275LL;
    v4[4] = 21LL;
    v4[5] = -1073741823LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  ExDeleteResourceLite((PERESOURCE)(v2 + 3792));
  ExDeleteResourceLite((PERESOURCE)(v2 + 3304));
  if ( *(_QWORD *)(v2 + 3936) )
    DpiRequestIoPowerState(a1, 7, v5, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 4840));
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 4856));
  DxgkFreeUnicodeString((_QWORD *)(v2 + 4920));
  v6 = *(void **)(v2 + 2728);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v2 + 2728) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v2);
  v9 = *(DXGADAPTER **)(v2 + 3896);
  if ( v9 )
  {
    DxgkReleaseAdapterFdoReference(v9, v7, v8);
    *(_QWORD *)(v2 + 3896) = 0LL;
    *(_QWORD *)(v2 + 3920) = 0LL;
  }
  *(_DWORD *)(v2 + 3280) = 0;
  v10 = *(void **)(v2 + 3296);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v2 + 3296) = 0LL;
  }
  v11 = *(void **)(v2 + 3288);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v2 + 3288) = 0LL;
  }
  v12 = *(void **)(v2 + 4888);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v2 + 4888) = 0LL;
  }
  v13 = *(void **)(v2 + 4896);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(v2 + 4896) = 0LL;
  }
  v14 = *(_QWORD **)(v2 + 4936);
  if ( v14 )
  {
    v15 = (void (__fastcall *)(_QWORD))v14[4];
    if ( v15 )
    {
      v15(v14[2]);
      memset((void *)(*(_QWORD *)(v2 + 4936) + 8LL), 0, 0x38uLL);
      v14 = *(_QWORD **)(v2 + 4936);
    }
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v2 + 4936) = 0LL;
    }
  }
}
