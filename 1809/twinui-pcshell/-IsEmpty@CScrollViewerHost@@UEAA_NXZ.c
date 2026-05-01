/*
 * XREFs of ?IsEmpty@CScrollViewerHost@@UEAA_NXZ @ 0x18030A770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802F9AE4 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

char __fastcall CScrollViewerHost::IsEmpty(CScrollViewerHost *this)
{
  char v1; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((_QWORD *)this + 56, &v3) < 0 )
    v1 = 1;
  else
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 408LL))(v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  return v1;
}
