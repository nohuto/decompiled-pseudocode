/*
 * XREFs of ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801B36DC
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801B32A8 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180175DA8 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801B2D0C (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801B40A0 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForRender(CSpriteVectorShape *this)
{
  __int64 *v1; // r15
  unsigned int v3; // esi
  float v4; // xmm0_4
  __int64 v5; // rdx
  float v6; // xmm6_4
  CD3DDeviceManager *v7; // rcx
  __int64 v8; // r14
  float *v9; // rsi
  float *v10; // rbx
  unsigned __int64 v11; // r12
  float v12; // xmm0_4
  float v13; // xmm0_4
  float *v14; // r14
  bool v15; // zf
  int D2DFactoryNoRef; // eax
  gsl::details *v17; // rcx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  float *v22; // [rsp+38h] [rbp-39h] BYREF
  float *v23; // [rsp+40h] [rbp-31h]
  float *v24; // [rsp+48h] [rbp-29h]
  struct CD2DFactory *v25; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v26[4]; // [rsp+58h] [rbp-19h] BYREF
  int v27; // [rsp+68h] [rbp-9h]
  int v28; // [rsp+6Ch] [rbp-5h]
  float v29; // [rsp+70h] [rbp-1h]
  BOOL v30; // [rsp+74h] [rbp+3h]

  v1 = (__int64 *)((char *)this + 120);
  v3 = 0;
  if ( !*((_QWORD *)this + 15) )
  {
    v4 = fmaxf(0.0, *((float *)this + 48));
    v5 = *((_QWORD *)this + 19) - *((_QWORD *)this + 18);
    v22 = 0LL;
    v6 = 1.0 / v4;
    v23 = 0LL;
    v24 = 0LL;
    std::vector<float>::reserve(&v22, v5 >> 2);
    v8 = 0LL;
    v9 = (float *)*((_QWORD *)this + 18);
    v10 = v23;
    v11 = (unsigned __int64)(*((_QWORD *)this + 19) - (_QWORD)v9 + 3LL) >> 2;
    if ( (unsigned __int64)v9 > *((_QWORD *)this + 19) )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        v12 = v6 * *v9;
        *(float *)&v25 = v12;
        if ( v24 == v10 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((const void **)&v22, v10, &v25);
          v10 = v23;
        }
        else
        {
          *v10++ = v12;
          v23 = v10;
        }
        ++v9;
        ++v8;
      }
      while ( v8 != v11 );
    }
    v13 = *((float *)this + 47);
    v26[0] = *((_DWORD *)this + 43);
    v26[1] = *((_DWORD *)this + 44);
    v26[2] = *((_DWORD *)this + 42);
    v26[3] = *((_DWORD *)this + 45);
    if ( v13 >= 1.0 )
      v27 = LODWORD(v13);
    else
      v27 = 1065353216;
    v14 = v22;
    v29 = v6 * *((float *)this + 46);
    v15 = *((_BYTE *)this + 196) == 0;
    v28 = v10 != v22 ? 5 : 0;
    v30 = !v15;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v7, &v25);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, D2DFactoryNoRef, 0x1FBu);
    }
    else
    {
      v18 = v10 - v14;
      if ( v18 < 0 || !v14 && v18 )
      {
        gsl::details::terminate(v17);
        __debugbreak();
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v1);
      v19 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, float *, _QWORD, __int64 *))(**((_QWORD **)v25 + 3) + 144LL))(
              *((_QWORD *)v25 + 3),
              v26,
              v14,
              (unsigned int)v18,
              v1);
      v3 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x200u);
    }
    std::vector<float>::_Tidy((__int64)&v22);
  }
  return v3;
}
