/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C0028010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Control_MapTransfer @ 0x1C0025CF8 (Control_MapTransfer.c)
 *     Control_TransferData_Initialize @ 0x1C00269CC (Control_TransferData_Initialize.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0026D94 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x1C00288E4 (WPP_RECORDER_SF_DDqDq.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  unsigned __int8 CurrentIrql; // si
  bool v6; // zf
  char v7; // r15
  char v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r13
  int v12; // edx
  int v13; // r8d
  KIRQL v14; // al
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // [rsp+38h] [rbp-80h]
  int v18; // [rsp+40h] [rbp-78h]
  _QWORD v19[5]; // [rsp+50h] [rbp-68h] BYREF

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
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v19);
  v9 = v19[1];
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1,
          off_1C004F360);
  v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a2,
          off_1C004F068);
  v18 = *(_DWORD *)(v9 + 36);
  HIDWORD(v17) = HIDWORD(a2);
  WPP_RECORDER_SF_DDqDq(*(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL), v12, v13, *(_DWORD *)(*(_QWORD *)(v10 + 56) + 144LL));
  Control_TransferData_Initialize(v10, a2, v9, (_QWORD *)v11);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
  *(_QWORD *)(v10 + 344) = v11;
  *(_BYTE *)(v10 + 104) = v14;
  *(_DWORD *)(v11 + 128) = 0;
  *(_DWORD *)(v11 + 132) = 0;
  v15 = *(_QWORD *)(v11 + 24);
  *(_DWORD *)(v11 + 112) = 1;
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
    LODWORD(v17) = v16;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL),
      3u,
      0xEu,
      0x26u,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v10 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v10 + 56) + 144LL),
      v17,
      v18,
      v11);
    *(_DWORD *)(v11 + 112) = 3;
    Control_Transfer_CompleteCancelable((_QWORD *)v10, v7);
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), *(_BYTE *)(v10 + 104));
  }
  if ( !CurrentIrql )
    KeLowerIrql(v4);
}
