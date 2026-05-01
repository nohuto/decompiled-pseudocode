/*
 * XREFs of ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BDA5C
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x1800BD8AC (--1AppInventoryData@@QEAA@XZ.c)
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1800BD8DC (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1800BDC20 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BED44 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ComputeAppIdFromExePath(_QWORD *a1, const WCHAR *a2)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v6[32]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v7[8]; // [rsp+70h] [rbp-58h] BYREF

  GetCertSignerHashFromExe(v5);
  GetAppInventoryData(v6, a2);
  Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(a1, a2, v5, v7);
  AppInventoryData::~AppInventoryData((AppInventoryData *)v6);
  std::wstring::_Tidy_deallocate(v5);
  return a1;
}
