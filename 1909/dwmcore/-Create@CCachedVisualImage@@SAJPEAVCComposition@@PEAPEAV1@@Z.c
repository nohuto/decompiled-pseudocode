/*
 * XREFs of ?Create@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801C79B8
 * Callers:
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801FC900 (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800AD264 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImage@@@Z @ 0x1801C78F0 (--0-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImag.c)
 */

__int64 __fastcall CCachedVisualImage::Create(struct CComposition *a1, struct CCachedVisualImage **a2)
{
  unsigned int v3; // ebx
  CCachedVisualImage *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  CCachedVisualImage *v8; // rax
  __int64 v9; // rcx
  struct CCachedVisualImage *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x1A0uLL);
  if ( v5 )
    v8 = CCachedVisualImage::CCachedVisualImage(v5, a1, v6, v7);
  else
    v8 = 0LL;
  wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
    &v11,
    (__int64)v8);
  if ( v11 )
  {
    *a2 = v11;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x16u, 0LL);
  }
  return v3;
}
