/*
 * XREFs of ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0
 * Callers:
 *     ?EmitParticles@CParticleEmitter@@IEAAJM@Z @ 0x1801C57D0 (-EmitParticles@CParticleEmitter@@IEAAJM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801B2D0C (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$GetRandomValue@Ufloat2@Numerics@Foundation@Windows@@@CParticleEmitter@@IEAA?AUfloat2@Numerics@Foundation@Windows@@AEBU?$Range@Ufloat2@Numerics@Foundation@Windows@@@0@@Z @ 0x1801C3D60 (--$GetRandomValue@Ufloat2@Numerics@Foundation@Windows@@@CParticleEmitter@@IEAA-AUfloat2@Numerics.c)
 *     ??$GetRandomValue@Ufloat4@Numerics@Foundation@Windows@@@CParticleEmitter@@IEAA?AUfloat4@Numerics@Foundation@Windows@@AEBU?$Range@Ufloat4@Numerics@Foundation@Windows@@@0@@Z @ 0x1801C3E00 (--$GetRandomValue@Ufloat4@Numerics@Foundation@Windows@@@CParticleEmitter@@IEAA-AUfloat4@Numerics.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801C3F0C (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@Ufloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1801C4010 (--$_Emplace_reallocate@Ufloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Foundatio.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801C4580 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?EnsureSpawner@CParticleEmitter@@AEAAJXZ @ 0x1801C58F8 (-EnsureSpawner@CParticleEmitter@@AEAAJXZ.c)
 *     ?GetRandomDirection@CParticleEmitter@@IEAA?AUfloat3@Numerics@Foundation@Windows@@XZ @ 0x1801C61E0 (-GetRandomDirection@CParticleEmitter@@IEAA-AUfloat3@Numerics@Foundation@Windows@@XZ.c)
 *     ?GetRandomUniformSize@CParticleEmitter@@IEAA?AUfloat2@Numerics@Foundation@Windows@@XZ @ 0x1801C649C (-GetRandomUniformSize@CParticleEmitter@@IEAA-AUfloat2@Numerics@Foundation@Windows@@XZ.c)
 */

