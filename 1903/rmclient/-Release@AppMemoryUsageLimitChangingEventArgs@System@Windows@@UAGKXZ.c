/*
 * XREFs of ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ @ 0x10008220
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z @ 0x10008790 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W3AGKXZ @ 0x1000D6F0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W3AGKXZ.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7AGKXZ @ 0x1000D700 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7AGKXZ.c)
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
