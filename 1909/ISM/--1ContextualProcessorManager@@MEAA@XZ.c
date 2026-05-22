/*
 * XREFs of ??1ContextualProcessorManager@@MEAA@XZ @ 0x1800F91DC
 * Callers:
 *     ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1800F9290 (--_EContextualProcessorManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035428 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GameCoreCP@@@wil@@CAX_NW4ReportingKi.c)
 */

void __fastcall ContextualProcessorManager::~ContextualProcessorManager(
        ContextualProcessorManager *this,
        __int64 a2,
        __int64 a3)
{
  __int64 *v4; // rdi
  __int64 *v5; // rsi

  *(_QWORD *)this = &ContextualProcessorManager::`vftable';
  wil::Feature<__WilFeatureTraits_Feature_GameCoreCP>::ReportUsageToService((__int64)this, a2, a3);
  if ( *((_DWORD *)this + 10) )
    NtMITSetKeyboardInputRoutingPolicy(0LL);
  v4 = (__int64 *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 3);
    if ( v4 != v5 )
    {
      do
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v4++);
      while ( v4 != v5 );
      v4 = (__int64 *)*((_QWORD *)this + 2);
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 4) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