__int64 __fastcall CParticleEmitter::SpawnParticles(CParticleEmitter *this, unsigned int a2)
{
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  float v6; // r13d
  __int64 v7; // r14
  __int64 v8; // r15
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  _BYTE *v12; // rdx
  __int64 v13; // r12
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm9_4
  _BYTE *v21; // rdx
  float v22; // xmm9_4
  float *v23; // rdx
  float *v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r15
  float *RandomUniformSize; // rax
  _BYTE *v29; // rdx
  __int64 v30; // r15
  float *v31; // rax
  _BYTE *v32; // rdx
  __int64 v33; // r15
  _BYTE *v34; // rdx
  float v35; // xmm7_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  _BYTE *v38; // rdx
  float *v39; // rdx
  __int128 v41; // [rsp+38h] [rbp-39h] BYREF
  float v42[10]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+77h] BYREF
  float v44; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = CParticleEmitter::EnsureSpawner(this);
  v44 = *(float *)&v4;
  v6 = *(float *)&v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x397u);
    return LODWORD(v6);
  }
  if ( (int)v3 > 0 )
  {
    DWORD2(v41) = 0;
    v7 = (unsigned int)v3;
    v8 = (unsigned int)v3;
    do
    {
      (***((void (__fastcall ****)(_QWORD, __int64 *, char *))this + 715))(
        *((_QWORD *)this + 715),
        &v43,
        (char *)this + 548);
      v9 = *((float *)this + 1423);
      v10 = *((float *)this + 1424);
      v11 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 548);
      v12 = (_BYTE *)*((_QWORD *)this + 8);
      *(_QWORD *)&v41 = v43;
      *((float *)&v41 + 3) = (float)(v11 * (float)(v10 - v9)) + v9;
      if ( *((_BYTE **)this + 9) == v12 )
      {
        std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4>(
          (const void **)this + 7,
          v12,
          &v41);
      }
      else
      {
        *(_OWORD *)v12 = v41;
        *((_QWORD *)this + 8) += 16LL;
      }
      --v8;
    }
    while ( v8 );
    v13 = v3;
    do
    {
      CParticleEmitter::GetRandomDirection((__int64)this, (struct D2DVector3 *)&v41);
      v14 = *((float *)this + 1402);
      v15 = *((float *)this + 1403);
      v16 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 548)
          * (float)(v15 - v14);
      v17 = *((float *)this + 1401);
      v18 = v16 + v14;
      v19 = *((float *)this + 1400);
      v20 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 548);
      v21 = (_BYTE *)*((_QWORD *)this + 11);
      v42[3] = v18;
      v22 = (float)(v20 * (float)(v17 - v19)) + v19;
      v42[0] = *(float *)&v41 * v22;
      v42[1] = *((float *)&v41 + 1) * v22;
      v42[2] = *((float *)&v41 + 2) * v22;
      *(float *)&v43 = v22;
      if ( *((_BYTE **)this + 12) == v21 )
      {
        std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4>(
          (const void **)this + 10,
          v21,
          v42);
      }
      else
      {
        *(_OWORD *)v21 = *(_OWORD *)v42;
        *((_QWORD *)this + 11) += 16LL;
      }
      v23 = (float *)*((_QWORD *)this + 14);
      if ( *((float **)this + 15) == v23 )
      {
        std::vector<float>::_Emplace_reallocate<float const &>((const void **)this + 13, v23, &v43);
      }
      else
      {
        *((_QWORD *)this + 14) += 4LL;
        *v23 = v22;
      }
      --v13;
    }
    while ( v13 );
    v6 = v44;
    do
    {
      v24 = CParticleEmitter::GetRandomValue<Windows::Foundation::Numerics::float4>(
              (__int64)this,
              v42,
              (float *)this + 1408);
      v25 = (_BYTE *)*((_QWORD *)this + 17);
      if ( *((_BYTE **)this + 18) == v25 )
      {
        std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4>(
          (const void **)this + 16,
          v25,
          v24);
      }
      else
      {
        *(_OWORD *)v25 = *(_OWORD *)v24;
        *((_QWORD *)this + 17) += 16LL;
      }
      --v7;
    }
    while ( v7 );
  }
  if ( *((_BYTE *)this + 5688) )
  {
    if ( (int)v3 > 0 )
    {
      v26 = v3;
      v27 = v3;
      do
      {
        RandomUniformSize = CParticleEmitter::GetRandomUniformSize((__int64)this, (float *)&v43);
        v29 = (_BYTE *)*((_QWORD *)this + 20);
        if ( *((_BYTE **)this + 21) == v29 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            (__int64 *)this + 19,
            v29,
            RandomUniformSize);
        }
        else
        {
          *(_QWORD *)v29 = *(_QWORD *)RandomUniformSize;
          *((_QWORD *)this + 20) += 8LL;
        }
        --v27;
      }
      while ( v27 );
LABEL_35:
      v43 = 0x3F8000003F800000LL;
      v33 = v26;
      do
      {
        v34 = (_BYTE *)*((_QWORD *)this + 23);
        if ( *((_BYTE **)this + 24) == v34 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            (__int64 *)this + 22,
            v34,
            &v43);
        }
        else
        {
          *(_QWORD *)v34 = 0x3F8000003F800000LL;
          *((_QWORD *)this + 23) += 8LL;
        }
        --v33;
      }
      while ( v33 );
      LODWORD(v43) = 1065353216;
      do
      {
        v35 = *((float *)this + 1416);
        v36 = *((float *)this + 1417);
        v37 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 548);
        v38 = (_BYTE *)*((_QWORD *)this + 26);
        v44 = (float)(v37 * (float)(v36 - v35)) + v35;
        if ( *((_BYTE **)this + 27) == v38 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((const void **)this + 25, v38, &v43);
        }
        else
        {
          *((_QWORD *)this + 26) += 4LL;
          *(_DWORD *)v38 = 1065353216;
        }
        v39 = (float *)*((_QWORD *)this + 29);
        if ( *((float **)this + 30) == v39 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((const void **)this + 28, v39, &v44);
        }
        else
        {
          *((_QWORD *)this + 29) += 4LL;
          *v39 = (float)(v37 * (float)(v36 - v35)) + v35;
        }
        --v26;
      }
      while ( v26 );
    }
  }
  else if ( (int)v3 > 0 )
  {
    v26 = v3;
    v30 = v3;
    do
    {
      v31 = CParticleEmitter::GetRandomValue<Windows::Foundation::Numerics::float2>(
              (__int64)this,
              (float *)&v43,
              (float *)this + 1418);
      v32 = (_BYTE *)*((_QWORD *)this + 20);
      if ( *((_BYTE **)this + 21) == v32 )
      {
        std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
          (__int64 *)this + 19,
          v32,
          v31);
      }
      else
      {
        *(_QWORD *)v32 = *(_QWORD *)v31;
        *((_QWORD *)this + 20) += 8LL;
      }
      --v30;
    }
    while ( v30 );
    goto LABEL_35;
  }
  *((_DWORD *)this + 62) += v3;
  return LODWORD(v6);
}
