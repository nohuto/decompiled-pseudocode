/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FE86C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  char v7; // al
  _DWORD *v8; // rdi
  int v9; // r8d
  __int64 v10; // rbp
  unsigned __int64 j; // rsi
  __int64 v12; // r14
  __int64 v13; // rdx
  char v14; // al
  _DWORD *v15; // rdi
  int v16; // r8d
  int v17; // edx
  int v18; // edx
  __int64 *v19; // rax
  __int64 v20; // rcx
  unsigned __int16 *v21; // rdx
  unsigned __int16 v22; // r9
  bool v23; // cf
  __int64 *v24; // rax
  char v25[8]; // [rsp+30h] [rbp-178h]
  __int64 v26[20]; // [rsp+40h] [rbp-168h] BYREF
  char v27[160]; // [rsp+E0h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 1255);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1255) )
LABEL_56:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 628);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 56LL);
    if ( v6 )
    {
      _m_prefetchw((char *)this + 4424);
      if ( (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x20) == 0 || (*(_DWORD *)(v6 + 48) & 2) != 0 )
      {
        _m_prefetchw((char *)this + 4424);
        if ( (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x40) == 0
          || (v7 = 1, (*(_DWORD *)(v6 + 48) & 4) != 0) )
        {
          v7 = 0;
        }
      }
      else
      {
        v7 = 1;
      }
      v8 = *(_DWORD **)(v5 + 8 * i);
      if ( v7 )
      {
        if ( Ndis::BindState::SetBinding(
               *(Ndis::BindState **)(v5 + 8 * i),
               BindingDisabled,
               Reason_IncompatibleWithNotification) )
        {
          memset(v26, 0, sizeof(v26));
          if ( (unsigned __int8)byte_1C00E673B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v26);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v17,
                0x1Cu,
                0x15u,
                (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                (unsigned __int16 *)v26[1],
                v26[0]);
          }
        }
      }
      else
      {
        v9 = v8[8];
        v8[8] = v9 & 0xFFBFFFFF;
        if ( (v9 != 0) != ((v9 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v9 & 0xFFBFFFFF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
              v9,
              *(_QWORD *)v25);
          }
          *(_BYTE *)(*(_QWORD *)v8 + 5208LL) = 1;
          memset(v27, 0, sizeof(v27));
          if ( (unsigned __int8)byte_1C00E673B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v27);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v18,
                0x1Cu,
                0x16u,
                (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                *(unsigned __int16 **)&v27[8],
                *(_QWORD *)v27);
          }
        }
      }
    }
  }
  v10 = *((unsigned int *)this + 1251);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1251) )
      goto LABEL_56;
    v12 = *((_QWORD *)this + 626);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 40LL);
    if ( v13 )
    {
      _m_prefetchw((char *)this + 4424);
      if ( (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x20) == 0 || (*(_DWORD *)(v13 + 64) & 2) != 0 )
      {
        _m_prefetchw((char *)this + 4424);
        if ( (_InterlockedOr((volatile signed __int32 *)this + 1106, 0) & 0x40) == 0
          || (v14 = 1, (*(_DWORD *)(v13 + 64) & 4) != 0) )
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = 1;
      }
      v15 = *(_DWORD **)(v12 + 8 * j);
      if ( v14 )
      {
        if ( Ndis::BindState::SetBinding(
               *(Ndis::BindState **)(v12 + 8 * j),
               BindingDisabled,
               Reason_IncompatibleWithNotification)
          && (unsigned __int8)byte_1C00E673B >= 4u )
        {
          v19 = *(__int64 **)(v12 + 8 * j);
          v20 = *v19;
          v21 = *(unsigned __int16 **)(v19[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = 23;
LABEL_55:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v21,
              0x1Cu,
              v22,
              (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              v21,
              v20);
            continue;
          }
        }
      }
      else
      {
        v16 = v15[8];
        v15[8] = v16 & 0xFFBFFFFF;
        if ( (v16 != 0) != ((v16 & 0xFFBFFFFF) != 0) || !*(_QWORD *)v15 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v16 & 0xFFBFFFFF;
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
              v16,
              *(_QWORD *)v25);
          }
          v23 = (unsigned __int8)byte_1C00E673B < 4u;
          *(_BYTE *)(*(_QWORD *)v15 + 5208LL) = 1;
          if ( !v23 )
          {
            v24 = *(__int64 **)(v12 + 8 * j);
            v20 = *v24;
            v21 = *(unsigned __int16 **)(v24[10] + 24);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v22 = 24;
              goto LABEL_55;
            }
          }
        }
      }
    }
  }
}
