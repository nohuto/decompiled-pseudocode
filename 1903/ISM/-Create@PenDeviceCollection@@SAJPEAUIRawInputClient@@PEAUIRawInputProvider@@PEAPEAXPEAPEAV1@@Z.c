/*
 * XREFs of ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800204A8
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020B84 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18001681C (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800205A4 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x1800993F0 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct PenDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rbx
  HIDDeviceCollection *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  HIDDeviceCollection *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HIDDeviceCollection *v19; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v9 = (HIDDeviceCollection *)RefCountedObject::operator new(0xAC8uLL);
    v12 = v9;
    v19 = v9;
    if ( v9 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v9, a1);
      *(_QWORD *)v12 = &PenDeviceCollection::`vftable';
      *((_QWORD *)v12 + 3) = a2;
    }
    else
    {
      v12 = 0LL;
    }
    v8 = v12;
    if ( v12 )
    {
      LODWORD(v19) = 852000;
      v13 = HIDDeviceCollection::Initialize(v12, v10, (struct _RIM_USAGE_ANDPAGE *const)&v19, v11, 1u, a3);
      v15 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
          (const char *)(unsigned int)v13);
      else
        v15 = 0;
      if ( v15 >= 0 )
      {
        v8 = 0LL;
        *a4 = v12;
        v15 = 0;
        goto LABEL_11;
      }
      v17 = 33LL;
    }
    else
    {
      v15 = -2147024882;
      v17 = 31LL;
    }
  }
  else
  {
    v15 = -2147024809;
    v17 = 27LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
    (const char *)(unsigned int)v15);
LABEL_11:
  if ( v8 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v14, v8);
  return (unsigned int)v15;
}
