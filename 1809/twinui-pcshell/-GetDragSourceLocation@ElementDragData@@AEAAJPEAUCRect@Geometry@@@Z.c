/*
 * XREFs of ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18031F154
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18031EF98 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18031FBE0 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x18030E7FC (-MapElementRectToAncestor@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U2.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x18031E0DC (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 */

__int64 __fastcall ElementDragData::GetDragSourceLocation(ElementDragData *this, __m128i *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct IUnknown *v6; // r8
  __int64 v7; // rdx
  __int64 v9[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v10; // [rsp+30h] [rbp-58h] BYREF
  __m128i v11; // [rsp+40h] [rbp-48h] BYREF
  __m128i v12; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9[0] = 0LL;
  v4 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>((_QWORD *)this + 4, v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v9[0] + 32LL))(v9[0], &v12);
    v6 = (struct IUnknown *)*((_QWORD *)this + 5);
    v7 = *((_QWORD *)this + 4);
    v10 = v12;
    v5 = 0;
    *a2 = *ElementHelpers::MapElementRectToAncestor(&v11, v7, v6, &v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return v5;
}
