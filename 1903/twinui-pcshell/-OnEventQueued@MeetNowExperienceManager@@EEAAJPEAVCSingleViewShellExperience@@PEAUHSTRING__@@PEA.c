/*
 * XREFs of ?OnEventQueued@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800911D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z @ 0x180092B88 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnEventQueued(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v6; // rax
  HSTRING v7; // r8
  HMONITOR v8; // rax
  const char *v9; // r9
  LONG right; // ecx
  LONG bottom; // edx
  int v13; // eax
  unsigned int v14; // ebx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER v16; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v16,
         (const WCHAR **)&MeetNowExperienceEvents::ShowExperienceFromUri);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v6[1].Reserved.Reserved1, v7) )
    return 0LL;
  mi.cbSize = 40;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  v8 = MonitorFromWindow(0LL, 1u);
  if ( !GetMonitorInfoW(v8, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE6,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
             v9);
  right = mi.rcWork.right;
  bottom = mi.rcWork.bottom;
  if ( mi.rcWork.top <= mi.rcMonitor.top )
  {
    if ( mi.rcWork.left > mi.rcMonitor.left )
      right = mi.rcWork.left;
  }
  else
  {
    bottom = mi.rcWork.top;
  }
  *(_DWORD *)&v16.Reserved.Reserved2[12] = 0;
  *(float *)&v16.Reserved.Reserved1 = (float)right;
  *(_QWORD *)&v16.Reserved.Reserved2[4] = COERCE_UNSIGNED_INT((float)bottom);
  v13 = MeetNowExperienceManager::ShowFlyout((char *)this - 48, (const struct Windows::Foundation::Rect *)&v16, 1);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
