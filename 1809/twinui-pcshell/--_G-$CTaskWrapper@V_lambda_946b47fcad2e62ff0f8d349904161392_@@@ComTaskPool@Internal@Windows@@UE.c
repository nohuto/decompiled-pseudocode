/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_946b47fcad2e62ff0f8d349904161392_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1802409E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180240204 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_946b47fcad2e62ff0f8d349904161392_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)(a1 + 4));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x158);
  return a1;
}
