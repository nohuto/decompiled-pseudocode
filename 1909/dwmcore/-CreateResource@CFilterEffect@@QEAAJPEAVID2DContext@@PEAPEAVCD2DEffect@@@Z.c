/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x1801CAE34
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x1801CAF50 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct ID2DContext *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(struct ID2DContext *, __int64, struct CD2DEffect **); // rbx
  __int64 v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct CD2DEffect *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a2;
  v12 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct ID2DContext *, __int64, struct CD2DEffect **))(v3 + 256);
  v7 = (*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 208LL))(this);
  v8 = v6(a2, v7, &v12);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x311u, 0LL);
    if ( v12 )
      (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    *a3 = v12;
  }
  return v10;
}
