/*
 * XREFs of BgkDisplayStringEx @ 0x14027DB44
 * Callers:
 *     BgkDisplayString @ 0x14027DA90 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1408CDA20 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     HeadlessDispatch @ 0x140186110 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x14027DD28 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x14094E608 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_14043C5F1 || byte_14043C5F0 )
  {
    byte_14043C5F1 = 0;
    byte_14043C5F0 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_14043C710 + 24))(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_140404088);
  return v4;
}
