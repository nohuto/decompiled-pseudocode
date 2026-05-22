/*
 * XREFs of ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800B3414
 * Callers:
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800AE750 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x1800298B0 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??0HidLampArrayDevice@@AEAA@XZ @ 0x1800B2EE4 (--0HidLampArrayDevice@@AEAA@XZ.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3E38 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::CreateAndInitialize(struct PnpDevice *a1, struct HidLampArrayDevice **a2)
{
  HidLampArrayDevice *v4; // rax
  HidLampArrayDevice *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (HidLampArrayDevice *)RefCountedObject::operator new(0x280uLL);
  if ( v4 )
    v5 = HidLampArrayDevice::HidLampArrayDevice(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = HidLampArrayDevice::Initialize(v5, a1);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)(unsigned int)v7);
      RefCountedObject::Release(v5);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
