/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005CF90 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180062570 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180065250 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180066E60 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180067880 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180067F50 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800685A0 (-OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005DD00 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180068D3C (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x180069240 (-ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  _DWORD *v6; // rbx
  unsigned int *v7; // r9
  int *v8; // rsi
  int DeviceId; // eax
  unsigned int v10; // edi
  struct RIMDevice *v12; // r13
  struct RIMDevice *v13; // r14
  int v14; // eax
  void *v15; // rax
  void *v16; // rdi
  unsigned int v17; // esi
  const struct std::nothrow_t *v18; // rdx
  NTSTATUS Caps; // eax
  __int64 v20; // rdx
  HIDDeviceCollection *v21; // rcx
  int v22; // eax
  unsigned int v23; // r14d
  const struct std::nothrow_t *v24; // rdx
  int v25; // eax
  unsigned int v26; // eax
  size_t Size; // [rsp+28h] [rbp-79h] BYREF
  struct RIMDevice *v28; // [rsp+30h] [rbp-71h] BYREF
  int v29; // [rsp+38h] [rbp-69h]
  _DWORD *v30; // [rsp+40h] [rbp-61h]
  char v31[8]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v32; // [rsp+50h] [rbp-51h]
  __int16 v33; // [rsp+52h] [rbp-4Fh]
  __int16 v34; // [rsp+54h] [rbp-4Dh]
  __int64 v35; // [rsp+70h] [rbp-31h]
  _HIDP_CAPS Capabilities; // [rsp+78h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v35 = -2LL;
  v29 = a2;
  Size = 0LL;
  v6 = 0LL;
  v30 = 0LL;
  memset_0(v31, 0, 0x28uLL);
  if ( !a3 )
  {
    v26 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)v26);
    JUMPOUT(0x1800696A2LL);
  }
  v8 = (int *)*a3;
  if ( !*a3 )
  {
    v6 = operator new(0x3D8uLL);
    memset_0(v6, 0, 0x3D8uLL);
    v6[2] = 984;
    v30 = v6;
    v8 = v6;
  }
  v28 = 0LL;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v28, v7);
  v10 = DeviceId;
  if ( DeviceId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    if ( !v6 )
      return v10;
LABEL_6:
    operator delete(v6, (const struct std::nothrow_t *)0x3D8);
    return v10;
  }
  v12 = v28;
  if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 96LL))(
          this,
          v28) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    if ( v6 )
      operator delete(v6, (const struct std::nothrow_t *)0x3D8);
    return 2147549183LL;
  }
  v13 = (struct RIMDevice *)*((_QWORD *)v12 + 2);
  v28 = v13;
  v14 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v13, 0LL, &Size);
  if ( v14 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x105,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)v14);
    if ( !v6 )
      return v10;
    goto LABEL_6;
  }
  v15 = operator new[]((unsigned int)Size);
  v16 = v15;
  if ( !v15 )
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8007000ELL);
LABEL_17:
    if ( v16 )
      operator delete(v16, v18);
    if ( v6 )
      operator delete(v6, (const struct std::nothrow_t *)0x3D8);
    return v17;
  }
  memset_0(v15, 0, (unsigned int)Size);
  Caps = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v13, v16, &Size);
  if ( Caps < 0 )
  {
    v20 = 274LL;
LABEL_24:
    v17 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v20,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)Caps);
    goto LABEL_17;
  }
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v16, &Capabilities);
  if ( Caps < 0 )
  {
    v20 = 280LL;
    goto LABEL_24;
  }
  v22 = HIDDeviceCollection::ConvertHIDTLCIdToInputType(
          v21,
          Capabilities.Usage,
          Capabilities.UsagePage,
          (enum InputType *)((char *)&Size + 4));
  v23 = v22;
  if ( v22 >= 0 )
  {
    v25 = Size;
    *((_QWORD *)v12 + 6) = v16;
    *((_DWORD *)v12 + 14) = v25;
    *v8 = v29;
    v8[1] = HIDWORD(Size);
    if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v28, v31) >= 0 )
    {
      *((_WORD *)v8 + 18) = v32;
      *((_WORD *)v8 + 19) = v33;
      *((_WORD *)v8 + 20) = v34;
      RawInputProvidersTelemetry::LogRawInputDeviceAttached(v8[1], *((_WORD *)v8 + 18), *((_WORD *)v8 + 19), v34);
    }
    *a3 = (struct DeviceInfo *)v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v22);
    if ( v16 )
      operator delete(v16, v24);
    if ( v6 )
      operator delete(v6, (const struct std::nothrow_t *)0x3D8);
    return v23;
  }
}
