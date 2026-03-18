/*
 * XREFs of ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C00605B8
 * Callers:
 *     NtFlipObjectOpen @ 0x1C005F620 (NtFlipObjectOpen.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0056394 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x1C006166C (-OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::OpenEndpoint(FlipManagerObject *this, __int64 a2, void **a3, void **a4)
{
  unsigned __int8 v6; // bp
  struct DXGGLOBAL *Global; // rax
  NTSTATUS Handle; // ebx
  __int64 v10; // r8

  v6 = a2;
  if ( !(_BYTE)a2
    || (Global = DXGGLOBAL::GetGlobal((__int64)this, a2),
        (*(unsigned int (**)(void))(*((_QWORD *)Global + 38000) + 296LL))()) )
  {
    Handle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
    if ( Handle >= 0 )
    {
      Handle = DxgkCompositionObject::CreateHandle(this, v6 + 1, v10, 0, a3);
      if ( Handle >= 0 )
        Handle = CFlipManager::OpenEndpoint((FlipManagerObject *)((char *)this + 32), v6, a4);
      CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)Handle;
}
