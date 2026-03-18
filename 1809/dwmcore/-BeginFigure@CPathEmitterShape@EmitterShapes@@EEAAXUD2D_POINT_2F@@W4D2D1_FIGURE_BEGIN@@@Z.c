/*
 * XREFs of ?BeginFigure@CPathEmitterShape@EmitterShapes@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801DC3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180175DA8 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801B2D0C (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801C3F0C (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUFigure@CPathEmitterShape@EmitterShapes@@@?$vector@UFigure@CPathEmitterShape@EmitterShapes@@V?$allocator@UFigure@CPathEmitterShape@EmitterShapes@@@std@@@std@@QEAAPEAUFigure@CPathEmitterShape@EmitterShapes@@QEAU234@AEBU234@@Z @ 0x1801DBDAC (--$_Emplace_reallocate@AEBUFigure@CPathEmitterShape@EmitterShapes@@@-$vector@UFigure@CPathEmitte.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DC090 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DC14C (--0-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@Window.c)
 */

void __fastcall EmitterShapes::CPathEmitterShape::BeginFigure(
        EmitterShapes::CPathEmitterShape *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h]
  __int128 v8; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  struct D2D_POINT_2F v11; // [rsp+80h] [rbp+20h] BYREF
  struct D2D_POINT_2F v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a2;
  v6 = 0LL;
  v8 = 0LL;
  v12 = a2;
  v7 = 0LL;
  v9 = 0LL;
  std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
    (__int64 *)&v6,
    0LL,
    &v12);
  v4 = *((_QWORD *)&v8 + 1);
  v11.x = 0.0;
  if ( v9 == *((_QWORD *)&v8 + 1) )
  {
    std::vector<float>::_Emplace_reallocate<float const &>((const void **)&v8, *((_BYTE **)&v8 + 1), &v11);
  }
  else
  {
    **((_DWORD **)&v8 + 1) = 0;
    *((_QWORD *)&v8 + 1) = v4 + 4;
  }
  v5 = *((_QWORD *)this + 3);
  if ( *((_QWORD *)this + 4) == v5 )
  {
    std::vector<EmitterShapes::CPathEmitterShape::Figure>::_Emplace_reallocate<EmitterShapes::CPathEmitterShape::Figure const &>(
      (_QWORD *)this + 2,
      *((_QWORD **)this + 3),
      (__int64)&v6);
  }
  else
  {
    std::vector<Windows::Foundation::Numerics::float2>::vector<Windows::Foundation::Numerics::float2>(
      *((_QWORD **)this + 3),
      (__int64)&v6);
    std::vector<float>::vector<float>((_QWORD *)(v5 + 24), (__int64)&v8);
    *(_DWORD *)(v5 + 48) = v10;
    *((_QWORD *)this + 3) += 56LL;
  }
  std::vector<float>::_Tidy((__int64)&v8);
  std::vector<CDataSourceReader *>::_Tidy((__int64)&v6);
}
