/*
 * XREFs of ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18006BA18
 * Callers:
 *     _lambda_fb23503d9b3566a26ea1a9c0ca33164d_::operator() @ 0x18006B744 (_lambda_fb23503d9b3566a26ea1a9c0ca33164d_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180036858 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180036A28 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003F0A0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18006AC20 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18006BB54 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AtmosCheck::CheckInstalledAppServicesAvailable(AtmosCheck *this)
{
  char v2; // si
  __int64 i; // rbx
  _WORD *v4; // rdx
  __int64 v5; // rdx
  _BYTE *v6; // r8
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  _QWORD v10[2]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-28h] BYREF

  v10[1] = -2LL;
  v2 = 1;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)AtmosCheck::GetCurrentEndpointsUnderLock(this, &v8) >= 0 )
  {
    for ( i = v8; i != *((_QWORD *)&v8 + 1); i += 32LL )
    {
      v4 = (_WORD *)i;
      if ( *(_QWORD *)(i + 24) >= 8uLL )
        v4 = *(_WORD **)i;
      std::wstring::wstring(v11, v4);
      std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        (_QWORD *)this + 56,
        v10,
        (char *)v11);
      std::wstring::~wstring((__int64)v11);
      if ( v2 && v10[0] != *((_QWORD *)this + 57) )
      {
        v5 = 0LL;
        v6 = (char *)this + 256;
        while ( !*v6 || *(int *)(v5 + *(_QWORD *)(v10[0] + 48LL) + 16) >= 0 )
        {
          v6 += 32;
          v5 += 24LL;
          if ( v5 >= 144 )
            goto LABEL_14;
        }
        v2 = 0;
      }
LABEL_14:
      ;
    }
  }
  if ( (_QWORD)v8 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v8, *((__int64 *)&v8 + 1));
    std::_Deallocate<16,0>((void *)v8, (const struct std::nothrow_t *)((v9 - v8) & 0xFFFFFFFFFFFFFFE0uLL));
  }
  return v2;
}
