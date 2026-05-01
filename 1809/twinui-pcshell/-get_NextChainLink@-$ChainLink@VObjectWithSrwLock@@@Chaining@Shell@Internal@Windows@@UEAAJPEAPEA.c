/*
 * XREFs of ?get_NextChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x1801C1030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::get_NextChainLink(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx

  *a2 = 0LL;
  v4 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
  AcquireSRWLockShared(v4);
  if ( *(_QWORD *)(a1 + 24) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
    *a2 = *(_QWORD *)(a1 + 24);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
