/*
 * XREFs of imp_WdfDeviceGetIoTarget @ 0x1C0017F30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  __int64 Offset; // r8
  FxDeviceBase *v3; // rcx
  unsigned __int64 result; // rax
  __int16 v5; // cx
  FxDeviceBase *pDeviceBase; // [rsp+48h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  LOWORD(Offset) = 0;
  v3 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxDeviceBase *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4144 )
  {
    pDeviceBase = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDeviceBase, (void *)Device, 0x1030u, Offset);
    v3 = pDeviceBase;
  }
  result = (unsigned __int64)v3->GetDefaultIoTarget(v3);
  if ( result )
  {
    v5 = *(_WORD *)(result + 10);
    result ^= 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v5 )
      return 0LL;
  }
  return result;
}
