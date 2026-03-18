/*
 * XREFs of ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1801FE400
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801A3438 (-clear@-$vector_facade@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FDD54 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@-$vector_fa.c)
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801FDFF0 (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetRealizationSize(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE *a3)
{
  float v4; // xmm1_4
  char v5; // di
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CCachedVisualImage *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *((_QWORD *)this + 10) = *((_QWORD *)a3 + 1);
  v5 = 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 20)) & _xmm) < 0.0000011920929 )
  {
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 21)) & _xmm);
    if ( v4 < 0.0000011920929 )
      v5 = 0;
  }
  if ( v5 == *((_BYTE *)this + 152) )
    goto LABEL_13;
  detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 12);
  if ( !v5 )
  {
LABEL_12:
    *((_BYTE *)this + 152) = v5;
LABEL_13:
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
    return 0LL;
  }
  v10 = 0LL;
  v6 = CVisualSurface::CreateCVI(this, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>>(
      (_QWORD *)this + 12,
      (__int64 *)&v10);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)v6);
  if ( v10 )
    CGdiSpriteBitmap::Release((struct CCachedVisualImage *)((char *)v10 + 16));
  return v7;
}
