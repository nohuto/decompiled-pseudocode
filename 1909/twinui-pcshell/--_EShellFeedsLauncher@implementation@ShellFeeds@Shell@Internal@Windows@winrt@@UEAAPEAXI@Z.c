/*
 * XREFs of ??_EShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1800C0900
 * Callers:
 *     ??_EShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x1800E4090 (--_EShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C076C (--1ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this,
        char a2)
{
  winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::~ShellFeedsLauncher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
