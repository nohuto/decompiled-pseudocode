/*
 * XREFs of Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00F940C
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00F940C (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0108418 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C00F92D0 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00F940C (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00FC220 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // xmm1_8
  __int128 v26; // xmm0
  unsigned __int64 v27; // rax
  __int128 v29; // [rsp+40h] [rbp-C0h]
  __int128 v30; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+40h] [rbp-C0h]
  __int128 v32; // [rsp+40h] [rbp-C0h]
  unsigned __int64 i; // [rsp+58h] [rbp-A8h]
  __int128 v34; // [rsp+60h] [rbp-A0h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+60h] [rbp-A0h]
  _QWORD *v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+B0h] [rbp-50h]
  unsigned __int64 j; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int128 v45; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v46; // [rsp+E0h] [rbp-20h]
  __int128 v47; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v48; // [rsp+100h] [rbp+0h]
  __int128 v49; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v50; // [rsp+120h] [rbp+20h]
  __int128 v51; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v52; // [rsp+140h] [rbp+40h]
  char v53[160]; // [rsp+150h] [rbp+50h] BYREF

  *a4 = 0LL;
  v7 = a3[1];
  v9 = a1;
  v10 = a2[1];
  v11 = v7;
  v38 = a4;
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
      ++*v38;
      if ( !a5 )
        goto LABEL_25;
      v23 = *a3;
      v40 = 0LL;
      *(_QWORD *)&v30 = v23;
      *(_QWORD *)&v36 = *a2;
      *((_QWORD *)&v36 + 1) = i;
      *((_QWORD *)&v30 + 1) = v7;
      v45 = v30;
      v46 = v11;
      v41 = v36;
      v42 = v10;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)&v41,
                               (unsigned int)&v45,
                               (unsigned int)&v40,
                               0,
                               a6) )
        return 0;
      v22 = v40;
    }
    else
    {
      v16 = *a2;
      v17 = *(unsigned int *)(*a2 + 4LL);
      for ( j = v17; ; v17 = j )
      {
        if ( v15 >= v17 )
          goto LABEL_30;
        v44 = *(_QWORD *)(v16 + 8);
        v18 = *(Ndis::BindState **)(v44 + 8 * v15);
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
      if ( Ndis::BindState::SetSource(v18, AddBindSource, Registry) )
      {
        memset(v53, 0, sizeof(v53));
        if ( (unsigned __int8)byte_1C00E677B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v44 + 8 * v15),
            (struct NDIS_PNPTRACE_LOCALS *)v53);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
              *(unsigned __int16 **)&v53[8],
              *(_QWORD *)v53);
        }
      }
      *(_QWORD *)&v34 = *a2;
      *((_QWORD *)&v34 + 1) = v10;
      v47 = v34;
      v48 = v15;
      Ndis::BindRegistry::RemoveBindingsInSpan(&v47, a5, a6);
      v10 = v15 + 1;
      v9 = a1;
      if ( !a5 )
        goto LABEL_25;
      v21 = *a3;
      v39 = 0LL;
      *(_QWORD *)&v35 = v21;
      *(_QWORD *)&v29 = *a2;
      *((_QWORD *)&v29 + 1) = i;
      *((_QWORD *)&v35 + 1) = v7;
      v49 = v35;
      v50 = v11;
      v51 = v29;
      v52 = v10;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)&v51,
                               (unsigned int)&v49,
                               (unsigned int)&v39,
                               0,
                               a6) )
        return 0;
      v22 = v39;
    }
    v10 += v22;
    a2[2] += v22;
LABEL_25:
    v7 = v11;
    i = v10;
  }
  *(_QWORD *)&v31 = *a2;
  *((_QWORD *)&v31 + 1) = v10;
  v42 = a2[2];
  v41 = v31;
  Ndis::BindRegistry::RemoveBindingsInSpan(&v41, a5, a6);
  if ( !a5 )
    return 1;
  v24 = *a3;
  v38 = 0LL;
  *(_QWORD *)&v32 = v24;
  v25 = a3[2];
  *((_QWORD *)&v32 + 1) = v7;
  v26 = v32;
  *(_QWORD *)&v32 = *a2;
  v27 = a2[2];
  v41 = v26;
  v42 = v25;
  *((_QWORD *)&v32 + 1) = v10;
  v46 = v27;
  v45 = v32;
  return (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                            v9,
                            (unsigned int)&v45,
                            (unsigned int)&v41,
                            (unsigned int)&v38,
                            0,
                            a6) != 0;
}
