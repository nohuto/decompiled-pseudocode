/*
 * XREFs of ?CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ @ 0x1801A8FD8
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::CopyFrontToBackBuffer(CHwndRenderTarget *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  signed int v3; // eax
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 22);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 248LL))(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802E3D40, 1u, v3, 0xC89u, 0LL);
  }
  return v2;
}
