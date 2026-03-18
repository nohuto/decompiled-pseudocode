/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0059E00
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AD00 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0011250 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00123F0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C005A1F4 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C005A274 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::CompleteFlipManagerToken(CTokenManager *this, void *a2)
{
  int v4; // edi
  _BYTE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  CTokenManager **v10; // rcx
  char v11; // bp
  CTokenManager *v12; // rbx
  struct DXGGLOBAL *v13; // rax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = DxgkCompositionObject::ResolveHandle(a2, 2u, 1, 5, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    Object = 0LL;
    FlipManagerTokenObject::GetPresentId((FlipManagerTokenObject *)v5, (unsigned __int64 *)&Object);
    Global = DXGGLOBAL::GetGlobal(v7, v6);
    (*(void (__fastcall **)(PVOID))(*((_QWORD *)Global + 38000) + 72LL))(Object);
    v4 = FlipManagerTokenObject::MarkCompleted((FlipManagerTokenObject *)v5);
    if ( v4 >= 0 )
    {
      v4 = CPushLock::AcquireLockShared((CPushLock *)(v5 + 72));
      if ( v4 >= 0 )
      {
        v11 = v5[144];
        CPushLock::ReleaseLock((CPushLock *)(v5 + 72));
        if ( v11 )
        {
          v12 = (CTokenManager *)(v5 + 96);
          v10 = (CTokenManager **)*((_QWORD *)this + 36);
          if ( *v10 != (CTokenManager *)((char *)this + 280) )
            __fastfail(3u);
          *(_QWORD *)v12 = (char *)this + 280;
          *((_QWORD *)v12 + 1) = v10;
          *v10 = v12;
          *((_QWORD *)this + 36) = v12;
          v5 = 0LL;
        }
      }
    }
    if ( v5 )
      ObfDereferenceObject(v5);
    v13 = DXGGLOBAL::GetGlobal((__int64)v10, v9);
    (*(void (__fastcall **)(PVOID))(*((_QWORD *)v13 + 38000) + 80LL))(Object);
  }
  ObCloseHandle(a2, 1);
  return (unsigned int)v4;
}
