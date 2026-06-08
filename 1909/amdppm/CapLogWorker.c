/*
 * XREFs of CapLogWorker @ 0x1C00277F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCap @ 0x1C001D020 (ProcLibTraceCap.c)
 */

void __fastcall CapLogWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d

  v2 = *(_QWORD *)Context;
  v3 = *((_QWORD *)Context + 1);
  IoUninitializeWorkItem((PIO_WORKITEM)(Context + 24));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
    0LL);
  v5 = *(_QWORD *)(v2 + 728);
  v6 = *(_QWORD *)(v2 + 736);
  if ( v5 )
    v6 += MEMORY[0xFFFFF78000000014] - v5;
  v7 = *(_DWORD *)(v2 + 744) - *(_DWORD *)(v3 + 136);
  v8 = *(_DWORD *)(v2 + 748) - *(_DWORD *)(v3 + 140);
  v9 = *(_DWORD *)(v2 + 752) - *(_DWORD *)(v3 + 144);
  if ( v6 != *(_QWORD *)(v3 + 128) || v7 || v8 || v9 )
  {
    ProcLibTraceCap(v2, (v6 - *(_QWORD *)(v3 + 128)) / 10000000, v7, v8, v9, *((PCEVENT_DESCRIPTOR *)Context + 2));
    *(_QWORD *)(v3 + 128) = v6;
    *(_DWORD *)(v3 + 136) = *(_DWORD *)(v2 + 744);
    *(_DWORD *)(v3 + 140) = *(_DWORD *)(v2 + 748);
    *(_DWORD *)(v3 + 144) = *(_DWORD *)(v2 + 752);
  }
  else
  {
    KeCancelTimer((PKTIMER)v3);
    *(_BYTE *)(v3 + 148) = 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013418);
  ExFreePoolWithTag(Context, 0x72637250u);
}
