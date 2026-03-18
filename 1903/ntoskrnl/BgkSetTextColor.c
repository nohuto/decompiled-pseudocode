/*
 * XREFs of BgkSetTextColor @ 0x1402926F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1402927B8 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140468240 + 16))(&Palette[4 * v1], 0LL);
    ExReleaseRundownProtection_0(&stru_14042A678);
  }
  return 0LL;
}
