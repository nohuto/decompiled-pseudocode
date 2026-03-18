/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180263220
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18008D750 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        CDxHandleStereoBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = CBitmapRealization::AddDirtyRegion(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x99u, 0LL);
  }
  else if ( *((_QWORD *)this + 36) )
  {
    (*(void (__fastcall **)(char *, const struct FastRegion::Internal::CRgnData **))(*((_QWORD *)this + 39) + 32LL))(
      (char *)this + 312,
      a2);
  }
  return v6;
}
