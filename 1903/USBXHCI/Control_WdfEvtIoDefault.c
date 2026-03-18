/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C002C950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Control_MapTransfer @ 0x1C002A448 (Control_MapTransfer.c)
 *     Control_TransferData_Initialize @ 0x1C002B1A8 (Control_TransferData_Initialize.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C002B57C (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x1C002D264 (WPP_RECORDER_SF_DDqDq.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  unsigned __int8 CurrentIrql; // si
  bool v6; // zf
  char v7; // r12
  char v8; // r15
  __int64 v9; // r13
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rdi
  int v13; // r8d
  KIRQL v14; // al
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // [rsp+38h] [rbp-80h]
  _QWORD v18[5]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql == 0;
  if ( !CurrentIrql )
  {
    v4 = KfRaiseIrql(2u);
    v6 = 1;
  }
  v7 = v6;
  v8 = 0;
  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v18);
  v9 = v18[1];
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1,
          off_1C0056388);
  v12 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          off_1C0056090);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v17) = HIDWORD(a2);
    WPP_RECORDER_SF_DDqDq(
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL),
      v11,
      v13,
      *(_DWORD *)(*(_QWORD *)(v10 + 56) + 144LL));
  }
  Control_TransferData_Initialize(v10, a2, v9, (_QWORD *)v12);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
  *(_QWORD *)(v10 + 344) = v12;
  *(_BYTE *)(v10 + 104) = v14;
  *(_DWORD *)(v12 + 128) = 0;
  *(_DWORD *)(v12 + 132) = 0;
  v15 = *(_QWORD *)(v12 + 24);
  *(_DWORD *)(v12 + 112) = 1;
  v16 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)()))(WdfFunctions_01023 + 3144))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v15,
          Control_WdfEvtRequestCancel);
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(v10 + 108) == 2 )
    {
      *(_DWORD *)(v10 + 108) = 3;
      v8 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), *(_BYTE *)(v10 + 104));
    if ( v8 )
      Control_MapTransfer(v10, v7);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v16;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL),
        3u,
        0xEu,
        0x26u,
        (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v10 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v10 + 56) + 144LL),
        v17);
    }
    *(_DWORD *)(v12 + 112) = 3;
    Control_Transfer_CompleteCancelable((_QWORD *)v10, v7);
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), *(_BYTE *)(v10 + 104));
  }
  if ( !CurrentIrql )
    KeLowerIrql(v4);
}
