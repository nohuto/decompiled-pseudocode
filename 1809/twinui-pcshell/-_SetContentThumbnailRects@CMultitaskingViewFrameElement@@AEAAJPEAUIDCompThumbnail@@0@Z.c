/*
 * XREFs of ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x18030D6A4
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18030C8C4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x18030D408 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x18030D290 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::_SetContentThumbnailRects(
        CMultitaskingViewFrameElement *this,
        struct IDCompThumbnail *a2,
        struct IDCompThumbnail *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __m128i v9; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, (struct tagRECT *)&v9, (_DWORD *)this + 14);
  v6 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __m128i *, _QWORD, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v9,
         0LL,
         0LL);
  if ( v6 < 0 )
  {
    v7 = 762LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( a3 )
  {
    v10 = (struct tagRECT)v9;
    v10.top = _mm_srli_si128(v9, 8).m128i_i32[1] - *((_DWORD *)this + 87);
    v6 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)a3 + 24LL))(
           a3,
           &v10,
           0LL,
           0LL);
    if ( v6 < 0 )
    {
      v7 = 767LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
