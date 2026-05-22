/*
 * XREFs of ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x18015B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800B5CF4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _lambda_2b98ef75b445f08568c37aeca5d9510e_::operator() @ 0x180152430 (_lambda_2b98ef75b445f08568c37aeca5d9510e_--operator().c)
 *     _lambda_3bbd621042013d32986f77ece3de05df_::operator() @ 0x180152540 (_lambda_3bbd621042013d32986f77ece3de05df_--operator().c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18015D58C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::PrecacheProperties(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+30h] [rbp-50h]
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  char v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h] BYREF
  __int128 v11; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  char v14; // [rsp+90h] [rbp+10h] BYREF
  char v15; // [rsp+98h] [rbp+18h] BYREF
  ULONGLONG TickCount64; // [rsp+A0h] [rbp+20h] BYREF

  *((_BYTE *)this + 96) = 1;
  v10 = 0LL;
  v12 = 0LL;
  TickCount64 = GetTickCount64();
  *(_QWORD *)&v7 = &TickCount64;
  *((_QWORD *)&v7 + 1) = (char *)this - 24;
  v6[0] = (char *)this - 24;
  v6[1] = &v10;
  v8 = v7;
  v11 = 0LL;
  v2 = lambda_3bbd621042013d32986f77ece3de05df_::operator()(
         v6,
         (__int64)&SPATIAL_GRAPH_DEVICE_PROPERTY_FORWARD_ONLY,
         (__int64)Windows::Internal::Holographic::ValidateProperty::Boolean);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1620LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v2);
    v14 = 0;
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 184),
      &SPATIAL_GRAPH_DEVICE_PROPERTY_FORWARD_ONLY,
      &v14,
      1uLL);
  }
  v3 = lambda_3bbd621042013d32986f77ece3de05df_::operator()(
         v6,
         (__int64)&SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
         (__int64)Windows::Internal::Holographic::ValidateProperty::Boolean);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1626LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v3);
    v15 = 0;
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 184),
      &SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
      &v15,
      1uLL);
  }
  v4 = lambda_3bbd621042013d32986f77ece3de05df_::operator()(
         v6,
         (__int64)&SPATIAL_GRAPH_DEVICE_PROPERTY_FLOOR_FINDER,
         (__int64)Windows::Internal::Holographic::ValidateProperty::Guid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1632LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v4);
  std::vector<unsigned char>::_Tidy((__int64)&v11);
  v9 = 0;
  lambda_2b98ef75b445f08568c37aeca5d9510e_::operator()((__int64)&v8);
  return 0LL;
}
