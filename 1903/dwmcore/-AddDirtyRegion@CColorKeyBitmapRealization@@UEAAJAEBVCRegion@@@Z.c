/*
 * XREFs of ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180256850
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::AddDirtyRegion(
        CColorKeyBitmapRealization *this,
        const struct CRegion *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 24LL) + 120LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x40u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Cu, 0LL);
  }
  (*(void (__fastcall **)(char *, const struct CRegion *))(*((_QWORD *)this - 16) + 32LL))((char *)this - 128, a2);
  return v6;
}
