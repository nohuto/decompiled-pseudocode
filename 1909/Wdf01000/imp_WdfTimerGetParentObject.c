/*
 * XREFs of imp_WdfTimerGetParentObject @ 0x1C0001ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer)
{
  __int64 v2; // rbx
  FxTimer *v3; // rcx
  __int64 Offset; // r8
  FxObject *m_Object; // rdx
  FxTimer *pFxTimer; // [rsp+48h] [rbp+10h] BYREF

  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  v2 = 0LL;
  v3 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxTimer *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4136 )
  {
    pFxTimer = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v3 = pFxTimer;
  }
  m_Object = v3->m_Object;
  if ( m_Object && m_Object->m_ObjectSize )
    return (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  return v2;
}
