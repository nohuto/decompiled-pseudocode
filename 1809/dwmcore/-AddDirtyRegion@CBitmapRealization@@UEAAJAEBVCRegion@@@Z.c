/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800C3220
 * Callers:
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800C2E20 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180228020 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::AddDirtyRegion(
        CBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  unsigned int v2; // edi
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax

  v2 = 0;
  if ( *((_BYTE *)this + 184)
    || (v5 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)this + 24, a2), v2 = v5, v5 >= 0) )
  {
    v7 = *((_QWORD *)this + 33);
    if ( v7 )
      *(_BYTE *)(v7 + 205) = 0;
    (*(void (__fastcall **)(char *, const struct FastRegion::Internal::CRgnData **))(*((_QWORD *)this - 16) + 32LL))(
      (char *)this - 128,
      a2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x54u);
    (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 128LL))(this);
  }
  return v2;
}
