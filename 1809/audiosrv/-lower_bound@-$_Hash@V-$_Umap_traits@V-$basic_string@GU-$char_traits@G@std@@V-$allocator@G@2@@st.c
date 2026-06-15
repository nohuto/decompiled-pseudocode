/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18000FA70
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18001CF34 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18004AEBC (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z @ 0x18005EB88 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGH@Z.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x180138580 (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180138D68 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18013A4C4 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 *     ?PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18013ABA4 (-PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18013C370 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 v3; // r12
  char *v4; // rbx
  __int64 v5; // r11
  char *v8; // r10
  unsigned __int64 v9; // rax
  __int64 i; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r15
  _QWORD *v14; // rcx
  _QWORD *v15; // rbp
  __int64 v16; // r14
  _QWORD *v17; // rax
  char *v18; // rdx
  char *v19; // r8
  unsigned __int64 v20; // rsi
  char *v21; // r10
  __int64 v22; // rdi
  __int64 v23; // r9
  signed __int64 v24; // r10
  signed __int64 v25; // rbx

  v3 = *((_QWORD *)a3 + 3);
  v4 = a3;
  v5 = *((_QWORD *)a3 + 2);
  v8 = a3;
  if ( v3 >= 8 )
    v8 = *(char **)a3;
  v9 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v9 < 2 * v5; i = 0x100000001B3LL * (v11 ^ i) )
    v11 = (unsigned __int8)v8[v9++];
  v12 = a1[3];
  v13 = (_QWORD *)a1[1];
  v14 = *(_QWORD **)(v12 + 16 * (i & a1[6]));
  v15 = v14;
  v16 = v12 + 16 * (i & a1[6]);
  while ( 1 )
  {
    v17 = v15 == v13 ? v13 : **(_QWORD ***)(v16 + 8);
    if ( v14 == v17 )
      break;
    v18 = (char *)(v14 + 2);
    v19 = v4;
    if ( v3 >= 8 )
      v19 = *(char **)v4;
    v20 = v14[5];
    v21 = (char *)(v14 + 2);
    if ( v20 >= 8 )
      v21 = *(char **)v18;
    v22 = v14[4];
    if ( v22 == v5 )
    {
      v23 = v14[4];
      if ( !v22 )
      {
LABEL_18:
        if ( v20 >= 8 )
          v18 = *(char **)v18;
        if ( v3 >= 8 )
          v4 = *(char **)v4;
        if ( v5 != v22 )
          goto LABEL_29;
        if ( v5 )
        {
          v25 = v4 - v18;
          while ( *(_WORD *)&v18[v25] == *(_WORD *)v18 )
          {
            v18 += 2;
            if ( !--v5 )
              goto LABEL_27;
          }
LABEL_29:
          v14 = v13;
        }
LABEL_27:
        *a2 = v14;
        return a2;
      }
      v24 = v21 - v19;
      while ( *(_WORD *)&v19[v24] == *(_WORD *)v19 )
      {
        v19 += 2;
        if ( !--v23 )
          goto LABEL_18;
      }
    }
    v14 = (_QWORD *)*v14;
  }
  *a2 = v13;
  return a2;
}
