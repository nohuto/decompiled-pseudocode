/*
 * XREFs of ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18036D8E0
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180363BD0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x180363EA0 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18036D9CC (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180084158 (_Init_thread_header.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800E1604 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

HFONT __fastcall JointDivider_LoadGlyphFont(enum DEVICE_SCALE_FACTOR a1)
{
  LOGFONTW lf; // [rsp+20h] [rbp-78h] BYREF

  if ( dword_1805111B4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805111B4);
    if ( dword_1805111B4 == -1 )
    {
      dword_1805111B8 = IsPPIEdition() ? 22 : 16;
      Init_thread_footer(&dword_1805111B4);
    }
  }
  memset_0(&lf, 0, sizeof(lf));
  StringCchCopyW(lf.lfFaceName, 0x20uLL, (size_t *)L"Segoe MDL2 Assets");
  lf.lfWeight = 350;
  lf.lfHeight = a1 * dword_1805111B8 / -100;
  return CreateFontIndirectW(&lf);
}
