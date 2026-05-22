/*
 * XREFs of GetRigToHead @ 0x1800EC8B0
 * Callers:
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800EF95C (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800845FC (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetRigToHead(__int64 a1, _OWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  _OWORD v12[4]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v13[64]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v15; // [rsp+C8h] [rbp+67h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp+6Fh] BYREF

  *a2 = _xmm;
  a2[1] = _xmm;
  a2[2] = _xmm;
  a2[3] = _xmm;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v16);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a1 + 88LL))(
         a1,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
    v6 = (**v16)(v16, &GUID_fef1006c_39a7_4201_957f_a8a060e4170e, &v15);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 48LL))(v15, v13);
      v5 = v9;
      if ( v9 >= 0 )
      {
        if ( Windows::Foundation::Numerics::invert(
               (Windows::Foundation::Numerics *)v13,
               (const struct Windows::Foundation::Numerics::float4x4 *)v12,
               v10) )
        {
          *a2 = v12[0];
          a2[1] = v12[1];
          a2[2] = v12[2];
          a2[3] = v12[3];
          v5 = 0;
          goto LABEL_11;
        }
        v5 = -2147418113;
        v7 = 2147549183LL;
        v8 = 643LL;
      }
      else
      {
        v7 = (unsigned int)v9;
        v8 = 640LL;
      }
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 637LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27A,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v16);
  return v5;
}
