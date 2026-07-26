/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00FDDBC
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1C00C73FC (WPP_RECORDER_SF__guid_D_ea_1C00C73FC.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  char v3; // r12
  enum BINDING_ENABLED_OR_DISABLED v4; // r14d
  unsigned __int64 i; // rdi
  __int64 v7; // rsi
  _DWORD *v8; // rbx
  int v9; // r8d
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 j; // rdi
  __int64 v14; // rsi
  _DWORD *v15; // rbx
  int v16; // r8d
  _DWORD *v17; // rbx
  int v18; // r8d
  int v19; // r8d
  int v20; // edx
  int v21; // edx
  int v22; // edx
  bool v23; // cf
  __int64 *v24; // rax
  __int64 v25; // rcx
  unsigned __int16 *v26; // rdx
  unsigned __int16 v27; // r9
  __int64 *v28; // rax
  __int64 *v29; // rax
  int v30; // [rsp+28h] [rbp-E0h]
  char v31[8]; // [rsp+38h] [rbp-D0h]
  __int64 v32[20]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *v33[20]; // [rsp+E8h] [rbp-20h] BYREF
  char v34[160]; // [rsp+188h] [rbp+80h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = (char)a2;
  v4 = BindingEnabled;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_77:
      __fastfail(5u);
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD **)(v7 + 8 * i);
    if ( v8[13] || v8[7] )
    {
      if ( v3 )
      {
        if ( v4 )
        {
          if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v7 + 8 * i), v4, Reason_MissingOptionalFilter) )
          {
            memset(v33, 0, sizeof(v33));
            if ( (unsigned __int8)byte_1C00E673B >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * i),
                (struct NDIS_PNPTRACE_LOCALS *)v33);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v21,
                  0x1Cu,
                  0x2Au,
                  (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                  v33[1],
                  v33[0]);
            }
          }
        }
        else
        {
          v9 = v8[8];
          v8[8] = v9 & 0xFFFFFFBF;
          if ( (v9 != 0) != ((v9 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v8 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              WPP_RECORDER_SF_LL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
                v9);
            }
            *(_BYTE *)(*(_QWORD *)v8 + 5208LL) = 1;
            memset(v32, 0, sizeof(v32));
            if ( (unsigned __int8)byte_1C00E673B >= 4u )
            {
              ndisGetBindLinkNameForTracing(
                *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * i),
                (struct NDIS_PNPTRACE_LOCALS *)v32);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v20,
                  0x1Cu,
                  0x29u,
                  (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                  (unsigned __int16 *)v32[1],
                  v32[0]);
            }
          }
        }
        goto LABEL_10;
      }
      if ( v4 == BindingEnabled )
      {
        v19 = v8[8];
        v8[8] = v19 & 0xFFFFFFBF;
        if ( (v19 != 0) != ((v19 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
              v19);
          *(_BYTE *)(*(_QWORD *)v8 + 5208LL) = 1;
          memset(v34, 0, sizeof(v34));
          if ( (unsigned __int8)byte_1C00E673B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v34);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v22,
                0x1Cu,
                0x2Bu,
                (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                *(unsigned __int16 **)&v34[8],
                *(_QWORD *)v34);
LABEL_10:
              if ( v3 )
              {
                v10 = *(_QWORD *)(v7 + 8 * i);
                v11 = *(_QWORD *)(v10 + 80);
                if ( (*(_DWORD *)(v11 + 40) & 0x11) == 1 && !*(_QWORD *)(v11 + 56) )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
                      WPP_RECORDER_SF__guid_D(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v11 + 24,
                        v10,
                        44,
                        v30,
                        v11 + 24,
                        *(_DWORD *)(v10 + 88));
                  }
                  v4 = BindingDisabled;
                }
              }
              continue;
            }
          }
        }
      }
    }
  }
  v12 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v12; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_77;
    v14 = *((_QWORD *)this + 1);
    if ( v3 )
    {
      v15 = *(_DWORD **)(v14 + 8 * j);
      v16 = v15[8];
      if ( v4 )
      {
        v15[8] = v16 | 0x40;
        if ( v16 == 0 || !*(_QWORD *)v15 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v31 = v16 | 0x40;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
              v16,
              *(_QWORD *)v31);
          }
          v23 = (unsigned __int8)byte_1C00E673B < 4u;
          *(_BYTE *)(*(_QWORD *)v15 + 5208LL) = 1;
          if ( !v23 )
          {
            v28 = *(__int64 **)(v14 + 8 * j);
            v25 = *v28;
            v26 = *(unsigned __int16 **)(v28[10] + 24);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = 46;
              goto LABEL_76;
            }
          }
        }
      }
      else
      {
        v15[8] = v16 & 0xFFFFFFBF;
        if ( (v16 != 0) != ((v16 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v15 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v31 = v16 & 0xFFFFFFBF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
              v16,
              *(_QWORD *)v31);
          }
          v23 = (unsigned __int8)byte_1C00E673B < 4u;
          *(_BYTE *)(*(_QWORD *)v15 + 5208LL) = 1;
          if ( !v23 )
          {
            v24 = *(__int64 **)(v14 + 8 * j);
            v25 = *v24;
            v26 = *(unsigned __int16 **)(v24[10] + 24);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = 45;
LABEL_76:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v26,
                0x1Cu,
                v27,
                (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                v26,
                v25);
              continue;
            }
          }
        }
      }
    }
    else if ( v4 == BindingEnabled )
    {
      v17 = *(_DWORD **)(v14 + 8 * j);
      v18 = v17[8];
      v17[8] = v18 & 0xFFFFFFBF;
      if ( (v18 != 0) != ((v18 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v17 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v31 = v18 & 0xFFFFFFBF;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            v18,
            *(_QWORD *)v31);
        }
        v23 = (unsigned __int8)byte_1C00E673B < 4u;
        *(_BYTE *)(*(_QWORD *)v17 + 5208LL) = 1;
        if ( !v23 )
        {
          v29 = *(__int64 **)(v14 + 8 * j);
          v25 = *v29;
          v26 = *(unsigned __int16 **)(v29[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = 47;
            goto LABEL_76;
          }
        }
      }
    }
  }
}
