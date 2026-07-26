/*
 * XREFs of ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE080
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00C73FC (WPP_RECORDER_SF__guid_D_ea_1C00C73FC.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C01270C4 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindOnDetach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  enum BINDING_ENABLED_OR_DISABLED v4; // r15d
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r8d
  Ndis::BindState *v9; // rcx
  __int64 v10; // r14
  unsigned __int64 j; // rbx
  __int64 v12; // rsi
  _DWORD *v13; // rdi
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // cf
  __int64 *v20; // rax
  __int64 v21; // rcx
  unsigned __int16 *v22; // rdx
  unsigned __int16 v23; // r9
  __int64 *v24; // rax
  int v25; // [rsp+20h] [rbp-198h]
  char v26[8]; // [rsp+30h] [rbp-188h]
  __int64 v27[20]; // [rsp+40h] [rbp-178h] BYREF
  char v28[160]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v4 = BindingEnabled;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_46:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v4 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v6 + 8 * i), v4, Reason_UnbindOnDetach) )
        {
          memset(v28, 0, sizeof(v28));
          if ( (unsigned __int8)byte_1C00E673B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v28);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v16,
                0x1Cu,
                0x36u,
                (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                *(unsigned __int16 **)&v28[8],
                *(_QWORD *)v28);
          }
        }
      }
      else
      {
        v8 = v7[8];
        v7[8] = v8 & 0xFFFFFBFF;
        if ( (v8 != 0) != ((v8 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
              v8);
          *(_BYTE *)(*(_QWORD *)v7 + 5208LL) = 1;
          memset(v27, 0, sizeof(v27));
          if ( (unsigned __int8)byte_1C00E673B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v27);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v15,
                0x1Cu,
                0x35u,
                (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                (unsigned __int16 *)v27[1],
                v27[0]);
          }
        }
      }
      v9 = *(Ndis::BindState **)(v6 + 8 * i);
      if ( (*((_DWORD *)v9[1].m_AdditionalContext + 10) & 8) != 0 )
      {
        if ( v9->m_unbindReasons )
        {
          if ( Ndis::BindState::GetActualBindingState(v9) == BindingEnabled )
          {
            v4 = BindingDisabled;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
                WPP_RECORDER_SF__guid_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v17 + 24,
                  (_DWORD)WPP_GLOBAL_Control,
                  55,
                  v25,
                  v17 + 24,
                  *(_DWORD *)(v18 + 88));
            }
          }
        }
      }
    }
  }
  v10 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_46;
    v12 = *((_QWORD *)this + 1);
    v13 = *(_DWORD **)(v12 + 8 * j);
    if ( v4 )
    {
      if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v12 + 8 * j), v4, Reason_UnbindOnDetach)
        && (unsigned __int8)byte_1C00E673B >= 4u )
      {
        v24 = *(__int64 **)(v12 + 8 * j);
        v21 = *v24;
        v22 = *(unsigned __int16 **)(v24[10] + 24);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 57;
          goto LABEL_45;
        }
      }
    }
    else
    {
      v14 = v13[8];
      v13[8] = v14 & 0xFFFFFBFF;
      if ( (v14 != 0) != ((v14 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v26 = v14 & 0xFFFFFBFF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            v14,
            *(_QWORD *)v26);
        }
        v19 = (unsigned __int8)byte_1C00E673B < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5208LL) = 1;
        if ( !v19 )
        {
          v20 = *(__int64 **)(v12 + 8 * j);
          v21 = *v20;
          v22 = *(unsigned __int16 **)(v20[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = 56;
LABEL_45:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v22,
              0x1Cu,
              v23,
              (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              v22,
              v21);
            continue;
          }
        }
      }
    }
  }
}
