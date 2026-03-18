/*
 * XREFs of ?SetPresentParameters@CHwFullScreenRenderTarget@@UEAAJ_NI00@Z @ 0x180167E80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetPresentParameters(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  signed int v3; // eax
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 120LL))(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1B4u, 0LL);
  }
  return v2;
}
