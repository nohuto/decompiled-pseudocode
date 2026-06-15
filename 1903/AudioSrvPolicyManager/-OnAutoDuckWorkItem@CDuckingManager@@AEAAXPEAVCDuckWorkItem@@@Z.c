/*
 * XREFs of ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AEB4
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ADD0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     WPP_SF_ @ 0x1800041BC (WPP_SF_.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000A500 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18000A8FC (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000B4D8 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18000B8D0 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ??$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVCVolumeGainStage@@$$QEAPEBU_GUID@@AEAM$$QEAH$$QEA_N@Z @ 0x18000C96C (--$MakeAndInitialize@VCVolumeGainStage@@V1@PEBU_GUID@@AEAMH_N@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D240 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingManager::OnAutoDuckWorkItem(CDuckingManager *this, struct CDuckWorkItem *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  const struct _TlgProvider_t *v5; // rbx
  __int64 v6; // rax
  const GUID *v7; // r8
  const GUID *v8; // r9
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  float v12; // xmm6_4
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  const unsigned __int16 *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ebx
  const unsigned __int16 *v23; // rax
  int v24; // eax
  int v25; // ebx
  const unsigned __int16 *v26; // rax
  int v27; // eax
  int cData; // [rsp+28h] [rbp-69h]
  int cDataa; // [rsp+28h] [rbp-69h]
  int v30; // [rsp+48h] [rbp-49h] BYREF
  __int64 v31; // [rsp+50h] [rbp-41h] BYREF
  float v32; // [rsp+58h] [rbp-39h] BYREF
  int v33; // [rsp+5Ch] [rbp-35h] BYREF
  __int64 v34; // [rsp+60h] [rbp-31h] BYREF
  __int64 v35; // [rsp+68h] [rbp-29h] BYREF
  __int128 *v36; // [rsp+70h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  const unsigned __int16 *v38; // [rsp+98h] [rbp+7h]
  int v39; // [rsp+A0h] [rbp+Fh]
  int v40; // [rsp+A4h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) && !*((_DWORD *)a2 + 4) )
  {
    if ( !*((_DWORD *)this + 76) )
      goto LABEL_47;
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      v9 = &word_18003D1D0;
      LODWORD(v10) = 0;
      if ( v6 )
      {
        v9 = (const unsigned __int16 *)v6;
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(v6 + 2 * v10) );
      }
      v38 = v9;
      v39 = 2 * v10 + 2;
      v40 = 0;
      TlgWrite(v5, &unk_180042D41, v7, v8, 3u, &pData);
    }
    v11 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
    v31 = 0LL;
    if ( (**v11)(v11, &GUID_766f2bf0_bcaf_4cd0_a45e_0a166fb7e35c, &v31) < 0 )
      goto LABEL_36;
    v12 = 0.0;
    v32 = 0.0;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v31 + 24LL))(v31) )
    {
      v13 = *((_DWORD *)this + 77);
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            v12 = FLOAT_N6_0;
        }
        else
        {
          v12 = FLOAT_N18_0;
        }
      }
      else
      {
        v12 = FLOAT_N96_0;
      }
      v32 = v12;
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
    v33 = 0;
    v35 = 0LL;
    v36 = &DuckingPolicyGuid;
    LOBYTE(v30) = v15 != 0;
    v16 = Microsoft::WRL::Details::MakeAndInitialize<CVolumeGainStage,CVolumeGainStage,_GUID const *,float &,int,bool>(
            (unsigned int)&v35,
            (unsigned int)&v36,
            (unsigned int)&v32,
            (unsigned int)&v33,
            (__int64)&v30);
    v17 = v35;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 40LL))(v31, v35);
      if ( v16 >= 0 )
      {
LABEL_27:
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v31 + 24LL))(v31) )
        {
          v34 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v31)(
                 v31,
                 &GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4,
                 &v34) >= 0 )
          {
            LOBYTE(cDataa) = 0;
            (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v34 + 24LL))(
              v34,
              2LL,
              0LL,
              0xFFFFFFFFLL,
              cDataa,
              0LL);
          }
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        if ( v17 )
        {
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v17 + 52)) )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 24LL))(v35, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
        }
LABEL_36:
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        goto LABEL_47;
      }
      v18 = 1238LL;
    }
    else
    {
      v18 = 1236LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v16,
      cDataa);
    goto LABEL_27;
  }
  v19 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 72LL))(*(_QWORD *)a2);
  v20 = CDuckingManager::ApplyDuckingGainStages(this, v19);
  if ( v20 < 0 )
  {
    v21 = 1185LL;
LABEL_42:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v20,
      cData);
    goto LABEL_43;
  }
  v20 = CDuckingManager::RecalculateSessionVolumes(this, v19, 0LL);
  if ( v20 < 0 )
  {
    v21 = 1188LL;
    goto LABEL_42;
  }
LABEL_43:
  v22 = *((_DWORD *)a2 + 2);
  v23 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
  v24 = CDuckingManager::NotifyFilteredClientsAutoDuck(this, v23, v19, v22);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4AA,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v24,
      cData);
  v25 = *((_DWORD *)a2 + 2);
  v26 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
  v27 = CDuckingManager::NotifyUnfilteredClientsAutoDuck(this, v26, v25);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4AD,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v27,
      cData);
LABEL_47:
  if ( v4 )
    LeaveCriticalSection(v4);
}
