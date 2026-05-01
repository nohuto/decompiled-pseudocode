/*
 * XREFs of ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x18031CD10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x18031D0E4 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x18031D4DC (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall CScrollViewer::ScrollIntoView(CScrollViewer *this, struct IMultitaskingViewElement *a2)
{
  __int64 (__fastcall *v4)(__m128i *, _BYTE *); // rdi
  __m128i *v5; // rbx
  int *v6; // rax
  __m128i v7; // xmm0
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rbx
  __int64 VisibleRect; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // edx
  _BYTE v17[8]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v18[8]; // [rsp+28h] [rbp-38h] BYREF
  __m128i v19; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-20h] BYREF

  v4 = (__int64 (__fastcall *)(__m128i *, _BYTE *))Geometry::CRect::GetVerticalSegment;
  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v4 = (__int64 (__fastcall *)(__m128i *, _BYTE *))Geometry::CRect::GetHorizontalSegment;
  v5 = (__m128i *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, _BYTE *))(*(_QWORD *)a2 + 96LL))(
                    a2,
                    v20);
  v6 = (int *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this - 26) + 120LL))((char *)this - 208, v18);
  v19 = *v5;
  v7 = v19;
  v8 = *v6;
  v9 = -v6[1];
  v19.m128i_i32[3] -= v6[1];
  v10 = -v8;
  v19.m128i_i32[2] += v10;
  v19.m128i_i32[1] += v9;
  v19.m128i_i32[0] = v10 + _mm_cvtsi128_si32(v7);
  v11 = *(_QWORD *)v4(&v19, v17);
  VisibleRect = CScrollViewer::_GetVisibleRect((char *)this - 208);
  v13 = *(_QWORD *)v4((__m128i *)VisibleRect, v17);
  v14 = HIDWORD(v11);
  v15 = HIDWORD(v13);
  if ( (int)v11 < (int)v13 || (LODWORD(v14) = HIDWORD(v11), LODWORD(v15) = HIDWORD(v13), SHIDWORD(v11) > SHIDWORD(v13)) )
  {
    if ( (int)v14 <= (int)v15 )
    {
      if ( (int)v11 >= (int)v13 )
        return;
      v16 = v13 + *((_DWORD *)this + 12) - v11;
    }
    else
    {
      v16 = v15 + *((_DWORD *)this + 12) - v14;
    }
    CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), v16, 0);
  }
}
