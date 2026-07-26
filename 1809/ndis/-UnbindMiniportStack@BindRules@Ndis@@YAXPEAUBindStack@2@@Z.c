/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C1790
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 v3; // r14
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r8d
  char v9; // al
  __int64 v10; // r14
  unsigned __int64 j; // rbx
  __int64 v12; // rsi
  _DWORD *v13; // rdi
  int v14; // r8d
  unsigned __int16 v15; // cx
  bool v16; // cf
  _QWORD v17[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 16);
  v3 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v3; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_38:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v2 )
    {
      if ( Ndis::BindState::SetBinding(
             *(Ndis::BindState **)(v6 + 8 * i),
             (enum BINDING_ENABLED_OR_DISABLED)(v2 != 0),
             Reason_MiniportNotReady)
        && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v17);
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
        {
          v15 = 59;
          goto LABEL_31;
        }
      }
    }
    else
    {
      v8 = v7[8];
      v7[8] = v8 & 0xFFFDFFFF;
      if ( (v8 != 0) == ((v8 & 0xFFFDFFFF) != 0) && *(_QWORD *)v7 )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 & 0xFFFDFFFF);
        *(_BYTE *)(*(_QWORD *)v7 + 5248LL) = 1;
        v9 = 1;
      }
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v17);
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            v15 = 58;
LABEL_31:
            WPP_SF_Zq(v15, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v17[1], v17[0]);
            continue;
          }
        }
      }
    }
  }
  v10 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_38;
    v12 = *((_QWORD *)this + 1);
    v13 = *(_DWORD **)(v12 + 8 * j);
    if ( v2 )
    {
      if ( Ndis::BindState::SetBinding(
             *(Ndis::BindState **)(v12 + 8 * j),
             (enum BINDING_ENABLED_OR_DISABLED)(v2 != 0),
             Reason_MiniportNotReady)
        && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        WPP_SF_Zq(
          0x3Du,
          &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 24LL),
          **(_QWORD **)(v12 + 8 * j));
      }
    }
    else
    {
      v14 = v13[8];
      v13[8] = v14 & 0xFFFDFFFF;
      if ( (v14 != 0) != ((v14 & 0xFFFDFFFF) != 0) || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 & 0xFFFDFFFF);
        v16 = (unsigned __int8)byte_1C00A026B < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5248LL) = 1;
        if ( !v16 )
          WPP_SF_Zq(
            0x3Cu,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v12 + 8 * j));
      }
    }
  }
}
