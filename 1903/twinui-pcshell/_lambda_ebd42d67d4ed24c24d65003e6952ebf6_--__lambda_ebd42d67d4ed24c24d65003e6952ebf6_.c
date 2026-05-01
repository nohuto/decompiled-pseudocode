/*
 * XREFs of _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x18021F100
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::_scalar_deleting_destructor_ @ 0x18021F740 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___--_scala.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180221C90 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x18021F210 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_(__int64 a1)
{
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)(a1 + 72));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 8);
}
