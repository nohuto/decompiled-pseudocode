/*
 * XREFs of ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x180315BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180315EF8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x180316138 (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 */

__int64 __fastcall AccessibleElementBase::ScrollIntoView(AccessibleElementBase *this)
{
  int ParentScrollViewer; // ebx
  void *v4; // [rsp+30h] [rbp+8h] BYREF
  struct IScrollViewer *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  ParentScrollViewer = AccessibleElementBase::_GetParentScrollViewer((AccessibleElementBase *)((char *)this - 56), &v5);
  if ( ParentScrollViewer >= 0 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
    ParentScrollViewer = AccessibleElementBase::_GetElement(
                           (AccessibleElementBase *)((char *)this - 56),
                           &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
                           &v4);
    if ( ParentScrollViewer >= 0 )
    {
      (*(void (__fastcall **)(struct IScrollViewer *, void *))(*(_QWORD *)v5 + 24LL))(v5, v4);
      ParentScrollViewer = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return (unsigned int)ParentScrollViewer;
}
