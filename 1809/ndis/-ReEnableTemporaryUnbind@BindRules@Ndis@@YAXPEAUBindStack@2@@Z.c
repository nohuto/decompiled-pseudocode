/*
 * XREFs of ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2928
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReEnableTemporaryUnbind(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  int v7; // r8d
  char v8; // al
  __int64 v9; // rbp
  unsigned __int64 j; // rbx
  __int64 v11; // r14
  __int64 v12; // rdi
  int v13; // r8d
  bool v14; // cf
  _QWORD v15[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_30:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( !*(_BYTE *)(v6 + 9) && !*(_DWORD *)(v6 + 52) )
    {
      v7 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v7 & 0xFFFFDFFF;
      if ( (v7 != 0) == ((v7 & 0xFFFFDFFF) != 0) && *(_QWORD *)v6 )
      {
        v8 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v7, v7 & 0xFFFFDFFF);
        *(_BYTE *)(*(_QWORD *)v6 + 5248LL) = 1;
        v8 = 1;
      }
      if ( v8 && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v15);
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
          WPP_SF_Zq(0xAu, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v15[1], v15[0]);
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_30;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_QWORD *)(v11 + 8 * j);
    if ( !*(_BYTE *)(v12 + 9) && !*(_DWORD *)(v12 + 52) )
    {
      v13 = *(_DWORD *)(v12 + 32);
      *(_DWORD *)(v12 + 32) = v13 & 0xFFFFDFFF;
      if ( (v13 != 0) != ((v13 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v12 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v13, v13 & 0xFFFFDFFF);
        v14 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5248LL) = 1;
        if ( !v14 )
          WPP_SF_Zq(
            0xBu,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
  }
}
