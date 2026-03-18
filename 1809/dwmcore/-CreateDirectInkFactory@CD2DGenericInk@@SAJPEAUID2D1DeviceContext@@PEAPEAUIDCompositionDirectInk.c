/*
 * XREFs of ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180206294
 * Callers:
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180200138 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     GetLPCreateDCompositionDirectInkFactoryPartner @ 0x180206308 (GetLPCreateDCompositionDirectInkFactoryPartner.c)
 */

__int64 __fastcall CD2DGenericInk::CreateDirectInkFactory(
        struct ID2D1DeviceContext *a1,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int LPCreateDCompositionDirectInkFactoryPartner; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 (__fastcall *v10)(struct ID2D1DeviceContext *, struct IDCompositionDirectInkFactoryPartner **); // [rsp+50h] [rbp+18h] BYREF

  LPCreateDCompositionDirectInkFactoryPartner = GetLPCreateDCompositionDirectInkFactoryPartner(&v10);
  v6 = LPCreateDCompositionDirectInkFactoryPartner;
  if ( LPCreateDCompositionDirectInkFactoryPartner < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, LPCreateDCompositionDirectInkFactoryPartner, 0x2Eu);
  }
  else
  {
    v7 = v10(a1, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2Fu);
  }
  return v6;
}
