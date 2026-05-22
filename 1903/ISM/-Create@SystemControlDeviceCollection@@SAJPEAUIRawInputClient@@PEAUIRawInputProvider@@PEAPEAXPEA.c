/*
 * XREFs of ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800A398C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020B84 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x1800993F0 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800A374C (--0SystemControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800A3B74 (-Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct SystemControlDeviceCollection **a4)
{
  SystemControlDeviceCollection *v8; // rax
  SystemControlDeviceCollection *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 || !a3 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = (SystemControlDeviceCollection *)RefCountedObject::operator new(0xB08uLL);
  if ( v8 )
    v9 = SystemControlDeviceCollection::SystemControlDeviceCollection(v8, a1, a2);
  else
    v9 = 0LL;
  v10 = (__int64)v9;
  if ( v9 )
  {
    v14 = SystemControlDeviceCollection::Initialize(v9, a3);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v10 = 0LL;
      *a4 = v9;
      v11 = 0;
      v9 = 0LL;
      goto LABEL_13;
    }
    v12 = (unsigned int)v14;
    v13 = 33LL;
  }
  else
  {
    v11 = -2147024882;
    v12 = 2147942414LL;
    v13 = 31LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
    (const char *)v12);
LABEL_13:
  if ( v9 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v15, v10);
  return v11;
}
