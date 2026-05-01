/*
 * XREFs of ?AttachThumbnail@CMultitaskingViewElementBase@@UEAAJPEAUIDCompThumbnail@@@Z @ 0x180303900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::AttachThumbnail(
        CMultitaskingViewElementBase *this,
        struct IDCompThumbnail *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 11);
  if ( !v2 )
  {
    v3 = -2147023728;
    v4 = 850LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)v3);
    return v3;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *))(*(_QWORD *)v2 + 192LL))(v2, a2);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 851LL;
    goto LABEL_5;
  }
  return v3;
}
