/*
 * XREFs of ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x180179618
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801BC5DC (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 */

char __fastcall CDirectFlipInfo::UpdateHDRMetaData(CDirectFlipInfo *this, const void **a2)
{
  char v3; // bl
  CCompositionSurfaceInfo *v5; // rcx
  int HDR10MetaData; // edi
  __int64 v7; // xmm1_8
  int v8; // eax
  struct DXGI_HDR_METADATA_HDR10 Buf1; // [rsp+20h] [rbp-48h] BYREF

  *(_QWORD *)Buf1.RedPrimary = 0LL;
  v3 = 0;
  *a2 = 0LL;
  v5 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  memset(Buf1.BluePrimary, 0, 20);
  HDR10MetaData = CCompositionSurfaceInfo::GetHDR10MetaData(v5, &Buf1);
  if ( HDR10MetaData != *((_DWORD *)this + 26) || HDR10MetaData == 1 && memcmp_0(&Buf1, (char *)this + 108, 0x1CuLL) )
  {
    v7 = *(_QWORD *)&Buf1.MaxMasteringLuminance;
    v8 = *(_DWORD *)&Buf1.MaxContentLightLevel;
    *((_DWORD *)this + 26) = HDR10MetaData;
    *(_OWORD *)((char *)this + 108) = *(_OWORD *)Buf1.RedPrimary;
    *(_QWORD *)((char *)this + 124) = v7;
    *((_DWORD *)this + 33) = v8;
    if ( HDR10MetaData == 1 )
      *a2 = (char *)this + 108;
    return 1;
  }
  return v3;
}
