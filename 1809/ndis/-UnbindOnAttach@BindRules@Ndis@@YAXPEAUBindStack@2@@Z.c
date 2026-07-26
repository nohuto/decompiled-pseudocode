/*
 * XREFs of ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C1CA0
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

void __fastcall Ndis::BindRules::UnbindOnAttach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  enum BINDING_ENABLED_OR_DISABLED v3; // r15d
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r8d
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned __int64 j; // rdi
  __int64 v14; // rsi
  _DWORD *v15; // rbx
  int v16; // r8d
  bool v17; // cf
  unsigned __int16 v18; // cx
  _QWORD v19[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = BindingEnabled;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_48:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v6 + 8 * i), v3, Reason_UnbindOnAttach)
          && (unsigned __int8)byte_1C00A026B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v19);
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            v18 = 49;
LABEL_47:
            WPP_SF_Zq(v18, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v19[1], v19[0]);
          }
        }
      }
      else
      {
        v8 = v7[8];
        v7[8] = v8 & 0xFFFFFDFF;
        if ( (v8 != 0) == ((v8 & 0xFFFFFDFF) != 0) && *(_QWORD *)v7 )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 & 0xFFFFFDFF);
          *(_BYTE *)(*(_QWORD *)v7 + 5248LL) = 1;
          v9 = 1;
        }
        if ( v9 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v19);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              v18 = 48;
              goto LABEL_47;
            }
          }
        }
      }
      v10 = *(_QWORD *)(v6 + 8 * i);
      v11 = *(_QWORD *)(v10 + 80);
      if ( (*(_DWORD *)(v11 + 40) & 4) != 0 && !*(_DWORD *)(v10 + 32) && !*(_BYTE *)(v10 + 9) && !*(_DWORD *)(v10 + 52) )
      {
        v3 = BindingDisabled;
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF__guid_D(0x32u, v10, v11 + 24, *(_DWORD *)(v10 + 88));
      }
      continue;
    }
  }
  v12 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v12; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_48;
    v14 = *((_QWORD *)this + 1);
    v15 = *(_DWORD **)(v14 + 8 * j);
    v16 = v15[8];
    if ( v3 )
    {
      v15[8] = v16 | 0x200;
      if ( v16 == 0 || !*(_QWORD *)v15 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v16, v16 | 0x200);
        v17 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v15 + 5248LL) = 1;
        if ( !v17 )
          WPP_SF_Zq(
            0x34u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v14 + 8 * j));
      }
    }
    else
    {
      v15[8] = v16 & 0xFFFFFDFF;
      if ( (v16 != 0) != ((v16 & 0xFFFFFDFF) != 0) || !*(_QWORD *)v15 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v16, v16 & 0xFFFFFDFF);
        v17 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v15 + 5248LL) = 1;
        if ( !v17 )
          WPP_SF_Zq(
            0x33u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v14 + 8 * j));
      }
    }
  }
}
