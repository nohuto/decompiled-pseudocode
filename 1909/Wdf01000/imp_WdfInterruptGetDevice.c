/*
 * XREFs of imp_WdfInterruptGetDevice @ 0x1C0002EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  __int64 v2; // rbx
  FxInterrupt *v3; // rcx
  __int64 Offset; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  v2 = 0LL;
  v3 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxInterrupt *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4135 )
  {
    pFxInterrupt = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v3 = pFxInterrupt;
  }
  m_DeviceBase = v3->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  return (WDFDEVICE__ *)v2;
}
