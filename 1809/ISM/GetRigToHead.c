/*
 * XREFs of GetRigToHead @ 0x1800B1D04
 * Callers:
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800B1E84 (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180044D7C (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetRigToHead(__int64 a1, _OWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  _OWORD v13[4]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v14[64]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v16; // [rsp+C8h] [rbp+67h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp+6Fh] BYREF

  *a2 = _xmm;
  a2[1] = _xmm;
  a2[2] = _xmm;
  a2[3] = _xmm;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a1 + 88LL))(
         a1,
         &v17);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x471,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_13;
  }
  v16 = 0LL;
  v5 = (**v17)(v17, &GUID_fef1006c_39a7_4201_957f_a8a060e4170e, &v16);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 1140LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v6);
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 48LL))(v16, v14);
  v4 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 1143LL;
    goto LABEL_9;
  }
  if ( !Windows::Foundation::Numerics::invert(
          (Windows::Foundation::Numerics *)v14,
          (const struct Windows::Foundation::Numerics::float4x4 *)v13,
          v9) )
  {
    v4 = -2147418113;
    v6 = 2147549183LL;
    v7 = 1146LL;
    goto LABEL_9;
  }
  *a2 = v13[0];
  a2[1] = v13[1];
  a2[2] = v13[2];
  a2[3] = v13[3];
  v4 = 0;
LABEL_11:
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_13:
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
  return v4;
}
