/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18003ADE0
 * Callers:
 *     ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x1800030B4 (-IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009498 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18006A9B8 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18006B0F0 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18006B410 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18006B4CC (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x18013E27C (-EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18013E9B0 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18013F4DC (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180140818 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 v3; // r12
  char *v4; // r11
  __int64 v5; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rbp
  __int64 v17; // r14
  _QWORD *i; // rcx
  _QWORD *v19; // rax
  char *v20; // rdx
  char *v21; // r8
  unsigned __int64 v22; // rsi
  char *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // r9
  signed __int64 v26; // rbx
  signed __int64 v27; // r11

  v3 = *((_QWORD *)a3 + 3);
  v4 = a3;
  v5 = *((_QWORD *)a3 + 2);
  v8 = (unsigned __int64)a3;
  if ( v3 >= 8 )
    v8 = *(_QWORD *)a3;
  v9 = 2 * v5;
  v10 = 0xCBF29CE484222325uLL;
  v11 = (unsigned __int8 *)v8;
  if ( v8 > 2 * v5 + v8 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      v12 = *v11++;
      v10 = 0x100000001B3LL * (v12 ^ v10);
    }
    while ( &v11[-v8] != (unsigned __int8 *)v9 );
  }
  v13 = a1[3];
  v14 = (_QWORD *)a1[1];
  v15 = v10 & a1[6];
  v16 = *(_QWORD **)(v13 + 16 * v15);
  v17 = v13 + 16 * v15;
  for ( i = v16; ; i = (_QWORD *)*i )
  {
    v19 = v16 == v14 ? v14 : **(_QWORD ***)(v17 + 8);
    if ( i == v19 )
      break;
    v20 = (char *)(i + 2);
    v21 = v4;
    if ( v3 >= 8 )
      v21 = *(char **)v4;
    v22 = i[5];
    v23 = (char *)(i + 2);
    if ( v22 >= 8 )
      v23 = *(char **)v20;
    v24 = i[4];
    if ( v24 == v5 )
    {
      v25 = i[4];
      if ( !v24 )
      {
LABEL_20:
        if ( v22 >= 8 )
          v20 = *(char **)v20;
        if ( v3 >= 8 )
          v4 = *(char **)v4;
        if ( v5 != v24 )
          goto LABEL_31;
        if ( v5 )
        {
          v27 = v4 - v20;
          while ( *(_WORD *)&v20[v27] == *(_WORD *)v20 )
          {
            v20 += 2;
            if ( !--v5 )
              goto LABEL_29;
          }
LABEL_31:
          i = v14;
        }
LABEL_29:
        *a2 = i;
        return a2;
      }
      v26 = v23 - v21;
      while ( *(_WORD *)&v21[v26] == *(_WORD *)v21 )
      {
        v21 += 2;
        if ( !--v25 )
          goto LABEL_20;
      }
    }
  }
  *a2 = v14;
  return a2;
}
