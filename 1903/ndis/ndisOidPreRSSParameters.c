/*
 * XREFs of ndisOidPreRSSParameters @ 0x1C003B010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisSetOpenRSSParameters @ 0x1C003B1AC (ndisSetOpenRSSParameters.c)
 *     ndisSetMiniportRSSParameters @ 0x1C003B4B4 (ndisSetMiniportRSSParameters.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBBC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C003BBEC (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C006F410 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C006F770 (ndisQueryOpenRSSParameters.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C5D0C (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

char __fastcall ndisOidPreRSSParameters(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  __int64 v3; // rbx
  char v4; // di
  __int64 v5; // rbp
  int v6; // eax
  int *v7; // r14
  NDIS_PCW_CONTEXT v9; // [rsp+50h] [rbp-38h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      161,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      v5,
      v3);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 == 2 )
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_9;
    v7 = (int *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = ndisQueryMiniportRSSParameters((char)v1);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
  }
  else
  {
    v7 = (int *)(a1 + 40);
  }
  if ( v6 )
    goto LABEL_6;
  if ( v5 )
  {
    *v7 = ndisQueryOpenRSSParameters(v5, v3);
    v4 = 1;
    goto LABEL_9;
  }
  if ( v1 )
  {
    *v7 = ndisQueryMiniportRSSParameters((char)v1);
    v4 = 1;
    v6 = *(_DWORD *)(v3 + 4);
LABEL_6:
    if ( v6 == 1 )
    {
      if ( !v5
        || !ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v3)
        || (v4 = ndisSetOpenRSSParameters(v5, v3), v4 != 1) )
      {
        if ( v1 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 4LL) & 4) == 0 )
          {
            NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v9, v1);
            if ( (v9.DatapathCyclesMask & 0x800) != 0 )
              *(_QWORD *)(v3 + 144) = __rdtsc();
            else
              *(_QWORD *)(v3 + 144) = 0LL;
          }
          v4 = ndisSetMiniportRSSParameters((char)v1, v3);
          if ( v4 != 1 && (v1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 )
            v4 = ndisSetMiniportRSSv1ParametersForMiniportV2(v1, (struct _NDIS_OID_REQUEST *)v3, v7);
        }
      }
    }
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA2u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v1,
      v5,
      v4,
      *(_DWORD *)(a1 + 40));
  return v4;
}
