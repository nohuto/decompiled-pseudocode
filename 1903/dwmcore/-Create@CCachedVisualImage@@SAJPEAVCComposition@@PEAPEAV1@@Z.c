/*
 * XREFs of ?Create@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801C9158
 * Callers:
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801FDFF0 (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 * Callees:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18002B5E4 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImage@@@Z @ 0x1801C9090 (--0-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImag.c)
 */

__int64 __fastcall CCachedVisualImage::Create(struct CComposition *a1, struct CCachedVisualImage **a2)
{
  unsigned int v3; // ebx
  CCachedVisualImage *v5; // rax
  CCachedVisualImage *v6; // rax
  __int64 v7; // rcx
  struct CCachedVisualImage *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x1A0uLL);
  if ( v5 )
    v6 = CCachedVisualImage::CCachedVisualImage(v5, a1);
  else
    v6 = 0LL;
  wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
    &v9,
    (__int64)v6);
  if ( v9 )
  {
    *a2 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x16u, 0LL);
  }
  return v3;
}
