/*
 * XREFs of ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1803C74B0
 * Callers:
 *     ?OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1803C64A0 (-OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1803C6510 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 *     ?OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x1803C65A0 (-OnPointerUpdate@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1803C6040 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x1803C768C (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 */

__int64 __fastcall AppResizeView::UpdateAppResizeData(__int64 a1, int *a2, char a3)
{
  int v3; // esi
  int updated; // edi
  __int64 v8; // rdx
  int v10; // edi
  int inited; // eax
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // eax
  bool v15; // cc
  char v16; // bp
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h] BYREF
  int v20; // [rsp+48h] [rbp-40h]
  _DWORD v21[6]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = 2;
  if ( (a3 & 2) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64));
    if ( updated < 0 )
    {
      v8 = 455LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v10 = 1;
  if ( (a3 & 1) == 0 )
  {
    v13 = *(_DWORD *)(a1 + 108) - 1;
    if ( v13 >= *a2 )
      v13 = *a2;
    if ( *(_DWORD *)(a1 + 100) > v13 )
      v13 = *(_DWORD *)(a1 + 100);
    v14 = *(_DWORD *)(a1 + 112) - 1;
    v15 = v14 < a2[1];
    LODWORD(v18) = v13;
    if ( !v15 )
      v14 = a2[1];
    if ( *(_DWORD *)(a1 + 104) > v14 )
      v14 = *(_DWORD *)(a1 + 104);
    HIDWORD(v18) = v14;
    if ( (a3 & 4) != 0 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 0;
      if ( v13 == *(_DWORD *)(a1 + 140) && v14 == *(_DWORD *)(a1 + 144) )
        return 0LL;
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 64) + 32LL))(*(_QWORD *)(a1 + 64), v21);
    v17 = *(_QWORD *)(a1 + 64);
    v20 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    (*(void (__fastcall **)(__int64, __int64 *, __m128i *))(*(_QWORD *)v17 + 24LL))(v17, &v18, &si128);
    if ( !v16 && si128.m128i_i32[0] == v21[0] && ((si128.m128i_i32[0] - 2) & 0xFFFFFFFD) != 0 )
      v10 = 0;
    if ( si128.m128i_i32[0] != v21[0] )
      v3 = 6;
    updated = AppResizeView::UpdateDropFeedback(a1, v21[0], si128.m128i_u32[0], &v18, v3 | (unsigned int)v10);
    if ( updated < 0 )
    {
      v8 = 491LL;
      goto LABEL_4;
    }
    *(_QWORD *)(a1 + 140) = v18;
    return 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 48LL))(*(_QWORD *)(a1 + 64));
  inited = AppResizeView::InitAppResizeData((AppResizeView *)a1, (const struct Geometry::CPoint *)a2);
  v12 = inited;
  if ( inited < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CF,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)inited);
    return v12;
  }
  return 0LL;
}
