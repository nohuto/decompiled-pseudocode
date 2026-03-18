/*
 * XREFs of ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0132070
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00C4C9C (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00ED0A0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetSavedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  SIZE_T v7; // rax
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 4866LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 101) && a2 )
  {
    v7 = 4LL * (unsigned int)(*(_DWORD *)(v5 + 1848) * *(_DWORD *)(v5 + 1852));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v5 + 1848) * *(_DWORD *)(v5 + 1852)), 4uLL) )
      v7 = -1LL;
    *((_QWORD *)this + 101) = operator new(v7, 0x4B677844u, PagedPool);
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784);
}
