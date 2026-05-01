/*
 * XREFs of ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1803F2D88
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1803E9170 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x1803E9440 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1803F2E74 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180122E88 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

HFONT __fastcall JointDivider_LoadGlyphFont(enum DEVICE_SCALE_FACTOR a1)
{
  LOGFONTW lf; // [rsp+20h] [rbp-78h] BYREF

  if ( dword_1805C3BB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805C3BB8);
    if ( dword_1805C3BB8 == -1 )
    {
      dword_1805C3BBC = IsPPIEdition() ? 22 : 16;
      Init_thread_footer(&dword_1805C3BB8);
    }
  }
  memset_0(&lf, 0, sizeof(lf));
  StringCchCopyW(lf.lfFaceName, 0x20uLL, (size_t *)L"Segoe MDL2 Assets");
  lf.lfWeight = 350;
  lf.lfHeight = a1 * dword_1805C3BBC / -100;
  return CreateFontIndirectW(&lf);
}
