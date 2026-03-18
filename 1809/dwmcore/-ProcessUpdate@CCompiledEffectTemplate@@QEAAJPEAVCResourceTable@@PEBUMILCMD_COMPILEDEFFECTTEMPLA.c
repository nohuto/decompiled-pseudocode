/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18009D5B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800518CC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x180054DA0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18009D298 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800BFE98 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180172BA8 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  CCompiledEffectTemplate *v4; // rdi
  int v5; // esi
  void *v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  struct Windows::UI::Composition::IEffectDescription *v9; // rcx
  int v11; // r9d
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v19; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v4 = this;
  v5 = 0;
  v19 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v8 = -2003303422;
    v17 = 36;
LABEL_12:
    v11 = v8;
    goto LABEL_17;
  }
  this = (CCompiledEffectTemplate *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 136LL);
  if ( !this )
  {
    v8 = -2003303421;
    v17 = 44;
    goto LABEL_12;
  }
  *((_QWORD *)v4 + 8) = *(_QWORD *)((char *)a3 + 20);
  v6 = CSharedSection::ResolveAllocation(this, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
  if ( !v6 )
  {
    v8 = -2147024882;
    v17 = 51;
    goto LABEL_12;
  }
  SetRestrictedErrorInfo(0LL);
  v7 = DeserializeEffectDescription(v6, *((unsigned int *)a3 + 4), &v19);
  v5 = v7;
  v8 = v7;
  if ( v7 < 0 )
  {
    v17 = 57;
  }
  else
  {
    v7 = CEffectCompilationService::BeginCompile(
           *(HANDLE **)(*((_QWORD *)v4 + 2) + 104LL),
           v4,
           v19,
           (struct CEffectCompilationTask **)v4 + 9);
    v8 = v7;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, 0LL, 0LL);
      v8 = 0;
      goto LABEL_7;
    }
    v17 = 60;
  }
  v11 = v7;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v11, v17);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(v4);
  if ( CNotificationResource::ShouldNotify(v4) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 1208LL) + 56LL);
    bstrString = 0LL;
    if ( v5 < 0 )
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    v13 = *((_QWORD *)v4 + 6);
    if ( v13 )
      v14 = *(_DWORD *)(v13 + 68);
    else
      v14 = 0;
    v18[0] = v14;
    v18[1] = *((unsigned int *)v4 + 14);
    v15 = CoreUICallSend(v12, v18, 2LL, 5LL, 1, &unk_1802763DD);
    v8 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x5Du);
    SysFreeString(bstrString);
  }
  if ( v5 < 0 )
    v8 = 0;
LABEL_7:
  v9 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return v8;
}
