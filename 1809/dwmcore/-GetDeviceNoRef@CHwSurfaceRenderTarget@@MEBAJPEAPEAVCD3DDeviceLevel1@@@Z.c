/*
 * XREFs of ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800656E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetDeviceNoRef(CHwSurfaceRenderTarget *this, struct CD3DDeviceLevel1 **a2)
{
  unsigned int v4; // ebx

  *a2 = 0LL;
  v4 = -2003304307;
  if ( (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
  {
    v4 = 0;
    *a2 = *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 25) + 16LL) + 80LL);
  }
  return v4;
}
