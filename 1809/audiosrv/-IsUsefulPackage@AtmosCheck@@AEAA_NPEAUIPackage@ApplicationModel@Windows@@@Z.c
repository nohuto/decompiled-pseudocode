/*
 * XREFs of ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1800157B8
 * Callers:
 *     _lambda_3a6a9ae2d1ede84324f1e385780d9b63_::operator() @ 0x180067B40 (_lambda_3a6a9ae2d1ede84324f1e385780d9b63_--operator().c)
 *     _lambda_d16d110d62607e9e7a123dfd70e3b2fb_::operator() @ 0x180067D8C (_lambda_d16d110d62607e9e7a123dfd70e3b2fb_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AtmosCheck::IsUsefulPackage(AtmosCheck *this, struct Windows::ApplicationModel::IPackage *a2)
{
  char v3; // bl
  __int64 v5[2]; // [rsp+20h] [rbp-10h] BYREF
  AtmosCheck *v6; // [rsp+50h] [rbp+20h] BYREF
  char v7; // [rsp+58h] [rbp+28h] BYREF
  char v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v6 = this;
  v5[1] = -2LL;
  v5[0] = (__int64)a2;
  v3 = 0;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = 0LL;
  LOBYTE(v6) = 0;
  v7 = 0;
  v8 = 0;
  (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *, AtmosCheck **))(*(_QWORD *)a2 + 64LL))(a2, &v6);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
  if ( (**(int (__fastcall ***)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01,
         &v9) >= 0 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 88LL))(v9, &v7);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 80LL))(v9, &v8);
  }
  if ( !(_BYTE)v6 && !v7 && !v8 )
    v3 = 1;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v5);
  return v3;
}
