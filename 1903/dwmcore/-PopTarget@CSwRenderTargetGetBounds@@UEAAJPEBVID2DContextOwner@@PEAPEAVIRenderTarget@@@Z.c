/*
 * XREFs of ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800C4120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::PopTarget(
        CSwRenderTargetGetBounds *this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  int v4; // eax
  char *v7; // rbx

  v4 = *((_DWORD *)this + 6) - 1;
  *((_DWORD *)this + 6) = v4;
  if ( a3 )
  {
    if ( v4 )
    {
      v7 = (char *)this - 24;
      CMILCOMBase::InternalAddRef((CSwRenderTargetGetBounds *)((char *)this - 24));
      *a3 = (struct IRenderTarget *)(((unsigned __int64)this - 8) & -(__int64)(v7 != 0LL));
    }
    else
    {
      *a3 = 0LL;
    }
  }
  return 0LL;
}
