/*
 * XREFs of ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801C59E8
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801C5C64 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801EF75C (-GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositor.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildD2DColorPropertiesList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        unsigned int a4,
        struct ID2D1PrivateCompositorPrimitiveProperties **a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // esi
  struct ID2D1PrivateCompositorPrimitiveProperties **v10; // r14
  __int64 v11; // rdi
  signed int D2D1PrimitiveProperties; // eax
  __int64 v13; // rcx
  struct ID2D1PrivateCompositorPrimitiveProperties *v14; // rcx
  struct ID2D1PrivateCompositorPrimitiveProperties *v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0;
  v16 = 0LL;
  if ( a4 )
  {
    v10 = a5;
    v11 = 0LL;
    while ( 1 )
    {
      D2D1PrimitiveProperties = CPrimitiveColor::GetD2D1PrimitiveProperties(
                                  (CPrimitiveColor *)((*(_QWORD *)(v11 * 8 + *((_QWORD *)this + 29)) - 8LL) & -(__int64)(*(_QWORD *)(v11 * 8 + *((_QWORD *)this + 29)) != 0LL)),
                                  a3,
                                  &v16);
      v5 = D2D1PrimitiveProperties;
      if ( D2D1PrimitiveProperties < 0 )
        break;
      v14 = v16;
      ++v6;
      v16 = 0LL;
      v10[v11++] = v14;
      if ( v6 >= a4 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D2D1PrimitiveProperties, 0x445u, 0LL);
  }
LABEL_7:
  ReleaseInterface<IBitmapLock>((__int64 *)&v16);
  return v5;
}
