/*
 * XREFs of ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800AE544
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800AC0AC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??0LampArrayDevice@@AEAA@XZ @ 0x1800AE0E4 (--0LampArrayDevice@@AEAA@XZ.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800AE600 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 */

__int64 __fastcall LampArrayDevice::CreateAndInitialize(struct PnpDevice *a1, struct LampArrayDevice **a2)
{
  LampArrayDevice *v4; // rax
  LampArrayDevice *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (LampArrayDevice *)RefCountedObject::operator new(0xD0uLL);
  if ( v4 )
    v5 = LampArrayDevice::LampArrayDevice(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = LampArrayDevice::Initialize(v5, a1);
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
        (void *)0x58,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v7);
      RefCountedObject::Release(v5);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
