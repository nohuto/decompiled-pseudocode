/*
 * XREFs of ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2028
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C0081DE0 (WPP_SF__guid_D_ea_1C0081DE0.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingMandatoryFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  int v3; // r15d
  unsigned __int64 i; // rdi
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 j; // rbx
  __int64 v14; // rsi
  _DWORD *v15; // rdi
  int v16; // r8d
  char v17; // al
  bool v18; // cf
  unsigned __int16 v19; // cx
  _QWORD v20[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_56:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      v8 = v7[8];
      if ( v3 )
      {
        v7[8] = v8 | 0x20;
        if ( v8 && *(_QWORD *)v7 )
        {
          v17 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 | 0x20);
          *(_BYTE *)(*(_QWORD *)v7 + 5248LL) = 1;
          v17 = 1;
        }
        if ( v17 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v20);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              v19 = 30;
LABEL_51:
              WPP_SF_Zq(v19, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v20[1], v20[0]);
            }
          }
        }
      }
      else
      {
        v7[8] = v8 & 0xFFFFFFDF;
        if ( (v8 != 0) == ((v8 & 0xFFFFFFDF) != 0) && *(_QWORD *)v7 )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 & 0xFFFFFFDF);
          *(_BYTE *)(*(_QWORD *)v7 + 5248LL) = 1;
          v9 = 1;
        }
        if ( v9 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v20);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              v19 = 29;
              goto LABEL_51;
            }
          }
        }
      }
      v10 = *(_QWORD *)(v6 + 8 * i);
      v11 = *(_QWORD *)(v10 + 80);
      if ( (*(_DWORD *)(v11 + 40) & 1) == 0 && *(_DWORD *)(v10 + 28) && *(_DWORD *)(v10 + 32) && !*(_BYTE *)(v10 + 8) )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF__guid_D(0x1Fu, v10, v11 + 24, *(_DWORD *)(v10 + 88));
        v3 = 1;
      }
      continue;
    }
  }
  v12 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v12; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_56;
    v14 = *((_QWORD *)this + 1);
    v15 = *(_DWORD **)(v14 + 8 * j);
    v16 = v15[8];
    if ( v3 )
    {
      v15[8] = v16 | 0x20;
      if ( !v16 || !*(_QWORD *)v15 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v16, v16 | 0x20);
        v18 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v15 + 5248LL) = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0x21u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v14 + 8 * j));
      }
    }
    else
    {
      v15[8] = v16 & 0xFFFFFFDF;
      if ( (v16 != 0) != ((v16 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v15 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v16, v16 & 0xFFFFFFDF);
        v18 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v15 + 5248LL) = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0x20u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v14 + 8 * j));
      }
    }
  }
}
