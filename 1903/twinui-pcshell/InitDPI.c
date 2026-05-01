/*
 * XREFs of InitDPI @ 0x180409710
 * Callers:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18003E6A0 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x18018ECCC (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

int InitDPI()
{
  HDC ProcAddress; // rax
  int v1; // ebx
  HMODULE ModuleHandleW; // rax
  HDC v3; // rbx

  ProcAddress = (HDC)qword_1805988F0;
  v1 = 1;
  if ( qword_1805988F0 == -1 )
  {
    ModuleHandleW = GetModuleHandleW(L"USER32.DLL");
    if ( ModuleHandleW )
    {
      ProcAddress = (HDC)GetProcAddress(ModuleHandleW, "IsProcessDPIAware");
      qword_1805988F0 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = (HDC)qword_1805988F0;
    }
  }
  if ( ProcAddress )
  {
    LODWORD(ProcAddress) = ((__int64 (*)(void))ProcAddress)();
    v1 = (int)ProcAddress;
  }
  if ( dword_180598898 == -1 || dword_18059B630 != v1 )
  {
    dword_18059B630 = v1;
    ProcAddress = GetDC(0LL);
    v3 = ProcAddress;
    if ( ProcAddress )
    {
      dword_180598898 = GetDeviceCaps(ProcAddress, 88);
      GetDeviceCaps(v3, 90);
      LODWORD(ProcAddress) = ReleaseDC(0LL, v3);
    }
    else
    {
      dword_180598898 = 96;
    }
  }
  return (int)ProcAddress;
}
