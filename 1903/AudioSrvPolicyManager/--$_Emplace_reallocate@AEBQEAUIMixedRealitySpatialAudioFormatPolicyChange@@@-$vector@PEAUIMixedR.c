/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@QEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180015A98
 * Callers:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180010B7C (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180014800 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudio.c)
 * Callees:
 *     ?_Xlength@?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@CAXXZ @ 0x180015EB8 (-_Xlength@-$vector@PEAUIAudioAppVolumePolicyChange@@V-$allocator@PEAUIAudioAppVolumePolicyChange.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017A50 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x180035A9F (memmove_0.c)
 */

__int64 __fastcall std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  char *v14; // rdi
  char *v15; // r8
  char *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  char *v19; // rcx
  const struct std::nothrow_t *v20; // rdx
  char *v21; // r8
  char *v22; // rcx

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<IAudioAppVolumePolicyChange *>::_Xlength(a1);
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  *(_QWORD *)&v14[8 * v6] = *a3;
  v15 = a1[1];
  v16 = *a1;
  v17 = v14;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v14, v16, a2 - *a1);
    v17 = &v14[8 * v6 + 8];
    v18 = a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  v19 = *a1;
  if ( *a1 )
  {
    v20 = (const struct std::nothrow_t *)((a1[2] - v19) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v20 >= 0x1000 )
    {
      v20 = (const struct std::nothrow_t *)((char *)v20 + 39);
      v21 = (char *)*((_QWORD *)v19 - 1);
      v22 = (char *)(v19 - v21);
      if ( (unsigned __int64)(v22 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v22, v20);
        __debugbreak();
      }
      v19 = v21;
    }
    operator delete(v19, v20);
  }
  *a1 = v14;
  a1[1] = &v14[8 * v8];
  a1[2] = &v14[v12];
  return (__int64)&(*a1)[8 * v6];
}
