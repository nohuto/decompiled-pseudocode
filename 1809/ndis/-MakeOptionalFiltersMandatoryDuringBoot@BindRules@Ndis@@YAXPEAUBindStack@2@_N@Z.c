/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00C1958
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C0081DE0 (WPP_SF__guid_D_ea_1C0081DE0.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  enum BINDING_ENABLED_OR_DISABLED v3; // r15d
  unsigned __int64 v4; // rdi
  char v5; // r12
  __int64 v7; // rsi
  _DWORD *v8; // rbx
  int v9; // r8d
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r8d
  char v14; // al
  __int64 v15; // r14
  unsigned __int64 i; // rbx
  __int64 v17; // rsi
  _DWORD *v18; // rdi
  int v19; // r8d
  _DWORD *v20; // rdi
  int v21; // r8d
  unsigned __int16 v22; // cx
  bool v23; // cf
  _QWORD v24[20]; // [rsp+28h] [rbp-79h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = BindingEnabled;
  v4 = 0LL;
  v5 = (char)a2;
  while ( v4 != v2 )
  {
    if ( v4 >= *((unsigned int *)this + 5) )
LABEL_67:
      __fastfail(5u);
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD **)(v7 + 8 * v4);
    if ( v8[13] || v8[7] )
    {
      if ( v5 )
      {
        if ( v3 )
        {
          if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v7 + 8 * v4), v3, Reason_MissingOptionalFilter)
            && (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * v4),
              (struct NDIS_PNPTRACE_LOCALS *)v24);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              v22 = 42;
              goto LABEL_51;
            }
          }
        }
        else
        {
          v9 = v8[8];
          v8[8] = v9 & 0xFFFFFFBF;
          if ( (v9 != 0) == ((v9 & 0xFFFFFFBF) != 0) && *(_QWORD *)v8 )
          {
            v10 = 0;
          }
          else
          {
            if ( (unsigned __int8)byte_1C00A026B >= 5u )
              WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v9, v9 & 0xFFFFFFBF);
            *(_BYTE *)(*(_QWORD *)v8 + 5248LL) = 1;
            v10 = 1;
          }
          if ( v10 )
          {
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * v4),
                (struct NDIS_PNPTRACE_LOCALS *)v24);
              if ( (unsigned __int8)byte_1C00A026B >= 4u )
              {
                v22 = 41;
                goto LABEL_51;
              }
            }
          }
        }
        goto LABEL_12;
      }
      if ( v3 == BindingEnabled )
      {
        v13 = v8[8];
        v8[8] = v13 & 0xFFFFFFBF;
        if ( (v13 != 0) == ((v13 & 0xFFFFFFBF) != 0) && *(_QWORD *)v8 )
        {
          v14 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v13, v13 & 0xFFFFFFBF);
          *(_BYTE *)(*(_QWORD *)v8 + 5248LL) = 1;
          v14 = 1;
        }
        if ( v14 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * v4),
              (struct NDIS_PNPTRACE_LOCALS *)v24);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              v22 = 43;
LABEL_51:
              WPP_SF_Zq(v22, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v24[1], v24[0]);
LABEL_12:
              if ( v5 )
              {
                v11 = *(_QWORD *)(v7 + 8 * v4);
                v12 = *(_QWORD *)(v11 + 80);
                if ( (*(_DWORD *)(v12 + 40) & 0x11) == 1 && !*(_QWORD *)(v12 + 56) )
                {
                  if ( (unsigned __int8)byte_1C00A026B >= 5u )
                    WPP_SF__guid_D(0x2Cu, v11, v12 + 24, *(_DWORD *)(v11 + 88));
                  v3 = BindingDisabled;
                }
              }
            }
          }
        }
      }
    }
    ++v4;
  }
  v15 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v15; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      goto LABEL_67;
    v17 = *((_QWORD *)this + 1);
    if ( v5 )
    {
      v18 = *(_DWORD **)(v17 + 8 * i);
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v17 + 8 * i), v3, Reason_MissingOptionalFilter)
          && (unsigned __int8)byte_1C00A026B >= 4u )
        {
          WPP_SF_Zq(
            0x2Eu,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * i) + 80LL) + 24LL),
            **(_QWORD **)(v17 + 8 * i));
        }
      }
      else
      {
        v19 = v18[8];
        v18[8] = v19 & 0xFFFFFFBF;
        if ( (v19 != 0) != ((v19 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v18 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v19, v19 & 0xFFFFFFBF);
          v23 = (unsigned __int8)byte_1C00A026B < 4u;
          *(_BYTE *)(*(_QWORD *)v18 + 5248LL) = 1;
          if ( !v23 )
            WPP_SF_Zq(
              0x2Du,
              &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * i) + 80LL) + 24LL),
              **(_QWORD **)(v17 + 8 * i));
        }
      }
    }
    else if ( v3 == BindingEnabled )
    {
      v20 = *(_DWORD **)(v17 + 8 * i);
      v21 = v20[8];
      v20[8] = v21 & 0xFFFFFFBF;
      if ( (v21 != 0) != ((v21 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v20 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v21, v21 & 0xFFFFFFBF);
        v23 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v20 + 5248LL) = 1;
        if ( !v23 )
          WPP_SF_Zq(
            0x2Fu,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v17 + 8 * i) + 80LL) + 24LL),
            **(_QWORD **)(v17 + 8 * i));
      }
    }
  }
}
