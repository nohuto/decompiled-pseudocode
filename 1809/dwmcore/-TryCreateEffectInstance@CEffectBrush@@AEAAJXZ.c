/*
 * XREFs of ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x1800DFD6C
 * Callers:
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x1800DF258 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DFD00 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800DFD50 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x1800E12E8 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::TryCreateEffectInstance(CEffectBrush *this)
{
  unsigned int v1; // ebx
  __int64 **v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  int v13; // eax
  __int64 v14; // rcx

  v1 = 0;
  v2 = (__int64 **)((char *)this + 96);
  if ( !*((_QWORD *)this + 12) && CEffectBrush::HasValidTemplate(this) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 80) + 72LL) + 48LL);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v6 + 104LL))(v6, v2);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1B3u);
      return v1;
    }
    v9 = *((_QWORD *)this + 11);
    if ( v9 )
      *(_QWORD *)(v9 + 72) = (char *)this + 72;
  }
  if ( *v2 )
  {
    if ( !(*(__int64 (__fastcall **)(__int64 *))(**v2 + 64))(*v2) )
    {
      if ( CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 10)) )
      {
        v10 = *v2;
        v11 = *v10;
        CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 10));
        v13 = (*(__int64 (__fastcall **)(__int64 *, const struct Windows::UI::Composition::ICompiledEffect *))(v11 + 56))(
                v10,
                CompiledEffectNoRef);
        v1 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1C4u);
      }
    }
  }
  return v1;
}
