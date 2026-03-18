/*
 * XREFs of BgkSetTextColor @ 0x140292450
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140292518 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140467F80 + 16))(&Palette[4 * v1], 0LL);
    ExReleaseRundownProtection_0(&stru_14042A688);
  }
  return 0LL;
}
