/*
 * XREFs of ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x180065CC8
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180065250 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800698B8 (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::IsMobile0DButtonDevice(
        MobileButtonDeviceCollection *this,
        struct HIDDevice *a2,
        bool *a3)
{
  int v3; // esi
  unsigned int v4; // edi
  struct _HIDP_CAPS *v5; // r14
  unsigned int v6; // r15d
  int HIDCapabilities; // eax
  int v8; // ebx
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // rbx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  USAGE *v12; // r12
  __int64 v13; // r13
  char v14; // si
  USHORT ButtonCapsLength[2]; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+44h] [rbp-2Ch]
  struct _HIDP_CAPS *v17; // [rsp+48h] [rbp-28h] BYREF
  PHIDP_PREPARSED_DATA v18; // [rsp+50h] [rbp-20h]
  bool *v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v4 = 0;
  v19 = a3;
  v17 = 0LL;
  v20 = 0LL;
  v5 = (struct _HIDP_CAPS *)((char *)a2 + 60);
  LOBYTE(v3) = 0;
  v18 = (PHIDP_PREPARSED_DATA)*((_QWORD *)a2 + 6);
  v6 = 0;
  v16 = v3;
  ButtonCapsLength[0] = 0;
  if ( *((_WORD *)a2 + 30) )
  {
    v8 = 0;
  }
  else
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v17);
    v5 = v17;
    v8 = HIDCapabilities;
  }
  if ( v8 >= 0 )
  {
    ButtonCapsLength[0] = v5->NumberInputButtonCaps;
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](saturated_mul(ButtonCapsLength[0], 0x48uLL));
    if ( ButtonCaps )
    {
      PreparsedData = v18;
      v12 = (USAGE *)&v20;
      LODWORD(v20) = 3866665;
      WORD2(v20) = 60;
      v13 = 3LL;
      do
      {
        ButtonCapsLength[0] = v5->NumberInputButtonCaps;
        memset_0(ButtonCaps, 0, 72LL * ButtonCapsLength[0]);
        if ( HidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v12, ButtonCaps, ButtonCapsLength, PreparsedData) >= 0 )
          ++v6;
        ++v12;
        --v13;
      }
      while ( v13 );
      v14 = v16;
      if ( (unsigned __int16)(v5->NumberInputButtonCaps - 1) <= 3u && v6 >= 2 )
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
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
}
