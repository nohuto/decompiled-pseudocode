/*
 * XREFs of ?Release@CSwRenderTargetGetBounds@@UEAAKXZ @ 0x180065190
 * Callers:
 *     ?Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ @ 0x1800F0D70 (-Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ @ 0x1800F0D80 (-Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Release(CSwRenderTargetGetBounds *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CSwRenderTargetGetBounds *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
