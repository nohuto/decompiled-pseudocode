/*
 * XREFs of ?UseForAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAA_NPEAUIDXGIResource@@@Z @ 0x1801667F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::UseForAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2)
{
  char v4; // bl

  ReleaseInterface<IBitmapLock>((__int64 *)this + 46);
  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 32LL))((char *)this - 144) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD, struct IDXGIResource *))(**((_QWORD **)this + 4) + 152LL))(
             *((_QWORD *)this + 4),
             a2) != 0;
  return v4;
}
