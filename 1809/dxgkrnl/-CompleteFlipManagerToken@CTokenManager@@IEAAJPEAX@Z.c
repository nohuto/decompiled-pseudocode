/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0053490
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000CF10 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D71C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000DC9C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C00538A4 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::CompleteFlipManagerToken(CTokenManager *this, void *a2)
{
  _BYTE *v4; // rbx
  int v5; // edi
  char v6; // bp
  CTokenManager *v7; // rbx
  CTokenManager **v8; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = 0LL;
  v5 = DxgkCompositionObject::ResolveHandle(a2, 2u, 1, 5, &Object);
  if ( v5 >= 0 )
  {
    v4 = Object;
    v5 = FlipManagerTokenObject::MarkCompleted((FlipManagerTokenObject *)Object);
    if ( v5 >= 0 )
    {
      v5 = CPushLock::AcquireLockShared((CPushLock *)(v4 + 72));
      if ( v5 >= 0 )
      {
        v6 = v4[144];
        CPushLock::ReleaseLock((CPushLock *)(v4 + 72));
        if ( v6 )
        {
          v7 = (CTokenManager *)(v4 + 96);
          v8 = (CTokenManager **)*((_QWORD *)this + 36);
          if ( *v8 != (CTokenManager *)((char *)this + 280) )
            __fastfail(3u);
          *(_QWORD *)v7 = (char *)this + 280;
          *((_QWORD *)v7 + 1) = v8;
          *v8 = v7;
          *((_QWORD *)this + 36) = v7;
          v4 = 0LL;
        }
      }
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  ObCloseHandle(a2, 1);
  return (unsigned int)v5;
}
