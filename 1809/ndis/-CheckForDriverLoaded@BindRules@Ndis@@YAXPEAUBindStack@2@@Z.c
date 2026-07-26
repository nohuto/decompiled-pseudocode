/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2604
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 i; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // r8d
  char v8; // al
  char v9; // al
  __int64 v10; // r14
  unsigned __int64 j; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // r8d
  bool v15; // cf
  unsigned __int16 v16; // cx
  _QWORD v17[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_47:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = *(_DWORD *)(v6 + 32);
    if ( **(_BYTE **)(v6 + 80) )
    {
      *(_DWORD *)(v6 + 32) = v7 & 0xFFFFFFFD;
      if ( (v7 != 0) == ((v7 & 0xFFFFFFFD) != 0) && *(_QWORD *)v6 )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v7, v7 & 0xFFFFFFFD);
        *(_BYTE *)(*(_QWORD *)v6 + 5248LL) = 1;
        v9 = 1;
      }
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v17);
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            v16 = 15;
LABEL_42:
            WPP_SF_Zq(v16, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v17[1], v17[0]);
            continue;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(v6 + 32) = v7 | 2;
      if ( v7 && *(_QWORD *)v6 )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v7, v7 | 2);
        *(_BYTE *)(*(_QWORD *)v6 + 5248LL) = 1;
        v8 = 1;
      }
      if ( v8 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v17);
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            v16 = 16;
            goto LABEL_42;
          }
        }
      }
    }
  }
  v10 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_47;
    v12 = *((_QWORD *)this + 1);
    v13 = *(_QWORD *)(v12 + 8 * j);
    v14 = *(_DWORD *)(v13 + 32);
    if ( **(_BYTE **)(v13 + 80) )
    {
      *(_DWORD *)(v13 + 32) = v14 & 0xFFFFFFFD;
      if ( (v14 != 0) != ((v14 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 & 0xFFFFFFFD);
        v15 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5248LL) = 1;
        if ( !v15 )
          WPP_SF_Zq(
            0x11u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v12 + 8 * j));
      }
    }
    else
    {
      *(_DWORD *)(v13 + 32) = v14 | 2;
      if ( !v14 || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 | 2);
        v15 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5248LL) = 1;
        if ( !v15 )
          WPP_SF_Zq(
            0x12u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v12 + 8 * j));
      }
    }
  }
}
