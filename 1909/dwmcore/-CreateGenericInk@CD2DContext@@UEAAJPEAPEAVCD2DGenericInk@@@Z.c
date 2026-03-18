/*
 * XREFs of ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18015E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180160C90 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x180168E28 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 */

__int64 __fastcall CD2DContext::CreateGenericInk(struct CD2DResourceManager **this, struct CD2DGenericInk **a2)
{
  signed int inited; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct CD2DResourceManager *v7; // rdi
  __int64 (__fastcall *v8)(struct CD2DResourceManager *, struct IDCompositionDirectInkWetStrokePartner **); // rbx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  struct IDCompositionDirectInkWetStrokePartner *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  inited = CD2DContext::LazyInitDirectInkFactory((CD2DContext *)this);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, inited, 0x1DEu, 0LL);
  }
  else
  {
    v7 = this[45];
    v8 = *(__int64 (__fastcall **)(struct CD2DResourceManager *, struct IDCompositionDirectInkWetStrokePartner **))(*(_QWORD *)v7 + 24LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v14);
    v9 = v8(v7, &v14);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1DFu, 0LL);
    }
    else
    {
      v11 = CD2DGenericInk::Create(this[25], v14, a2);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1E0u, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v14);
  return v6;
}
