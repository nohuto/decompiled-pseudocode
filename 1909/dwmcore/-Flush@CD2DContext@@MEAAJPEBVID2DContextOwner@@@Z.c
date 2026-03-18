/*
 * XREFs of ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x1800548C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::Flush(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // ecx

  v3 = 0;
  CD2DContext::FlushDrawList(this);
  if ( *((_BYTE *)this + 492) && *((_BYTE *)this + 493) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 29) + 336LL))(
           *((_QWORD *)this + 29),
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3F1u, 0LL);
    *((_BYTE *)this + 493) = 0;
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, v3, 0LL);
}
