/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A5670
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180099610 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009E100 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A16F0 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A2C60 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A3A10 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A4320 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A49F0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A4E30 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x180084A3C (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A464 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x1800A529C (-ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800A54A0 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  void *v6; // rbx
  int *v7; // rsi
  void *v8; // r14
  unsigned int Device; // edi
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  struct RIMDevice *v13; // rdi
  _DWORD *v14; // r15
  int v15; // eax
  void *v16; // rax
  void *v17; // rdi
  NTSTATUS Caps; // eax
  __int64 v19; // rdx
  unsigned int v20; // esi
  const struct std::nothrow_t *v21; // rdx
  HIDDeviceCollection *v22; // rcx
  int v23; // eax
  unsigned int v24; // r15d
  const struct std::nothrow_t *v25; // rdx
  int v26; // eax
  struct RIMDevice *v27; // rcx
  size_t Size; // [rsp+38h] [rbp-89h] BYREF
  int v29; // [rsp+40h] [rbp-81h]
  struct RIMDevice *v30; // [rsp+48h] [rbp-79h] BYREF
  unsigned int *v31; // [rsp+50h] [rbp-71h] BYREF
  _DWORD *v32; // [rsp+58h] [rbp-69h]
  char v33[8]; // [rsp+60h] [rbp-61h] BYREF
  __int16 v34; // [rsp+68h] [rbp-59h]
  __int16 v35; // [rsp+6Ah] [rbp-57h]
  __int16 v36; // [rsp+6Ch] [rbp-55h]
  __int64 v37; // [rsp+88h] [rbp-39h]
  _HIDP_CAPS Capabilities; // [rsp+98h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v37 = -2LL;
  v29 = a2;
  Size = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  memset_0(v33, 0, 0x28uLL);
  if ( !a3 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      211LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v7 = (int *)*a3;
  if ( *a3 )
  {
    v8 = 0LL;
  }
  else
  {
    v11 = operator new(0x620uLL);
    v32 = v11;
    memset_0(v11, 0, 0x620uLL);
    v11[2] = 1568;
    std::unique_ptr<LegacyDeviceInfo>::reset((void **)&v31, v11);
    v6 = v31;
    v7 = (int *)v31;
    v8 = v31;
    if ( !v31 )
    {
      Device = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
        (const char *)0x8007000ELL);
      return Device;
    }
  }
  v30 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v30, 0LL);
  if ( (Device & 0x80000000) != 0 )
  {
    v10 = 242LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)Device);
    goto LABEL_8;
  }
  v13 = v30;
  if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 96LL))(
          this,
          v30) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    if ( v8 )
      operator delete(v6, (const struct std::nothrow_t *)0x620);
    return 2147549183LL;
  }
  v14 = (_DWORD *)*((_QWORD *)v13 + 2);
  v32 = v14;
  v15 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v14, 0LL, &Size);
  if ( v15 < 0 )
  {
    Device = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x105,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
               (const char *)(unsigned int)v15);
LABEL_8:
    if ( v8 )
      operator delete(v6, (const struct std::nothrow_t *)0x620);
    return Device;
  }
  v16 = operator new[]((unsigned int)Size);
  v17 = v16;
  if ( !v16 )
  {
    Device = -2147024882;
    v10 = 266LL;
    goto LABEL_7;
  }
  memset_0(v16, 0, (unsigned int)Size);
  Caps = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v14, v17, &Size);
  if ( Caps < 0 )
  {
    v19 = 274LL;
LABEL_23:
    v20 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v19,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)Caps);
    operator delete(v17, v21);
    if ( v8 )
      operator delete(v6, (const struct std::nothrow_t *)0x620);
    return v20;
  }
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v17, &Capabilities);
  if ( Caps < 0 )
  {
    v19 = 280LL;
    goto LABEL_23;
  }
  v23 = HIDDeviceCollection::ConvertHIDTLCIdToInputType(
          v22,
          Capabilities.Usage,
          Capabilities.UsagePage,
          (enum InputType *)((char *)&Size + 4));
  v24 = v23;
  if ( v23 >= 0 )
  {
    v26 = Size;
    v27 = v30;
    *((_QWORD *)v30 + 6) = v17;
    *((_DWORD *)v27 + 14) = v26;
    *v7 = v29;
    v7[1] = HIDWORD(Size);
    if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v32, v33) >= 0 )
    {
      *((_WORD *)v7 + 22) = v34;
      *((_WORD *)v7 + 23) = v35;
      *((_WORD *)v7 + 24) = v36;
      RawInputProvidersTelemetry::LogRawInputDeviceAttached(
        (unsigned int)v7[1],
        *((_WORD *)v7 + 22),
        *((_WORD *)v7 + 23),
        v36);
    }
    *a3 = (struct DeviceInfo *)v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v23);
    operator delete(v17, v25);
    if ( v8 )
      operator delete(v6, (const struct std::nothrow_t *)0x620);
    return v24;
  }
}
