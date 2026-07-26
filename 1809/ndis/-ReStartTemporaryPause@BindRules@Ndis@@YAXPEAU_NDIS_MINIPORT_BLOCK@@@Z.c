/*
 * XREFs of ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C27B4
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReStartTemporaryPause(Ndis::BindRules *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  const wchar_t *v3; // rbx
  unsigned __int64 i; // rsi
  __int64 v6; // r15
  _DWORD *v7; // r14
  int v8; // r8d
  char v9; // al
  __int64 v10; // rbp
  unsigned __int64 j; // rsi
  __int64 v12; // r15
  _DWORD *v13; // r14
  int v14; // r8d
  int v15; // r8d
  bool v16; // cf
  _QWORD v17[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 1265);
  v3 = 0LL;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1265) )
LABEL_32:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 633);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( !v7[10] )
    {
      v8 = v7[9];
      v7[9] = v8 & 0xFFFFFFDF;
      if ( (v8 != 0) == ((v8 & 0xFFFFFFDF) != 0) && *(_QWORD *)v7 )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 & 0xFFFFFFDF);
        *(_BYTE *)(*(_QWORD *)v7 + 5248LL) = 1;
        v9 = 1;
      }
      if ( v9 && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v17);
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
          WPP_SF_Zq(0xCu, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v17[1], v17[0]);
      }
    }
  }
  v10 = *((unsigned int *)this + 1261);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1261) )
      goto LABEL_32;
    v12 = *((_QWORD *)this + 631);
    v13 = *(_DWORD **)(v12 + 8 * j);
    if ( !v13[10] )
    {
      v14 = v13[9];
      v13[9] = v14 & 0xFFFFFFDF;
      if ( (v14 != 0) != ((v14 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 & 0xFFFFFFDF);
        v16 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5248LL) = 1;
        if ( !v16 )
          WPP_SF_Zq(
            0xDu,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v12 + 8 * j));
      }
    }
  }
  if ( !*((_DWORD *)this + 1278) )
  {
    v15 = *((_DWORD *)this + 1277);
    *((_DWORD *)this + 1277) = v15 & 0xFFFFFFDF;
    if ( (v15 != 0) != ((v15 & 0xFFFFFFDF) != 0) || !*((_QWORD *)this + 634) )
    {
      if ( (unsigned __int8)byte_1C00A026B >= 5u )
        WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v15, v15 & 0xFFFFFFDF);
      v16 = (unsigned __int8)byte_1C00A026B < 4u;
      *(_BYTE *)(*((_QWORD *)this + 634) + 5248LL) = 1;
      if ( !v16 )
      {
        if ( this )
          v3 = (const wchar_t *)*((_QWORD *)this + 486);
        WPP_SF_Zq(0xEu, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, v3, this);
      }
    }
  }
}
