/*
 * XREFs of ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1803614D8
 * Callers:
 *     ?OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1803605A0 (-OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x180360610 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     ?OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1803606A0 (-OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180360140 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x1803616C0 (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 */

__int64 __fastcall AppResizeView::UpdateAppResizeData(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  int v7; // eax
  unsigned int v8; // esi
  int inited; // eax
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // eax
  bool v14; // cc
  int v15; // ebp
  __int64 v16; // rcx
  int updated; // eax
  unsigned int v18; // edi
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+48h] [rbp-40h]
  _DWORD v22[6]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = 2;
  if ( (a3 & 2) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64));
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64));
    inited = AppResizeView::InitAppResizeData((AppResizeView *)a1, (const struct Geometry::CPoint *)a2);
    v11 = inited;
    if ( inited < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)inited);
      return v11;
    }
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 108) - 1;
    if ( v12 >= *(_DWORD *)a2 )
      v12 = *(_DWORD *)a2;
    if ( *(_DWORD *)(a1 + 100) > v12 )
      v12 = *(_DWORD *)(a1 + 100);
    v13 = *(_DWORD *)(a1 + 112) - 1;
    v14 = v13 < *(_DWORD *)(a2 + 4);
    LODWORD(v19) = v12;
    if ( !v14 )
      v13 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a1 + 104) > v13 )
      v13 = *(_DWORD *)(a1 + 104);
    HIDWORD(v19) = v13;
    v15 = a3 & 4;
    if ( v15 || v12 != *(_DWORD *)(a1 + 140) || v13 != *(_DWORD *)(a1 + 144) )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 64) + 32LL))(*(_QWORD *)(a1 + 64), v22);
      v16 = *(_QWORD *)(a1 + 64);
      v21 = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      (*(void (__fastcall **)(__int64, __int64 *, __m128i *))(*(_QWORD *)v16 + 24LL))(v16, &v19, &si128);
      if ( v15 || si128.m128i_i32[0] != v22[0] || ((si128.m128i_i32[0] - 2) & 0xFFFFFFFD) == 0 )
        v3 = 3;
      updated = AppResizeView::UpdateDropFeedback(
                  a1,
                  v22[0],
                  si128.m128i_u32[0],
                  &v19,
                  (v22[0] != si128.m128i_i32[0] ? 4 : 0) | (unsigned int)v3);
      v18 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
          (const char *)(unsigned int)updated);
        return v18;
      }
      *(_QWORD *)(a1 + 140) = v19;
    }
  }
  return 0LL;
}
