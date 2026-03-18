/*
 * XREFs of ??1CWatchdogTimer@@UEAA@XZ @ 0x180191B60
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180177BF8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??_GCDwmRenderThreadWatchdog@@UEAAPEAXI@Z @ 0x18018BEF0 (--_GCDwmRenderThreadWatchdog@@UEAAPEAXI@Z.c)
 *     ??_ECWatchdogTimer@@UEAAPEAXI@Z @ 0x180191BD0 (--_ECWatchdogTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SetTimer@CWatchdogTimer@@AEAAXHH@Z @ 0x180191C0C (-SetTimer@CWatchdogTimer@@AEAAXHH@Z.c)
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(CWatchdogTimer *this)
{
  char *v2; // rcx
  char *v3; // rcx

  *((_BYTE *)this + 25) = 1;
  *(_QWORD *)this = &CWatchdogTimer::`vftable';
  CWatchdogTimer::SetTimer(this, 0, 0);
  WaitForSingleObject(*((HANDLE *)this + 1), 0xFFFFFFFF);
  v2 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
}
