/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_5ce05ca81319de189dd08790f978f8a8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801273D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180127010 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5ce05ca81319de189dd08790f978f8a8_>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a1 + 6));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
