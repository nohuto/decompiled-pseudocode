/*
 * XREFs of ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1802265C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::AddDirtyRegion(
        CColorKeyBitmapRealization *this,
        const struct CRegion *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 24LL) + 120LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x42u);
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5Eu);
  }
  (*(void (__fastcall **)(char *, const struct CRegion *))(*((_QWORD *)this - 16) + 32LL))((char *)this - 128, a2);
  return v6;
}
