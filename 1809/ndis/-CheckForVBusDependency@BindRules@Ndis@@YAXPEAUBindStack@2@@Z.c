/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2548
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  char v9; // cl
  int v10; // r8d
  bool v11; // cf

  v2 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v5 = *((_QWORD *)this + 1);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 80) + 40LL);
    if ( v7 )
    {
      v8 = (*(_DWORD *)(v7 + 64) & 0x10000000) == 0;
      v9 = 1;
      if ( !v8 )
        v9 = byte_1C00A0218;
      if ( v9 )
      {
        v10 = *(_DWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 32) = v10 & 0xFFDFFFFF;
        if ( (v10 != 0) != ((v10 & 0xFFDFFFFF) != 0) || !*(_QWORD *)v6 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v10, v10 & 0xFFDFFFFF);
          v11 = (unsigned __int8)byte_1C00A026B < 4u;
          *(_BYTE *)(*(_QWORD *)v6 + 5248LL) = 1;
          if ( !v11 )
            WPP_SF_Zq(
              0x13u,
              &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
              **(_QWORD **)(v5 + 8 * i));
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v5 + 8 * i),
                  BindingDisabled,
                  Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        WPP_SF_Zq(
          0x14u,
          &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
          **(_QWORD **)(v5 + 8 * i));
      }
    }
  }
}
