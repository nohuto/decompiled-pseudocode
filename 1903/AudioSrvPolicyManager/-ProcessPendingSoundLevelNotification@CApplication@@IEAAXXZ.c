/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000E9DC
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000E718 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000F350 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x18000882C (WPP_SF_SSd.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     McTemplateU0zq @ 0x18000D81C (McTemplateU0zq.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800138E8 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // r14d
  __int64 v4; // rdx
  _UNKNOWN **v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
  if ( !*((_DWORD *)this + 80) )
  {
    *((_DWORD *)this + 80) = 1;
    while ( 1 )
    {
      v3 = *((_DWORD *)this + 81);
      if ( v3 == *((_DWORD *)this + 82) && !*((_DWORD *)this + 157) )
        break;
      *((_DWORD *)this + 82) = v3;
      LeaveCriticalSection(v1);
      v10 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids, v3);
        v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      v6 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v6 )
      {
        v7 = v6[2];
        v6 = (_QWORD *)*v6;
        if ( (*(_BYTE *)(v7 + 488) & 1) != 0 && !*(_DWORD *)(v7 + 448) )
        {
          if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
          {
            LODWORD(v8) = *(_DWORD *)(v7 + 192);
            WPP_SF_SSd(
              (TRACEHANDLE)v5[2],
              0xFu,
              &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids,
              L"SoundLevelChanged",
              *((const wchar_t **)this + 3),
              v8);
          }
          if ( Microsoft_Windows_AudioEnableBits < 0 )
            McTemplateU0zq((__int64)v5, v4, *((_QWORD *)this + 3), v3);
          CProcess::SendPBMNotification(v7, 0LL);
          v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
      }
      if ( v10 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v10 = 0;
      }
      EnterCriticalSection(v1);
      *((_DWORD *)this + 157) = 0;
    }
    *((_DWORD *)this + 80) = 0;
  }
  LeaveCriticalSection(v1);
}
