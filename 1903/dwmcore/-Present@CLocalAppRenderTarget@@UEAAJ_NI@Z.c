/*
 * XREFs of ?Present@CLocalAppRenderTarget@@UEAAJ_NI@Z @ 0x1802507D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLocalAppRenderTarget::Present(CLocalAppRenderTarget *this)
{
  unsigned int v1; // ebx
  signed int v2; // eax
  __int64 v3; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 136) )
  {
    *((_BYTE *)this + 136) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 176LL))(*((_QWORD *)this + 14));
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x70u, 0LL);
  }
  return v1;
}
