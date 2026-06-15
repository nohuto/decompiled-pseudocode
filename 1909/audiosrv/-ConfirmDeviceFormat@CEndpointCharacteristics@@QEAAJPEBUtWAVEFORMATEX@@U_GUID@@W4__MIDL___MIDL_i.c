/*
 * XREFs of ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800078C8
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005CC8 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006738 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011A044 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180007A84 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180007AA4 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::ConfirmDeviceFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edi
  GUID *v13; // rax
  GUID *v14; // rbx
  unsigned int CanRenderFormat; // ebx
  int v16; // edx
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  int v19[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h]
  struct _GUID v21; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v20 = -2LL;
  if ( a4 == eKeywordDetectorConnector || *((_DWORD *)this + 8) || *((_BYTE *)this + 8590) )
    goto LABEL_10;
  v9 = *((_QWORD *)this + 2);
  v18 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 24LL))(
          v9,
          &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
          23LL,
          0LL,
          &v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F7D,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
LABEL_20:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    return v11;
  }
  v12 = a2->cbSize + 82;
  v13 = (GUID *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  *(_QWORD *)&v21.Data1 = v13;
  if ( !v13 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F89,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_18;
  }
  memset_0(v13, 0, v12);
  v14->Data1 = v12;
  v14[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
  v14[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  if ( a2->wFormatTag == 0xFFFE )
  {
    v14[2] = *(GUID *)((char *)&a2[1].nSamplesPerSec + 2);
  }
  else
  {
    v14[2] = GUID_00000000_0000_0010_8000_00aa00389b71;
    v14[2].Data1 = a2->wFormatTag;
  }
  memcpy_0(&v14[4], a2, a2->cbSize + 18LL);
  *(_QWORD *)v19 = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, int *))(*(_QWORD *)v18 + 24LL))(
         v18,
         v14,
         v14->Data1,
         0LL,
         v19) )
  {
    v11 = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA1,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
LABEL_18:
    if ( v14 )
      operator delete(v14, (const struct std::nothrow_t *)0x52);
    goto LABEL_20;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
  operator delete(v14, (const struct std::nothrow_t *)0x52);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
LABEL_10:
  v21 = *a3;
  CanRenderFormat = CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(this, a2, &v21, a4, a5);
  if ( AEError::DeviceInUse((AEError *)CanRenderFormat, v16) )
    CanRenderFormat = 0;
  if ( (CanRenderFormat & 0x80000000) == 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FAE,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)CanRenderFormat);
  return CanRenderFormat;
}
