/*
 * XREFs of ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18001F044
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800206A4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18001EC18 (--0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSess.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F11C (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x1800991D0 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialRimDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct IMessageSession *a3,
        void **a4,
        struct SpatialRimDeviceCollection **a5)
{
  SpatialRimDeviceCollection *v9; // rbx
  SpatialRimDeviceCollection *v10; // rax
  SpatialRimDeviceCollection *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = 0LL;
  if ( !a5 )
  {
    v16 = 246LL;
LABEL_17:
    v14 = -2147024809;
    goto LABEL_18;
  }
  *a5 = 0LL;
  if ( !a1 || !a4 )
  {
    v16 = 248LL;
    goto LABEL_17;
  }
  v10 = (SpatialRimDeviceCollection *)RefCountedObject::operator new(0xB70uLL);
  if ( v10 )
    v11 = SpatialRimDeviceCollection::SpatialRimDeviceCollection(v10, a1, a2, a3);
  else
    v11 = 0LL;
  v9 = v11;
  if ( !v11 )
  {
    v14 = -2147024882;
    v16 = 251LL;
LABEL_18:
    v17 = v14;
    goto LABEL_19;
  }
  v12 = SpatialRimDeviceCollection::Initialize(v11, a4);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v9 = 0LL;
    *a5 = v11;
    v14 = 0;
    goto LABEL_9;
  }
  v17 = (unsigned int)v12;
  v16 = 253LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)v17);
LABEL_9:
  if ( v9 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v13, v9);
  return v14;
}
