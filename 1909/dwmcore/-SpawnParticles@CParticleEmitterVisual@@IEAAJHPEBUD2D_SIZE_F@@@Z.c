/*
 * XREFs of ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EC9E8
 * Callers:
 *     ?EmitParticles@CParticleEmitterVisual@@IEAAJMPEBUD2D_SIZE_F@@@Z @ 0x1801EB1AC (-EmitParticles@CParticleEmitterVisual@@IEAAJMPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801E9038 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E912C (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E9224 (--$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@-$vector@Ufloat3@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801E9388 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801E94A0 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB2D0 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat3x2@123@PEAU4123@@Z @ 0x1801ED8E4 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat3x2@123@PEAU4123@@Z.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801FBAD0 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x1801FD7BC (-GetRandomOrientation@CParticleGenerator@@QEBA-AUfloat4@Numerics@Foundation@Windows@@AEAV-$merse.c)
 *     ?GetRandomSize@CParticleGenerator@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x1801FD8C8 (-GetRandomSize@CParticleGenerator@@QEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$mersenne_twi.c)
 *     ?GetRandomTint@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x1801FD9A4 (-GetRandomTint@CParticleGenerator@@QEBA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twi.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x1801FDA88 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 */

__int64 __fastcall CParticleEmitterVisual::SpawnParticles(
        const void **this,
        unsigned int a2,
        const struct D2D_SIZE_F *a3)
{
  __int128 m21_low; // xmm0
  unsigned __int64 v6; // r15
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi
  CViewBox *v11; // rcx
  float dx; // xmm6_4
  struct Windows::Foundation::Numerics::float3x2 *v13; // r8
  float dy; // xmm7_4
  unsigned __int64 v15; // r12
  float v16; // xmm3_4
  float v17; // xmm2_4
  _DWORD *v18; // rdx
  _DWORD *v19; // rdx
  unsigned __int64 v20; // r14
  char *v21; // r12
  char *v22; // rdx
  __int128 v23; // xmm6
  char *v24; // rdx
  float *v25; // rax
  float v26; // xmm7_4
  float v27; // xmm6_4
  _BYTE *v28; // rdx
  __int128 v29; // xmm8
  _BYTE *v30; // rdx
  FLOAT *v31; // rdx
  FLOAT m21; // eax
  float *v33; // rdx
  float v34; // r12d
  float *v35; // rdx
  bool v36; // zf
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r14
  float *v39; // rax
  float v40; // xmm7_4
  float v41; // xmm6_4
  float v42; // xmm0_4
  float *v43; // rdx
  float v44; // xmm8_4
  float *v45; // rdx
  unsigned __int64 v46; // r14
  float *v47; // rax
  float v48; // xmm7_4
  float v49; // xmm6_4
  unsigned int v50; // xmm8_4
  char *v51; // rdx
  __int128 v52; // xmm6
  char *v53; // rdx
  unsigned __int64 v54; // r14
  _BYTE *v55; // rdx
  __int64 v56; // xmm6_8
  _BYTE *v57; // rdx
  unsigned __int64 v58; // r14
  _BYTE *v59; // rdx
  _BYTE *v60; // rdx
  float *v61; // rax
  float v62; // xmm7_4
  float v63; // xmm6_4
  float v64; // xmm0_4
  _BYTE *v65; // rdx
  float *v66; // rdx
  unsigned __int64 v67; // [rsp+38h] [rbp-59h] BYREF
  int v68; // [rsp+40h] [rbp-51h]
  struct D2D_MATRIX_3X2_F v69; // [rsp+48h] [rbp-49h] BYREF
  struct D2D_MATRIX_3X2_F v70; // [rsp+60h] [rbp-31h] BYREF
  signed int v71; // [rsp+78h] [rbp-19h]
  unsigned __int64 v72; // [rsp+80h] [rbp-11h]
  __int64 v74; // [rsp+110h] [rbp+7Fh] BYREF

  v6 = a2;
  v7 = CParticleEmitterVisual::EnsureSpawner((CParticleEmitterVisual *)this);
  v71 = v7;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x324u, 0LL);
  }
  else
  {
    if ( !this[782] )
      return 0LL;
    v11 = (CViewBox *)this[764];
    dx = 0.0;
    if ( v11
      && a3
      && (CViewBox::GetRealization(v11, a3, &v70),
          m21_low = *(_OWORD *)&v70.m11,
          v69 = v70,
          !Windows::Foundation::Numerics::invert(
             (Windows::Foundation::Numerics *)&v69,
             (const struct Windows::Foundation::Numerics::float3x2 *)&v69,
             v13)) )
    {
      m21_low = _xmm;
      dy = 0.0;
      *(_OWORD *)&v69.m11 = _xmm;
    }
    else
    {
      dy = v69.dy;
      dx = v69.dx;
    }
    if ( (int)v6 > 0 )
    {
      v68 = 0;
      v72 = v6;
      v15 = v6;
      do
      {
        (**(void (__fastcall ***)(const void *, __int64 *, char *))this[762])(this[762], &v74, (char *)this + 1084);
        if ( this[764] && a3 )
        {
          m21_low = LODWORD(v69.m21);
          v16 = (float)((float)(v69.m11 * *(float *)&v74) + (float)(v69.m21 * *((float *)&v74 + 1))) + dx;
          v17 = (float)((float)(*((float *)&v74 + 1) * v69.m22) + (float)(*(float *)&v74 * v69.m12)) + dy;
          *(float *)&v74 = v16;
          *((float *)&v74 + 1) = v17;
        }
        else
        {
          v17 = *((float *)&v74 + 1);
          LODWORD(v16) = v74;
        }
        v18 = this[72];
        v67 = __PAIR64__(LODWORD(v17), LODWORD(v16));
        if ( this[73] == v18 )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 71,
            v18,
            (__int64)&v67);
        }
        else
        {
          m21_low = v67;
          *(_QWORD *)v18 = v67;
          v18[2] = 0;
          this[72] = (char *)this[72] + 12;
        }
        v19 = this[102];
        if ( this[103] == v19 )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 101,
            v19,
            (__int64)&v67);
        }
        else
        {
          m21_low = v67;
          *(_QWORD *)v19 = v67;
          v19[2] = 0;
          this[102] = (char *)this[102] + 12;
        }
        --v15;
      }
      while ( v15 );
      v20 = v6;
      v21 = (char *)this + 1084;
      do
      {
        CParticleGenerator::GetRandomOrientation(this[782], &v69, (char *)this + 1084);
        v22 = (char *)this[75];
        v23 = *(_OWORD *)&v69.m11;
        if ( this[76] == v22 )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            (__int64)(this + 74),
            v22,
            &v69);
        }
        else
        {
          *(_OWORD *)v22 = *(_OWORD *)&v69.m11;
          this[75] = (char *)this[75] + 16;
        }
        v24 = (char *)this[105];
        if ( this[106] == v24 )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            (__int64)(this + 104),
            v24,
            &v69);
        }
        else
        {
          *(_OWORD *)v24 = v23;
          this[105] = (char *)this[105] + 16;
        }
        --v20;
      }
      while ( v20 );
      v67 = v6;
      do
      {
        GetRandomUnitDir(
          (unsigned int)&v69,
          (_DWORD)v21,
          (unsigned int)this[782] + 72,
          (unsigned int)this[782] + 84,
          *((_BYTE *)this[782] + 96));
        v25 = (float *)this[782];
        v26 = v25[25];
        v27 = v25[26];
        *(float *)&m21_low = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)v21);
        v28 = this[84];
        v29 = m21_low;
        *(float *)&v29 = (float)(*(float *)&m21_low * (float)(v27 - v26)) + v26;
        *(float *)&v74 = *(float *)&v29;
        if ( this[85] == v28 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)(this + 83), v28, &v74);
        }
        else
        {
          this[84] = (char *)this[84] + 4;
          *(_DWORD *)v28 = v29;
        }
        v30 = this[108];
        if ( this[109] == v30 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)(this + 107), v30, &v74);
        }
        else
        {
          this[108] = (char *)this[108] + 4;
          *(_DWORD *)v30 = v29;
        }
        v31 = (FLOAT *)this[111];
        if ( this[112] == v31 )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 110,
            v31,
            (__int64)&v69);
        }
        else
        {
          m21 = v69.m21;
          *(_QWORD *)v31 = *(_QWORD *)&v69.m11;
          v31[2] = m21;
          this[111] = (char *)this[111] + 12;
        }
        v33 = (float *)this[114];
        m21_low = v29;
        v70.m21 = *(float *)&v29 * v69.m21;
        v34 = *(float *)&v29 * v69.m21;
        v70.m11 = *(float *)&v29 * v69.m11;
        v70.m12 = *(float *)&v29 * v69.m12;
        if ( this[115] == v33 )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 113,
            v33,
            (__int64)&v70);
        }
        else
        {
          m21_low = *(unsigned __int64 *)&v70.m11;
          *(_QWORD *)v33 = *(_QWORD *)&v70.m11;
          v33[2] = v34;
          this[114] = (char *)this[114] + 12;
        }
        v35 = (float *)this[78];
        if ( this[79] == v35 )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 77,
            v35,
            (__int64)&v70);
        }
        else
        {
          m21_low = *(unsigned __int64 *)&v70.m11;
          *(_QWORD *)v35 = *(_QWORD *)&v70.m11;
          v35[2] = v34;
          this[78] = (char *)this[78] + 12;
        }
        v36 = v67-- == 1;
        v21 = (char *)this + 1084;
      }
      while ( !v36 );
      v37 = v72;
      v38 = v72;
      do
      {
        v39 = (float *)this[782];
        v40 = v39[27];
        v41 = v39[28];
        v42 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1084);
        v43 = (float *)this[117];
        v44 = (float)(v42 * (float)(v41 - v40)) + v40;
        *(float *)&v74 = v44;
        if ( this[118] == v43 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)(this + 116), v43, &v74);
        }
        else
        {
          this[117] = (char *)this[117] + 4;
          *v43 = v44;
        }
        v45 = (float *)this[81];
        if ( this[82] == v45 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)(this + 80), v45, &v74);
        }
        else
        {
          this[81] = (char *)this[81] + 4;
          *v45 = v44;
        }
        --v38;
      }
      while ( v38 );
      v46 = v37;
      do
      {
        v47 = (float *)this[782];
        v48 = v47[43];
        v49 = v47[44];
        *(float *)&v50 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1084)
                               * (float)(v49 - v48))
                       + v48;
        CParticleGenerator::GetRandomTint(this[782], &v69, (char *)this + 1084);
        v51 = (char *)this[120];
        *(_QWORD *)&v70.m11 = *(_QWORD *)&v69.m11;
        *(_QWORD *)&v70.m[1][0] = __PAIR64__(v50, LODWORD(v69.m21));
        v52 = *(_OWORD *)&v70.m11;
        if ( this[121] == v51 )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            (__int64)(this + 119),
            v51,
            &v70);
        }
        else
        {
          *(_OWORD *)v51 = *(_OWORD *)&v70.m11;
          this[120] = (char *)this[120] + 16;
        }
        v53 = (char *)this[87];
        if ( this[88] == v53 )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            (__int64)(this + 86),
            v53,
            &v70);
        }
        else
        {
          *(_OWORD *)v53 = v52;
          this[87] = (char *)this[87] + 16;
        }
        --v46;
      }
      while ( v46 );
      v54 = v37;
      do
      {
        CParticleGenerator::GetRandomSize(this[782], &v74, (char *)this + 1084);
        v55 = this[90];
        v56 = v74;
        if ( this[91] == v55 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            (__int64)(this + 89),
            v55,
            &v74);
        }
        else
        {
          *(_QWORD *)v55 = v74;
          this[90] = (char *)this[90] + 8;
        }
        v57 = this[123];
        if ( this[124] == v57 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            (__int64)(this + 122),
            v57,
            &v74);
        }
        else
        {
          *(_QWORD *)v57 = v56;
          this[123] = (char *)this[123] + 8;
        }
        --v54;
      }
      while ( v54 );
      v74 = 0x3F8000003F800000LL;
      v58 = v37;
      v67 = 0x3F8000003F800000LL;
      do
      {
        v59 = this[93];
        if ( this[94] == v59 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            (__int64)(this + 92),
            v59,
            &v74);
        }
        else
        {
          *(_QWORD *)v59 = 0x3F8000003F800000LL;
          this[93] = (char *)this[93] + 8;
        }
        v60 = this[126];
        if ( this[127] == v60 )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            (__int64)(this + 125),
            v60,
            &v67);
        }
        else
        {
          *(_QWORD *)v60 = 0x3F8000003F800000LL;
          this[126] = (char *)this[126] + 8;
        }
        --v58;
      }
      while ( v58 );
      LODWORD(v74) = 0;
      do
      {
        v61 = (float *)this[782];
        v62 = v61[52];
        v63 = v61[53];
        v64 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1084);
        v65 = this[96];
        *(float *)&v67 = (float)(v64 * (float)(v63 - v62)) + v62;
        if ( this[97] == v65 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)(this + 95), v65, &v74);
        }
        else
        {
          *(_DWORD *)v65 = 0;
          this[96] = (char *)this[96] + 4;
        }
        v66 = (float *)this[99];
        if ( this[100] == v66 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((__int64)(this + 98), v66, &v67);
        }
        else
        {
          this[99] = (char *)this[99] + 4;
          *v66 = (float)(v64 * (float)(v63 - v62)) + v62;
        }
        --v37;
      }
      while ( v37 );
      v9 = v71;
      LODWORD(v6) = a2;
    }
    *((_DWORD *)this + 256) += v6;
  }
  return v9;
}
