/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000E7D0
 * Callers:
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z @ 0x18000E1E4 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAXPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000829C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000EE58 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x18000FBCC (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18001019C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800104B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001051C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003710C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     pow @ 0x18003779C (pow.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
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
  __int16 *v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rbx
  _DWORD *v13; // rax
  _DWORD *v14; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v15; // rcx
  float v16; // xmm1_4
  signed __int32 v17; // eax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  float v21; // xmm6_4
  _DWORD *v22; // rax
  struct Microsoft::WRL::Details::ModuleBase *v23; // rcx
  float v24; // xmm0_4
  signed __int32 v25; // eax
  int v26; // eax
  int cData; // [rsp+28h] [rbp-69h]
  __int64 v29; // [rsp+38h] [rbp-59h] BYREF
  float v30; // [rsp+40h] [rbp-51h]
  __int64 v31; // [rsp+48h] [rbp-49h]
  __int128 v32; // [rsp+50h] [rbp-41h] BYREF
  __int64 v33; // [rsp+60h] [rbp-31h]
  __int128 v34; // [rsp+68h] [rbp-29h]
  int v35; // [rsp+78h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-11h] BYREF
  __int16 *v37; // [rsp+A0h] [rbp+Fh]
  int v38; // [rsp+A8h] [rbp+17h]
  int v39; // [rsp+ACh] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v35 = 10;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v32);
  v4 = DuckableSessionsList;
  if ( DuckableSessionsList >= 0 )
  {
    if ( !v33 )
    {
LABEL_45:
      v4 = 0;
      goto LABEL_46;
    }
    while ( 1 )
    {
      v5 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v32);
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
        v10 = &word_18003EF40;
        LODWORD(v11) = 0;
        if ( v7 )
        {
          v10 = (__int16 *)v7;
          v11 = -1LL;
          do
            ++v11;
          while ( *(_WORD *)(v7 + 2 * v11) );
        }
        v37 = v10;
        v38 = 2 * v11 + 2;
        v39 = 0;
        TlgWrite(v6, &unk_180044837, v8, v9, 3u, &pData);
      }
      v29 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
             v5,
             &GUID_766f2bf0_bcaf_4cd0_a45e_0a166fb7e35c,
             &v29) < 0 )
        goto LABEL_42;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29) )
      {
        v12 = 0LL;
        v31 = 0LL;
        v13 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v14 = v13;
        if ( v13 )
        {
          v15 = Microsoft::WRL::Details::ModuleBase::module_;
          *(_QWORD *)v13 = &CGainStage::`vftable';
          v13[9] = 1;
          *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
          v13[13] = 1;
          if ( v15 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v15 + 8LL))(v15);
          *(_QWORD *)v14 = &CVolumeGainStage::`vftable';
          v16 = pow(10.0, 0.0);
          *((float *)v14 + 14) = v16;
          *((_BYTE *)v14 + 32) = 1;
          *((_QWORD *)v14 + 5) = 10000000LL;
          *((_OWORD *)v14 + 1) = DuckingPolicyGuid;
          do
            v17 = v14[13];
          while ( v17 != 0x7FFFFFFF && v17 != _InterlockedCompareExchange(v14 + 13, v17 + 1, v17) );
LABEL_35:
          v12 = v14;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v14);
          goto LABEL_38;
        }
        v18 = 1416LL;
      }
      else
      {
        v19 = *((_DWORD *)this + 77);
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 == 1 )
              v21 = FLOAT_N6_0;
            else
              v21 = 0.0;
          }
          else
          {
            v21 = FLOAT_N18_0;
          }
        }
        else
        {
          v21 = FLOAT_N96_0;
        }
        v12 = 0LL;
        v31 = 0LL;
        v22 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v14 = v22;
        if ( v22 )
        {
          v23 = Microsoft::WRL::Details::ModuleBase::module_;
          *(_QWORD *)v22 = &CGainStage::`vftable';
          v22[9] = 1;
          *(_QWORD *)v22 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
          v22[13] = 1;
          if ( v23 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v23 + 8LL))(v23);
          v30 = v21;
          *(_QWORD *)v14 = &CVolumeGainStage::`vftable';
          if ( v21 == -INFINITY )
            v24 = 0.0;
          else
            v24 = pow(10.0, v21 / 20.0);
          *((float *)v14 + 14) = v24;
          *((_BYTE *)v14 + 32) = 0;
          *((_QWORD *)v14 + 5) = 10000000LL;
          *((_OWORD *)v14 + 1) = DuckingPolicyGuid;
          do
            v25 = v14[13];
          while ( v25 != 0x7FFFFFFF && v25 != _InterlockedCompareExchange(v14 + 13, v25 + 1, v25) );
          goto LABEL_35;
        }
        v18 = 1425LL;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v18,
        (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)0x8007000ELL,
        cData);
      v14 = 0LL;
LABEL_38:
      if ( v14 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v29 + 40LL))(v29, v12);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x595,
            (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
            (const char *)(unsigned int)v26,
            cData);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v12);
      }
LABEL_42:
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      if ( !v33 )
        goto LABEL_45;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x572,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)DuckableSessionsList);
LABEL_46:
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v32);
  return v4;
}
