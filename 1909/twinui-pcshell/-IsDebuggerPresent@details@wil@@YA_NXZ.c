/*
 * XREFs of ?IsDebuggerPresent@details@wil@@YA_NXZ @ 0x18007595C
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180075770 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::details::IsDebuggerPresent(wil::details *this)
{
  char v1; // bl
  BOOL IsDebuggerPresent; // eax

  v1 = 0;
  if ( wil::g_fIsDebuggerPresent )
    return 1;
  if ( wil::g_pfnIsDebuggerPresent )
  {
    IsDebuggerPresent = wil::g_pfnIsDebuggerPresent();
  }
  else
  {
    if ( ::IsDebuggerPresent() )
      return 1;
    IsDebuggerPresent = 0;
  }
  if ( IsDebuggerPresent )
    return 1;
  return v1;
}
