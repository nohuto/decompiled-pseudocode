/*
 * XREFs of imp_WdfWaitLockAcquire @ 0x1C000B610
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

NTSTATUS __fastcall imp_WdfWaitLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Lock, __int64 *Timeout)
{
  __int64 v4; // r8
  FxWaitLock *v5; // rcx
  NTSTATUS result; // eax
  FxWaitLockInternal *v7; // rdi
  NTSTATUS v8; // ebx
  FxWaitLock *pLock; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  if ( !Lock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1023uLL);
  LOWORD(v4) = 0;
  v5 = (FxWaitLock *)(~Lock & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Lock & 1) != 0 )
  {
    v4 = LOWORD(v5->__vftable);
    v5 = (FxWaitLock *)((char *)v5 - v4);
  }
  if ( v5->m_Type == 4131 )
  {
    pLock = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pLock, (void *)Lock, 0x1023u, v4);
    v5 = pLock;
  }
  if ( !Timeout || *Timeout )
  {
    result = FxVerifierCheckIrqlLevel(v5->m_Globals, 0);
    if ( result < 0 )
      return result;
    v5 = pLock;
  }
  v7 = &v5->FxWaitLockInternal;
  if ( Timeout )
    v10 = *Timeout;
  KeEnterCriticalRegion();
  v8 = KeWaitForSingleObject(v7, Executive, 0, 0, (PLARGE_INTEGER)((unsigned __int64)&v10 & -(__int64)(Timeout != 0LL)));
  if ( v8 == 258 )
    KeLeaveCriticalRegion();
  else
    v7->m_OwningThread = KeGetCurrentThread();
  return v8;
}
