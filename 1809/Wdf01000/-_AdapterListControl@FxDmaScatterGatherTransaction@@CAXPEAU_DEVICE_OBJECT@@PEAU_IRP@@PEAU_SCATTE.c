/*
 * XREFs of ?_AdapterListControl@FxDmaScatterGatherTransaction@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0037590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C0034FCC (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 */

void __fastcall FxDmaScatterGatherTransaction::_AdapterListControl(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        _SCATTER_GATHER_LIST *SgList,
        unsigned __int64 Context)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  WDFDMATRANSACTION__ *v5; // rdi
  __int64 v8; // rax
  void *v9; // r9
  __int64 v10; // r8
  WDFDEVICE__ *v11; // r8

  v4 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
  v5 = (WDFDMATRANSACTION__ *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(Context + 10) )
    v5 = 0LL;
  if ( v4->FxVerifierOn && v4->FxVerboseOn )
    WPP_IFR_SF_q(v4, 5u, 0xFu, 0x12u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v5);
  v8 = *(_QWORD *)(Context + 128);
  v9 = *(void **)(Context + 160);
  *(_QWORD *)(Context + 256) = SgList;
  v10 = *(_QWORD *)(v8 + 96);
  LOWORD(v8) = *(_WORD *)(v10 + 10);
  v11 = (WDFDEVICE__ *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !(_WORD)v8 )
    v11 = 0LL;
  FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
    (FxDmaTransactionProgramOrReserveDma *)(Context + 152),
    v5,
    v11,
    v9,
    *(_DWORD *)(Context + 124),
    SgList);
  if ( v4->FxVerifierOn )
  {
    if ( v4->FxVerboseOn )
      WPP_IFR_SF_q(v4, 5u, 0xFu, 0x13u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v5);
  }
}
