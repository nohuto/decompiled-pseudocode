/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000B4D8
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000AEB4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000BB8C (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x18000C900 (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CEFC (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D240 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034AFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     pow @ 0x1800351A8 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::ApplyDuckingGainStages(CDuckingManager *this, const unsigned __int16 *a2)
{
  int DuckableSessionsList; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  const struct _TlgProvider_t *v6; // rdi
  __int64 v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const unsigned __int16 *v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // ecx
  float v19; // xmm6_4
  _DWORD *v20; // rax
  struct Microsoft::WRL::Details::ModuleBase *v21; // rcx
  float v22; // xmm0_4
  _DWORD *v23; // rdi
  int v24; // eax
  int cData; // [rsp+28h] [rbp-69h]
  _DWORD *v27; // [rsp+40h] [rbp-51h]
  __int64 v28; // [rsp+48h] [rbp-49h] BYREF
  __int128 v29; // [rsp+50h] [rbp-41h] BYREF
  __int64 v30; // [rsp+60h] [rbp-31h]
  __int128 v31; // [rsp+68h] [rbp-29h]
  int v32; // [rsp+78h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-11h] BYREF
  const unsigned __int16 *v34; // [rsp+A0h] [rbp+Fh]
  int v35; // [rsp+A8h] [rbp+17h]
  int v36; // [rsp+ACh] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v32 = 10;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v29);
  v4 = DuckableSessionsList;
  if ( DuckableSessionsList >= 0 )
  {
    if ( !v30 )
    {
LABEL_44:
      v4 = 0;
      goto LABEL_45;
    }
    while ( 1 )
    {
      v5 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v29);
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
        v10 = &word_18003D1D0;
        LODWORD(v11) = 0;
        if ( v7 )
        {
          v10 = (const unsigned __int16 *)v7;
          v11 = -1LL;
          do
            ++v11;
          while ( *(_WORD *)(v7 + 2 * v11) );
        }
        v34 = v10;
        v35 = 2 * v11 + 2;
        v36 = 0;
        TlgWrite(v6, &unk_180042D0D, v8, v9, 3u, &pData);
      }
      v28 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
             v5,
             &GUID_766f2bf0_bcaf_4cd0_a45e_0a166fb7e35c,
             &v28) < 0 )
        goto LABEL_41;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28) )
      {
        v27 = 0LL;
        v12 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v13 = v12;
        if ( v12 )
        {
          v14 = Microsoft::WRL::Details::ModuleBase::module_;
          *(_QWORD *)v12 = &CGainStage::`vftable';
          v12[9] = 1;
          *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
          v12[13] = 1;
          if ( v14 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v14 + 8LL))(v14);
          *(_QWORD *)v13 = &CVolumeGainStage::`vftable';
          v15 = pow(10.0, 0.0);
          *((float *)v13 + 14) = v15;
          *((_BYTE *)v13 + 32) = 1;
          *((_OWORD *)v13 + 1) = DuckingPolicyGuid;
LABEL_30:
          *((_QWORD *)v13 + 5) = 10000000LL;
          _InterlockedAdd(v13 + 13, 1u);
          v27 = v13;
          v23 = v13;
          if ( _InterlockedExchangeAdd(v13 + 13, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
          goto LABEL_35;
        }
        v16 = 1416LL;
      }
      else
      {
        v17 = *((_DWORD *)this + 77);
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
              v19 = FLOAT_N6_0;
            else
              v19 = 0.0;
          }
          else
          {
            v19 = FLOAT_N18_0;
          }
        }
        else
        {
          v19 = FLOAT_N96_0;
        }
        v27 = 0LL;
        v20 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v13 = v20;
        if ( v20 )
        {
          v21 = Microsoft::WRL::Details::ModuleBase::module_;
          *(_QWORD *)v20 = &CGainStage::`vftable';
          v20[9] = 1;
          *(_QWORD *)v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
          v20[13] = 1;
          if ( v21 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v21 + 8LL))(v21);
          *(_QWORD *)v13 = &CVolumeGainStage::`vftable';
          if ( v19 == -INFINITY )
            v22 = 0.0;
          else
            v22 = pow(10.0, v19 / 20.0);
          *((float *)v13 + 14) = v22;
          *((_BYTE *)v13 + 32) = 0;
          *((_OWORD *)v13 + 1) = DuckingPolicyGuid;
          goto LABEL_30;
        }
        v16 = 1425LL;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)0x8007000ELL,
        cData);
      v23 = 0LL;
LABEL_35:
      if ( v23 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v28 + 40LL))(v28, v27);
        if ( v24 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x595,
            (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
            (const char *)(unsigned int)v24,
            cData);
        if ( _InterlockedExchangeAdd(v23 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v27 + 24LL))(v27, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
LABEL_41:
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      if ( !v30 )
        goto LABEL_44;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x572,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)DuckableSessionsList);
LABEL_45:
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v29);
  return v4;
}
