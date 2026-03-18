/*
 * XREFs of ?IsLastPresentComposed@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x180166300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::IsLastPresentComposed(CHwFullScreenRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 32LL))((char *)this - 144) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 192LL))(*((_QWORD *)this + 4)) != 0;
  return v2;
}
