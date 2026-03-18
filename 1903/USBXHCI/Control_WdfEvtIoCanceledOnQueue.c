/*
 * XREFs of Control_WdfEvtIoCanceledOnQueue @ 0x1C002C7A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Control_TransferData_Initialize @ 0x1C002B1A8 (Control_TransferData_Initialize.c)
 */

__int64 __fastcall Control_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 *v10; // rdx
  int v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+30h] [rbp-58h]
  _QWORD v14[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v14);
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056388);
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C0056090);
  v7 = v14[1];
  v8 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_QWORD *)(v4 + 56);
    v13 = *(_DWORD *)(v9 + 144);
    v12 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v9 + 80),
      4u,
      v6,
      0x27u,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v12,
      v13,
      a2);
  }
  Control_TransferData_Initialize(v4, a2, v7, (_QWORD *)v8);
  *(_DWORD *)(v8 + 112) = 3;
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v10 = *(__int64 **)(v4 + 368);
  if ( *v10 != v4 + 360 )
    __fastfail(3u);
  *(_QWORD *)v8 = v4 + 360;
  *(_QWORD *)(v8 + 8) = v10;
  *v10 = v8;
  *(_QWORD *)(v4 + 368) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 896))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(v4 + 328));
}
