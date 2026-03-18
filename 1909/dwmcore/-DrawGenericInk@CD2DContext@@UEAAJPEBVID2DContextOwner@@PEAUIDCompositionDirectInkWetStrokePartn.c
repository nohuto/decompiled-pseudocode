/*
 * XREFs of ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x18015F630
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180160D04 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 */

__int64 __fastcall CD2DContext::DrawGenericInk(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IDCompositionDirectInkWetStrokePartner *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        enum D2D1_PRIMITIVE_BLEND a5,
        float a6,
        bool a7)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rbx
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  enum D2D1_ANTIALIAS_MODE v19; // [rsp+30h] [rbp-58h] BYREF
  struct D2D_MATRIX_3X2_F v20; // [rsp+38h] [rbp-50h] BYREF

  v19 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a5, &v19, &v20);
  v12 = *((_DWORD *)this + 98);
  v13 = 0LL;
  if ( v12 )
    v13 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v12 - 1));
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14
    && *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v14 + 24LL))(v14, &v20) + 8) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
  }
  v15 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int64, __int64, bool))(*(_QWORD *)a3 + 56LL))(
          a3,
          v10,
          v11,
          a7);
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x204u, 0LL);
  return v17;
}
