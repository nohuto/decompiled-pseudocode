/*
 * XREFs of ??$PersistData@UVirtualDesktopPersistedData@CApplicationViewBase@@@CPersistence@ApplicationViewManagement@@QEAAJPEBGAEBUVirtualDesktopPersistedData@CApplicationViewBase@@@Z @ 0x18003DD0C
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___ @ 0x1800901E8 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_af861fabadf2fb98547f9.c)
 * Callees:
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x18003DD6C (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

int __fastcall ApplicationViewManagement::CPersistence::PersistData<CApplicationViewBase::VirtualDesktopPersistedData>(
        ApplicationViewManagement::CPersistence *a1,
        const unsigned __int16 *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  unsigned __int8 v5[4]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+34h] [rbp-24h]
  __int128 v7; // [rsp+38h] [rbp-20h]

  v3 = *a3;
  *(_DWORD *)v5 = 16;
  v6 = 1447309360;
  v7 = v3;
  return ApplicationViewManagement::CPersistence::_PersistData(a1, a2, L"VirtualDesktop", v5, 0x18u);
}
