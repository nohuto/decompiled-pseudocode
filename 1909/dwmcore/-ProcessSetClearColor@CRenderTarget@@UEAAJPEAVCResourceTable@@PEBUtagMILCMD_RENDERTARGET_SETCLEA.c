/*
 * XREFs of ?ProcessSetClearColor@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETCLEARCOLOR@@@Z @ 0x180194380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::ProcessSetClearColor(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  bool v3; // zf

  if ( *((float *)this + 36) != *((float *)a3 + 2)
    || *((float *)this + 37) != *((float *)a3 + 3)
    || *((float *)this + 38) != *((float *)a3 + 4)
    || *((float *)this + 39) != *((float *)a3 + 5) )
  {
    v3 = *((_BYTE *)this + 160) == 0;
    *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 8);
    if ( !v3 )
      *((_BYTE *)this + 161) = 1;
  }
  return 0LL;
}
