/*
 * XREFs of ?PostPresent@CHwndRenderTarget@@UEAAJ_N@Z @ 0x1800BD6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18015A590 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CAX_NW4ReportingK.c)
 */

__int64 __fastcall CHwndRenderTarget::PostPresent(CHwndRenderTarget *this, char a2)
{
  __int64 v3; // rcx

  *((_BYTE *)this + 801) = 0;
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    if ( !a2 || *(int *)(*((_QWORD *)this - 6) + 1096LL) >= 5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 240LL))(v3);
    if ( *((_QWORD *)this + 7) && g_fDumpTreeOnNextFrame )
    {
      g_fDumpTreeOnNextFrame = 0;
      wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::ReportUsageToService();
    }
  }
  return 0LL;
}
