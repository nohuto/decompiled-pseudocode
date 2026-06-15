/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9710
 * Callers:
 *     ?RegisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x1800DA4E0 (-RegisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800F2F3C (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC1EC (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800369E4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180051BB8 (-_Change_array@-$vector@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  char *v13; // r10
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  char *v16; // rdx
  char *v17; // rcx
  signed __int64 v18; // r8
  __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // rcx
  __int64 v23; // rax

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = *a3;
  *a3 = 0LL;
  *(_QWORD *)&v13[v14] = v15;
  v16 = a1[1];
  v17 = *a1;
  if ( v4 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = v13 - v17;
      do
      {
        v19 = *(_QWORD *)v17;
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)&v17[v18] = v19;
        v17 += 8;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    if ( v17 != v4 )
    {
      v20 = v13 - v17;
      do
      {
        v21 = *(_QWORD *)v17;
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)&v17[v20] = v21;
        v17 += 8;
      }
      while ( v17 != v4 );
      v16 = a1[1];
    }
    if ( v4 != v16 )
    {
      v22 = &v13[v14 - (_QWORD)v4];
      do
      {
        v23 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)&v4[(_QWORD)v22 + 8] = v23;
        v4 += 8;
      }
      while ( v4 != v16 );
    }
  }
  std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Change_array(
    (__int64)a1,
    (__int64)v13,
    v8,
    v11);
  return (unsigned __int64)&(*a1)[v14];
}
