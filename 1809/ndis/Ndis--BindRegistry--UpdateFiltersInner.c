/*
 * XREFs of Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00B3508
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00B3508 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDEC0 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C00B3410 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00B3508 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B3FB8 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00C0918 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFiltersInner(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, char a5, int a6)
{
  unsigned __int64 v7; // r13
  int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 *v12; // r10
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r14
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  Ndis::BindState *v18; // rcx
  _DWORD *m_AdditionalContext; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  unsigned __int64 v26; // rax
  __int128 v28; // [rsp+30h] [rbp-D0h]
  __int128 v29; // [rsp+30h] [rbp-D0h]
  __int128 v30; // [rsp+30h] [rbp-D0h]
  __int128 v31; // [rsp+30h] [rbp-D0h]
  unsigned __int64 i; // [rsp+48h] [rbp-B8h]
  __int128 v33; // [rsp+50h] [rbp-B0h]
  __int128 v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+50h] [rbp-B0h]
  _QWORD *v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v41; // [rsp+A0h] [rbp-60h]
  unsigned __int64 j; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int128 v44; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+D0h] [rbp-30h]
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v47; // [rsp+F0h] [rbp-10h]
  __int128 v48; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v49; // [rsp+110h] [rbp+10h]
  __int128 v50; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v51; // [rsp+130h] [rbp+30h]
  _QWORD v52[20]; // [rsp+140h] [rbp+40h] BYREF

  *a4 = 0LL;
  v7 = a3[1];
  v9 = a1;
  v10 = a2[1];
  v11 = v7;
  v37 = a4;
  for ( i = v10; v11 < a3[2]; ++v11 )
  {
    if ( v11 >= *(unsigned int *)(*a3 + 4LL) )
LABEL_30:
      __fastfail(5u);
    v12 = (__int64 *)(*(_QWORD *)(*a3 + 8LL) + 8 * v11);
    v13 = *v12;
    if ( !*v12 || ((*(_DWORD *)(*(_QWORD *)(v13 + 80) + 40LL) & 0xC) != 0) != a5 )
      continue;
    v14 = a2[2];
    v15 = v10;
    if ( v10 >= v14 )
    {
LABEL_20:
      v9 = a1;
      if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(a1, *a2, v10, v12) )
        return 0;
      ++a2[2];
      ++v10;
      ++*v37;
      if ( !a5 )
        goto LABEL_25;
      v22 = *a3;
      v39 = 0LL;
      *(_QWORD *)&v29 = v22;
      *(_QWORD *)&v35 = *a2;
      *((_QWORD *)&v35 + 1) = i;
      *((_QWORD *)&v29 + 1) = v7;
      v44 = v29;
      v45 = v11;
      v40 = v35;
      v41 = v10;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)&v40,
                               (unsigned int)&v44,
                               (unsigned int)&v39,
                               0,
                               a6) )
        return 0;
      v21 = v39;
    }
    else
    {
      v16 = *a2;
      v17 = *(unsigned int *)(*a2 + 4LL);
      for ( j = v17; ; v17 = j )
      {
        if ( v15 >= v17 )
          goto LABEL_30;
        v43 = *(_QWORD *)(v16 + 8);
        v18 = *(Ndis::BindState **)(v43 + 8 * v15);
        m_AdditionalContext = v18[1].m_AdditionalContext;
        if ( ((m_AdditionalContext[10] & 0xC) != 0) == a5
          && *(_DWORD **)(v13 + 80) == m_AdditionalContext
          && *(_DWORD *)(v13 + 88) == v18[1].m_LastErrorCode )
        {
          break;
        }
        if ( ++v15 >= v14 )
          goto LABEL_20;
      }
      if ( Ndis::BindState::SetSource(v18, AddBindSource, Registry) && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v43 + 8 * v15),
          (struct NDIS_PNPTRACE_LOCALS *)v52);
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
          WPP_SF_Zq(0xFu, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, (const wchar_t *)v52[1], v52[0]);
      }
      *(_QWORD *)&v33 = *a2;
      *((_QWORD *)&v33 + 1) = v10;
      v46 = v33;
      v47 = v15;
      Ndis::BindRegistry::RemoveBindingsInSpan(&v46, a5, a6);
      v10 = v15 + 1;
      v9 = a1;
      if ( !a5 )
        goto LABEL_25;
      v20 = *a3;
      v38 = 0LL;
      *(_QWORD *)&v34 = v20;
      *(_QWORD *)&v28 = *a2;
      *((_QWORD *)&v28 + 1) = i;
      *((_QWORD *)&v34 + 1) = v7;
      v48 = v34;
      v49 = v11;
      v50 = v28;
      v51 = v10;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)&v50,
                               (unsigned int)&v48,
                               (unsigned int)&v38,
                               0,
                               a6) )
        return 0;
      v21 = v38;
    }
    v10 += v21;
    a2[2] += v21;
LABEL_25:
    v7 = v11;
    i = v10;
  }
  *(_QWORD *)&v30 = *a2;
  *((_QWORD *)&v30 + 1) = v10;
  v41 = a2[2];
  v40 = v30;
  Ndis::BindRegistry::RemoveBindingsInSpan(&v40, a5, a6);
  if ( !a5 )
    return 1;
  v23 = *a3;
  v37 = 0LL;
  *(_QWORD *)&v31 = v23;
  v24 = a3[2];
  *((_QWORD *)&v31 + 1) = v7;
  v25 = v31;
  *(_QWORD *)&v31 = *a2;
  v26 = a2[2];
  v40 = v25;
  v41 = v24;
  *((_QWORD *)&v31 + 1) = v10;
  v45 = v26;
  v44 = v31;
  return (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                            v9,
                            (unsigned int)&v44,
                            (unsigned int)&v40,
                            (unsigned int)&v37,
                            0,
                            a6) != 0;
}
