/*
 * XREFs of ??_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z @ 0x1803AE678
 * Callers:
 *     ??_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z @ 0x1800E2780 (--_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1803AE3FC (--1CPerMonitorDesktopVisibilityService@@UEAA@XZ.c)
 */

CPerMonitorDesktopVisibilityService *__fastcall CPerMonitorDesktopVisibilityService::`vector deleting destructor'(
        CPerMonitorDesktopVisibilityService *this,
        char a2)
{
  CPerMonitorDesktopVisibilityService::~CPerMonitorDesktopVisibilityService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
