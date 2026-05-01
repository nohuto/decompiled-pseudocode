/*
 * XREFs of ??$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801A23E8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A31E0 (-CreateInstance@-$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A1B08 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_1801A1B08.c)
 *     ??0PrivilegedOperationsService@@QEAA@XZ @ 0x1801A2BF0 (--0PrivilegedOperationsService@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A4C00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801A4C00.c)
 *     ?RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ @ 0x1801A4EEC (-RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PrivilegedOperationsService,IUnknown,>(_QWORD *a1)
{
  PrivilegedOperationsService *v2; // rax
  int v3; // ebx
  PrivilegedOperationsService *v4; // rdi

  *a1 = 0LL;
  v2 = (PrivilegedOperationsService *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PrivilegedOperationsService::PrivilegedOperationsService(v2);
    v3 = PrivilegedOperationsService::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>>(
             (__int64)v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
