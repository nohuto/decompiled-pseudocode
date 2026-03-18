/*
 * XREFs of ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C0036CF0
 * Callers:
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0037320 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C00311F8 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::BuildScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        void (__fastcall *Context)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *),
        void *ScatterGatherBuffer,
        void *ScatterGatherBufferLength,
        unsigned int Mdl_0)
{
  KIRQL v12; // si
  __int64 v13; // r11
  _DMA_ADAPTER *AdapterObject; // rdi
  unsigned int m_Flags; // edx
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // eax
  unsigned int v20; // ebx
  unsigned __int8 v22; // [rsp+38h] [rbp-60h]
  char m_DmaDirection; // [rsp+48h] [rbp-50h]

  v12 = KfRaiseIrql(2u);
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    AdapterObject = this->m_AdapterInfo->AdapterObject;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, 0, 0xFu) )
      m_Flags = this->m_Flags;
    m_DmaDirection = this->m_DmaDirection;
    v19 = (*(__int64 (__fastcall **)(_DMA_ADAPTER *, _QWORD, void *, _MDL *, unsigned __int64, unsigned int, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, char, void *, unsigned int, __int64, __int64, __int64))(v17 + 200))(
            AdapterObject,
            *(_QWORD *)(v18 + 168),
            this->m_TransferContext,
            Mdl,
            CurrentOffset,
            Length,
            m_Flags,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            m_DmaDirection,
            ScatterGatherBufferLength,
            Mdl_0,
            v16,
            v16,
            v16);
  }
  else
  {
    v22 = this->m_DmaDirection;
    v19 = this->m_AdapterInfo->AdapterObject->DmaOperations->BuildScatterGatherList(
            this->m_AdapterInfo->AdapterObject,
            *(_DEVICE_OBJECT **)(v13 + 168),
            Mdl,
            (char *)Mdl->StartVa + Mdl->ByteOffset + CurrentOffset,
            Length,
            FxDmaScatterGatherTransaction::_AdapterListControl,
            ScatterGatherBuffer,
            v22,
            ScatterGatherBufferLength,
            Mdl_0);
  }
  v20 = v19;
  KeLowerIrql(v12);
  return v20;
}
