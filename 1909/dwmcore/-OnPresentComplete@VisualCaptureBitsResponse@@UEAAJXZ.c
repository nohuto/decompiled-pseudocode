/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1801AA050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D2370 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800D246C (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800D2564 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(VisualCaptureBitsResponse *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int Bits; // eax
  __int64 v8; // rcx

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x2Cu, 0LL);
  }
  else
  {
    v5 = CaptureBitsResponse::MapSectionBitmap(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2Eu, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v4 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Bits, 0x33u, 0LL);
    }
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 48LL))(this, v4);
  return v4;
}
