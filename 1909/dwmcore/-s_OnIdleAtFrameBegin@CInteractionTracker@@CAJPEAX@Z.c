/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z @ 0x1801DCDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(_QWORD *a1)
{
  bool v1; // zf
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[6] == 0LL;
  v4 = a1;
  if ( !v1 )
    CResource::InvalidateAnimationSources((CResource *)a1);
  *((_BYTE *)a1 + 532) &= ~0x80u;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v4);
  return 0LL;
}
