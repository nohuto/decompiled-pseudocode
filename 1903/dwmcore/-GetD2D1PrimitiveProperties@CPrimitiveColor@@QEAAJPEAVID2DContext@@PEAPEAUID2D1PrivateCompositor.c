/*
 * XREFs of ?GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801EF75C
 * Callers:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801C59E8 (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801EF508 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 */

__int64 __fastcall CPrimitiveColor::GetD2D1PrimitiveProperties(
        CPrimitiveColor *this,
        struct ID2DContext *a2,
        struct ID2D1PrivateCompositorPrimitiveProperties **a3)
{
  signed int PrimitiveProperties; // eax
  __int64 v5; // rcx
  struct CD2DPrimitiveProperties *v6; // rbx
  unsigned int v7; // edi
  struct ID2D1PrivateCompositorPrimitiveProperties *v8; // rcx
  struct ID2D1PrivateCompositorPrimitiveProperties **v10; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  PrimitiveProperties = CPrimitiveColor::FindOrCreatePrimitiveProperties(
                          this,
                          (unsigned __int64)a2,
                          (struct CD2DPrimitiveProperties **)&v10);
  v6 = (struct CD2DPrimitiveProperties *)v10;
  v7 = PrimitiveProperties;
  if ( PrimitiveProperties < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, PrimitiveProperties, 0xB5u, 0LL);
  }
  else
  {
    v8 = v10[13];
    *a3 = v8;
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
