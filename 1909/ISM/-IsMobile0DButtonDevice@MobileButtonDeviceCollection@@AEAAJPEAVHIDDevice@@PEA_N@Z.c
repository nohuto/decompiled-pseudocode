/*
 * XREFs of ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800A14A0
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800A16F0 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800A5BFC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::IsMobile0DButtonDevice(
        MobileButtonDeviceCollection *this,
        struct HIDDevice *a2,
        bool *a3)
{
  int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // r14d
  int HIDCapabilities; // eax
  unsigned int v7; // ebx
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // rbx
  struct _HIDP_CAPS *v10; // r12
  USAGE *v11; // r15
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  __int64 v13; // r13
  char v14; // si
  USHORT ButtonCapsLength; // [rsp+40h] [rbp-40h] BYREF
  struct _HIDP_CAPS *v16; // [rsp+48h] [rbp-38h] BYREF
  int v17; // [rsp+50h] [rbp-30h]
  PHIDP_PREPARSED_DATA v18; // [rsp+58h] [rbp-28h]
  bool *v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v19 = a3;
  v4 = 0;
  v20 = 0LL;
  v18 = (PHIDP_PREPARSED_DATA)*((_QWORD *)a2 + 6);
  LOBYTE(v3) = 0;
  v16 = 0LL;
  v17 = v3;
  ButtonCapsLength = 0;
  v5 = 0;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v16);
  v7 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    ButtonCapsLength = v16->NumberInputButtonCaps;
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](saturated_mul(ButtonCapsLength, 0x48uLL));
    if ( ButtonCaps )
    {
      v10 = v16;
      v11 = (USAGE *)&v20;
      PreparsedData = v18;
      LODWORD(v20) = 3866665;
      WORD2(v20) = 60;
      v13 = 3LL;
      do
      {
        ButtonCapsLength = v10->NumberInputButtonCaps;
        memset_0(ButtonCaps, 0, 72LL * ButtonCapsLength);
        if ( HidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v11, ButtonCaps, &ButtonCapsLength, PreparsedData) >= 0 )
          ++v5;
        ++v11;
        --v13;
      }
      while ( v13 );
      v14 = v17;
      if ( (unsigned __int16)(v16->NumberInputButtonCaps - 1) <= 3u && v5 >= 2 )
        v14 = 1;
      if ( v19 )
        *v19 = v14;
      operator delete(ButtonCaps, (const struct std::nothrow_t *)3);
    }
    else
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
        (const char *)0x8007000ELL);
    }
    return v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v7;
  }
}
