/*
 * XREFs of ?SetAppTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJAEBUAppTitlebarConfiguration@@@Z @ 0x1801515F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        const struct AppTitlebarConfiguration *a2)
{
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_WORD *)this + 324) = *(_WORD *)a2;
  if ( *((_QWORD *)this + 80) )
  {
    v2 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 168LL))(this);
    if ( v2 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1546LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v2);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x60E,
                               (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                               v3);
      }
    }
  }
  return 0LL;
}
