/*
 * XREFs of ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801FC260
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801C570C (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     ?_Tidy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ @ 0x1801CB828 (-_Tidy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXXZ.c)
 *     ?swap@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1801FC744 (-swap@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEAV12@.c)
 */

__int64 __fastcall CSurfaceBrush::GetTextureMemoryLayoutData(CSurfaceBrush *this, struct D2D_SIZE_F *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v8; // esi
  signed int v9; // eax
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // xmm1_8
  __int64 v19; // r8
  __int128 v21; // [rsp+30h] [rbp-29h] BYREF
  __int64 v22; // [rsp+40h] [rbp-19h]
  __int128 v23; // [rsp+48h] [rbp-11h] BYREF
  __int128 v24; // [rsp+58h] [rbp-1h]
  __int64 v25; // [rsp+68h] [rbp+Fh]
  __int128 v26; // [rsp+70h] [rbp+17h] BYREF
  __int64 v27; // [rsp+80h] [rbp+27h]

  v3 = 0;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  v5 = *((_QWORD *)this + 12);
  v8 = 0;
  if ( v5
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 194LL)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
          *((_QWORD *)this + 12),
          83LL) )
  {
    v9 = CSurfaceBrush::ComputeLayout(this, a2, 0, (struct CContent::LayoutData *)&v23, 0LL);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1C9u, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
                *((_QWORD *)this + 12),
                39LL) )
    {
      if ( *((float *)&v24 + 2) > 0.0 || *((float *)&v24 + 3) > 0.0 )
      {
        v27 = *((_QWORD *)&v24 + 1);
        v26 = _xmm;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v21,
          (const struct D2D1::Matrix3x2F *)&v26,
          (const struct D2D1::Matrix3x2F *)&v23);
        v11 = v21;
        v23 = v21;
        *(_QWORD *)&v24 = v22;
      }
      else
      {
        v11 = v23;
      }
      v12 = *(_QWORD *)(a3 + 8);
      if ( *(_QWORD *)(a3 + 16) == v12 )
      {
        std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
          (const void **)a3,
          (_BYTE *)v12,
          (__int64)&v23);
      }
      else
      {
        v13 = v24;
        *(_OWORD *)v12 = v11;
        v14 = v25;
        *(_OWORD *)(v12 + 16) = v13;
        *(_QWORD *)(v12 + 32) = v14;
        *(_QWORD *)(a3 + 8) += 40LL;
      }
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
                *((_QWORD *)this + 12),
                125LL) )
    {
      v15 = *((_QWORD *)this + 12);
      v27 = 0LL;
      v26 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)v15 + 320LL))(
              v15,
              a2,
              &v26);
      v8 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1DEu, 0LL);
      }
      else
      {
        while ( v3 < (unsigned __int64)((*((_QWORD *)&v26 + 1) - (_QWORD)v26) / 40LL) )
        {
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v21,
            (const struct D2D1::Matrix3x2F *)&v23,
            (const struct D2D1::Matrix3x2F *)(v26 + 40LL * v3++));
          v18 = v22;
          *(_OWORD *)v19 = v21;
          *(_QWORD *)(v19 + 16) = v18;
        }
        std::vector<CContent::LayoutData>::swap(a3, &v26);
      }
      std::vector<CContent::LayoutData>::_Tidy((__int64)&v26);
    }
  }
  return v8;
}
