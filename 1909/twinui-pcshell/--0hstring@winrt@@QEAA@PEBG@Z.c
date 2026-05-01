/*
 * XREFs of ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800A1808
 * Callers:
 *     ??0PenWorkspaceAppInstallBroker@@QEAA@XZ @ 0x1800A16CC (--0PenWorkspaceAppInstallBroker@@QEAA@XZ.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A17C0 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

HSTRING *__fastcall winrt::hstring::hstring(HSTRING *this, const unsigned __int16 *a2)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  v5[1] = v3;
  winrt::hstring::hstring(this, (__int64)v5);
  return this;
}
