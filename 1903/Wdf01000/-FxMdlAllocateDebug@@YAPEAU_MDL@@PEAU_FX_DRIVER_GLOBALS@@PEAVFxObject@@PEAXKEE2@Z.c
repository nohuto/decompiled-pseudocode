/*
 * XREFs of ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C005E338
 * Callers:
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004F0BC (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004F3F8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004F894 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C004FB38 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0095D78 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 * Callees:
 *     memset @ 0x1C001B300 (memset.c)
 */

PMDL __fastcall FxMdlAllocateDebug(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *Owner,
        void *VirtualAddress,
        ULONG Length,
        unsigned __int8 ChargeQuota,
        BOOLEAN CallersAddress,
        void *FxDriverGlobals_0)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  unsigned __int64 *p_AllocatedMdlsLock; // r12
  FxAllocatedMdls **p_Next; // rsi
  FxAllocatedMdls *p_AllocatedMdls; // rbx
  PMDL v15; // rdi
  KIRQL v16; // r13
  FxAllocatedMdls *PoolWithTag; // rax
  __int64 v18; // rsi
  FxAllocatedMdls *v19; // rax
  PMDL Mdl; // rax
  __int64 v21; // rdx

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( !DebugExtension )
    return IoAllocateMdl(VirtualAddress, Length, 0, CallersAddress, 0LL);
  p_AllocatedMdlsLock = &DebugExtension->AllocatedMdlsLock;
  p_Next = 0LL;
  p_AllocatedMdls = &DebugExtension->AllocatedMdls;
  v15 = 0LL;
  v16 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedMdlsLock);
  if ( p_AllocatedMdls )
  {
    do
    {
      if ( p_AllocatedMdls->Count != 16 )
        break;
      p_Next = &p_AllocatedMdls->Next;
      p_AllocatedMdls = p_AllocatedMdls->Next;
    }
    while ( p_AllocatedMdls );
    if ( p_AllocatedMdls )
      goto LABEL_9;
  }
  PoolWithTag = (FxAllocatedMdls *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x190uLL, FxDriverGlobals->Tag);
  p_AllocatedMdls = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(FxAllocatedMdls));
    *p_Next = p_AllocatedMdls;
LABEL_9:
    v18 = 0LL;
    v19 = p_AllocatedMdls;
    while ( v19->Info[0].Mdl )
    {
      v18 = (unsigned int)(v18 + 1);
      v19 = (FxAllocatedMdls *)((char *)v19 + 24);
      if ( (unsigned int)v18 >= 0x10 )
        goto LABEL_15;
    }
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, CallersAddress, 0LL);
    v15 = Mdl;
    if ( Mdl )
    {
      v21 = v18;
      p_AllocatedMdls->Info[v21].Mdl = Mdl;
      p_AllocatedMdls->Info[v21].Owner = Owner;
      p_AllocatedMdls->Info[v21].Caller = FxDriverGlobals_0;
      ++p_AllocatedMdls->Count;
    }
  }
LABEL_15:
  KeReleaseSpinLock(p_AllocatedMdlsLock, v16);
  return v15;
}
