/*
 * XREFs of ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x1800C3F80
 * Callers:
 *     ?Release@CRenderTargetImageSource@@W7EAAKXZ @ 0x1800F0F60 (-Release@CRenderTargetImageSource@@W7EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800F0F70 (-Release@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WGA@EAAKXZ @ 0x1800F0F80 (-Release@CRenderTargetImageSource@@WGA@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WJI@EAAKXZ @ 0x1800F0F90 (-Release@CRenderTargetImageSource@@WJI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Release(CRenderTargetImageSource *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 8);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    --*((_DWORD *)v1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
