/*
 * XREFs of ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180308C50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1802FB878 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180307874 (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z @ 0x1803085E8 (-GetNearestEdgeToPointDistanceSquared@CRect@Geometry@@QEBAJAEBUCPoint@2@@Z.c)
 *     ?HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z @ 0x180318ED0 (-HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z.c)
 */

__int64 __fastcall CSwitchItemGrid::MoveVirtualCursor(__m128i *this, const struct Geometry::CPoint *a2)
{
  char *m128i_i8; // r15
  __int64 v6; // rcx
  _DWORD *v7; // r8
  __int64 v8; // kr00_8
  int v9; // ebx
  int v10; // eax
  __m128i v11; // xmm1
  int *v12; // r14
  int v13; // edx
  unsigned __int64 v14; // xmm0_8
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned __int64 v18; // r8
  int v19; // r8d
  LONG v20; // ecx
  LONG right; // eax
  LONG left; // r8d
  LONG v23; // ecx
  LONG v24; // eax
  LONG bottom; // edx
  bool v26; // cc
  unsigned __int64 top; // r8
  struct IUnknown *v28; // rbx
  __int64 *v29; // rdi
  int v30; // r13d
  __int64 v31; // rax
  __int64 *v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __m128i v35; // xmm0
  int NearestEdgeToPointDistanceSquared; // eax
  struct IUnknown *v37; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-48h] BYREF
  int v39; // [rsp+30h] [rbp-40h] BYREF
  int v40; // [rsp+34h] [rbp-3Ch]
  __m128i v41; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+48h] [rbp-28h] BYREF
  char v43[16]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  if ( this[-12].m128i_i64[1] )
  {
    m128i_i8 = this[-13].m128i_i8;
    (*(void (__fastcall **)(__m128i *, int *))(this[-13].m128i_i64[0] + 120))(this - 13, &v39);
    if ( !this[45].m128i_i8[12] )
    {
      v6 = this[-3].m128i_i64[1];
      this[45].m128i_i8[12] = 1;
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v6 + 88LL))(v6, &v41);
      v8 = v7[3] - v7[1];
      LODWORD(v38) = (v7[2] - *v7) / 2 + *v7;
      HIDWORD(v38) = v7[1] + v8 / 2;
      HIDWORD(v37) = HIDWORD(v38) - v40;
      LODWORD(v37) = v38 - v39;
      *(__int64 *)((char *)this[45].m128i_i64 + 4) = (__int64)v37;
    }
    v9 = MulDiv(*(_DWORD *)a2, this[-9].m128i_i32[0] - this[-10].m128i_i32[2], this[40].m128i_i32[0]);
    v10 = MulDiv(*((_DWORD *)a2 + 1), this[-9].m128i_i32[1] - this[-10].m128i_i32[3], this[40].m128i_i32[1]);
    v11 = this[37];
    v12 = &this[45].m128i_i32[1];
    this[45].m128i_i32[2] += v10;
    this[45].m128i_i32[1] += v9;
    v13 = this[45].m128i_i32[1];
    v14 = _mm_srli_si128(v11, 8).m128i_u64[0];
    v15 = v13;
    if ( (int)v14 < v13 )
      v15 = v14;
    if ( v11.m128i_i32[0] <= v15 )
    {
      if ( (int)v14 < v13 )
        v13 = v14;
    }
    else
    {
      v13 = v11.m128i_i32[0];
    }
    *v12 = v13;
    v16 = this[45].m128i_i32[2];
    v17 = v16;
    if ( SHIDWORD(v14) < v16 )
      v17 = HIDWORD(v14);
    v18 = HIDWORD(v11.m128i_i64[0]);
    if ( v11.m128i_i32[1] <= v17 )
    {
      if ( SHIDWORD(v14) < v16 )
        v16 = HIDWORD(v14);
      LODWORD(v18) = v16;
    }
    this[45].m128i_i32[2] = v18;
    GridLayout::HitTestRow(
      (GridLayout *)&this[35],
      (const struct Geometry::CPoint *)((char *)this[45].m128i_i64 + 4),
      &v38);
    v19 = this[35].m128i_i32[1];
    rc = *(struct tagRECT *)(this[38].m128i_i64[0] + 56 * v38 + 8);
    InflateRect(&rc, 0, v19);
    v20 = *v12;
    right = *v12;
    left = rc.left;
    if ( rc.right < *v12 )
      right = rc.right;
    if ( rc.left <= right )
    {
      if ( rc.right < v20 )
        v20 = rc.right;
      left = v20;
    }
    v23 = this[45].m128i_i32[2];
    v24 = v23;
    bottom = rc.bottom;
    v26 = rc.bottom < v23;
    *v12 = left;
    top = (unsigned int)rc.top;
    if ( v26 )
      v24 = bottom;
    if ( rc.top <= v24 )
    {
      if ( bottom < v23 )
        v23 = bottom;
      top = (unsigned int)v23;
    }
    this[45].m128i_i32[2] = top;
    v28 = 0LL;
    v29 = (__int64 *)this[-12].m128i_i64[0];
    v30 = 0x7FFFFFFF;
    v31 = this[-12].m128i_i64[1];
    v37 = 0LL;
    v32 = &v29[v31];
    if ( v29 != v32 )
    {
      while ( 1 )
      {
        v38 = 0LL;
        Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(v29, (__int64 *)&v38);
        v33 = *(_QWORD *)v12;
        v34 = *v29;
        v41.m128i_i32[1] = HIDWORD(*(_QWORD *)v12);
        v41.m128i_i32[1] += v40;
        v41.m128i_i32[0] = v39 + v33;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v34 + 112LL))(v34, &v41) )
          break;
        v41 = *(__m128i *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v29 + 88LL))(*v29, v43);
        v35 = v41;
        v41.m128i_i32[2] -= v39;
        v41.m128i_i32[3] -= v40;
        v41.m128i_i32[1] -= v40;
        v41.m128i_i32[0] = _mm_cvtsi128_si32(v35) - v39;
        NearestEdgeToPointDistanceSquared = Geometry::CRect::GetNearestEdgeToPointDistanceSquared(
                                              (Geometry::CRect *)&v41,
                                              (const struct tagPOINT *)((char *)this[45].m128i_i64 + 4));
        if ( NearestEdgeToPointDistanceSquared < v30 )
        {
          v30 = NearestEdgeToPointDistanceSquared;
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v37, v29);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
        if ( ++v29 == v32 )
          goto LABEL_36;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v37, v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
LABEL_36:
      v28 = v37;
    }
    if ( !ElementHelpers::IsSameElement(
            v28,
            (struct IUnknown *)this[-3].m128i_i64[1],
            (struct IMultitaskingViewElement *)top) )
      (*(void (__fastcall **)(char *, struct IUnknown *))(*(_QWORD *)m128i_i8 + 288LL))(m128i_i8, v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
