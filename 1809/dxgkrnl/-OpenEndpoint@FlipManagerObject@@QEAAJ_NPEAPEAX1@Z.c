/*
 * XREFs of ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C0059518
 * Callers:
 *     NtFlipObjectOpen @ 0x1C0058570 (NtFlipObjectOpen.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C004F240 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C005A64C (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::OpenEndpoint(FlipManagerObject *this, unsigned __int8 a2, void **a3, void **a4)
{
  struct DXGGLOBAL *Global; // rax
  NTSTATUS Handle; // ebx
  __int64 v10; // r8

  if ( !a2
    || (Global = DXGGLOBAL::GetGlobal((__int64)this), (*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))()) )
  {
    Handle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
    if ( Handle >= 0 )
    {
      Handle = DxgkCompositionObject::CreateHandle(this, a2 + 1, v10, 0, a3);
      if ( Handle >= 0 )
        Handle = CFlipManager::OpenEndpoint((FlipManagerObject *)((char *)this + 32), a2, a4);
      CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)Handle;
}
