/*
 * XREFs of BgkSetTextColor @ 0x14027DC60
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14027DD28 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_14043C710 + 16))(&Palette[4 * v1], 0LL);
    ExReleaseRundownProtection_0(&stru_140404088);
  }
  return 0LL;
}
