/*
 * XREFs of ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18020BDD0
 * Callers:
 *     <none>
 * Callees:
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A3510 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801A354C (-reserve@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801EA7A8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801EA89C (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::AddLines(
        EmitterShapes::CPathEmitterEdge *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rax
  float v10; // xmm9_4
  float v11; // xmm10_4
  FLOAT x; // xmm7_4
  float y; // xmm8_4
  float v14; // xmm0_4
  _BYTE *v15; // rdx
  float *v16; // rdx
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  float v18; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 3);
  v5 = a3;
  v6 = a3;
  v7 = v4 - 56;
  v8 = (_QWORD *)(v4 - 32);
  std::vector<Windows::Foundation::Numerics::float2>::reserve(
    v4 - 56,
    a3 + ((__int64)(*(_QWORD *)(v4 - 56 + 8) - *(_QWORD *)(v4 - 56)) >> 3));
  std::vector<float>::reserve((__int64)v8, v5 + ((__int64)(v8[1] - *v8) >> 2));
  v9 = *(_QWORD *)(v7 + 8);
  v10 = *(float *)(v9 - 8);
  v11 = *(float *)(v9 - 4);
  if ( (_DWORD)v5 )
  {
    do
    {
      x = a2->x;
      y = a2->y;
      *(FLOAT *)&v17 = a2->x;
      *((float *)&v17 + 1) = y;
      v14 = sqrtf_0(
              (float)((float)(*(float *)&v17 - v10) * (float)(*(float *)&v17 - v10))
            + (float)((float)(y - v11) * (float)(y - v11)));
      v18 = v14;
      if ( v14 > 0.00000011920929 )
      {
        v15 = *(_BYTE **)(v7 + 8);
        if ( *(_BYTE **)(v7 + 16) == v15 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            v7,
            v15,
            &v17);
        }
        else
        {
          *(_QWORD *)v15 = v17;
          *(_QWORD *)(v7 + 8) += 8LL;
        }
        v16 = (float *)v8[1];
        if ( (float *)v8[2] == v16 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)v8, v16, &v18);
        }
        else
        {
          v8[1] += 4LL;
          *v16 = v14;
        }
        v10 = x;
        v11 = y;
      }
      ++a2;
      --v6;
    }
    while ( v6 );
  }
}
