/*
 * XREFs of _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x1801C76C8
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_3debc4ca9d8e656fb3713c45e37949b6_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801C7EE0 (--_G-$CTaskWrapper@V_lambda_3debc4ca9d8e656fb3713c45e37949b6_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801CA4D0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801C786C (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_(__int64 a1)
{
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)(a1 + 72));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 8);
}
