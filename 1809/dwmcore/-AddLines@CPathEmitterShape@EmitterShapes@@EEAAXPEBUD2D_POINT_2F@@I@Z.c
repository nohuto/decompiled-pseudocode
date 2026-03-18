/*
 * XREFs of ?AddLines@CPathEmitterShape@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1801DC260
 * Callers:
 *     <none>
 * Callees:
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801B2D0C (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801B40A0 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801C3F0C (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C8038 (-reserve@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 */

void __fastcall EmitterShapes::CPathEmitterShape::AddLines(
        EmitterShapes::CPathEmitterShape *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 *v7; // rdi
  const void **v8; // rsi
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
  v7 = (__int64 *)(v4 - 56);
  v8 = (const void **)(v4 - 32);
  std::vector<Windows::Foundation::Numerics::float2>::reserve(
    (_QWORD *)(v4 - 56),
    a3 + ((__int64)(*(_QWORD *)(v4 - 56 + 8) - *(_QWORD *)(v4 - 56)) >> 3));
  std::vector<float>::reserve(v8, v5 + (((_BYTE *)v8[1] - (_BYTE *)*v8) >> 2));
  v9 = v7[1];
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
        v15 = (_BYTE *)v7[1];
        if ( (_BYTE *)v7[2] == v15 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            v7,
            v15,
            &v17);
        }
        else
        {
          *(_QWORD *)v15 = v17;
          v7[1] += 8LL;
        }
        v16 = (float *)v8[1];
        if ( v8[2] == v16 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(v8, v16, &v18);
        }
        else
        {
          v8[1] = (char *)v8[1] + 4;
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
