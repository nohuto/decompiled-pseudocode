/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18002F81C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18002F928 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007DF14 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800850B4 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800CB7E0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18019A57C (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  CCompiledEffectTemplate *v4; // rdi
  int v5; // esi
  void *v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  struct Windows::UI::Composition::IEffectDescription *v9; // rcx
  int v11; // r9d
  int v12; // ebx
  __int64 v13; // r14
  BSTR v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-30h]
  unsigned int v20; // [rsp+20h] [rbp-30h]
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v22; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v4 = this;
  v5 = 0;
  v22 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v8 = -2003303422;
    v19 = 34;
LABEL_12:
    v11 = v8;
    goto LABEL_17;
  }
  this = (CCompiledEffectTemplate *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 167LL);
  if ( !this )
  {
    v8 = -2003303421;
    v19 = 42;
    goto LABEL_12;
  }
  *((_QWORD *)v4 + 8) = *((_QWORD *)a3 + 3);
  v6 = CSharedSection::ResolveAllocation(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
  if ( !v6 )
  {
    v8 = -2147024882;
    v19 = 49;
    goto LABEL_12;
  }
  SetRestrictedErrorInfo(0LL);
  v7 = DeserializeEffectDescription(v6, *((unsigned int *)a3 + 4), &v22);
  v5 = v7;
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = 55;
  }
  else
  {
    v7 = CEffectCompilationService::BeginCompile(
           *(CEffectCompilationService **)(*((_QWORD *)v4 + 2) + 96LL),
           v4,
           v22,
           (struct CEffectCompilationTask **)v4 + 9);
    v8 = v7;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, 0LL, 0LL);
      v8 = 0;
      goto LABEL_7;
    }
    v19 = 58;
  }
  v11 = v7;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v11, v19, 0LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(v4);
  if ( CNotificationResource::ShouldNotify(v4) )
  {
    v12 = -2147467259;
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 1224LL) + 48LL);
    v14 = 0LL;
    bstrString = 0LL;
    if ( v5 < 0 )
    {
      v12 = v5;
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
      v14 = bstrString;
    }
    v15 = *((_QWORD *)v4 + 6);
    if ( v15 )
      v16 = *(_DWORD *)(v15 + 68);
    else
      v16 = 0;
    v21[0] = v16;
    v21[1] = *((unsigned int *)v4 + 14);
    LOWORD(v20) = 1;
    v17 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, unsigned int, void *, int, BSTR))CoreUICallSend)(
            v13,
            v21,
            2LL,
            5LL,
            v20,
            &unk_1802B2E3D,
            v12,
            v14);
    v8 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x5Bu, 0LL);
    SysFreeString(bstrString);
  }
  if ( v5 < 0 )
    v8 = 0;
LABEL_7:
  v9 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return v8;
}
