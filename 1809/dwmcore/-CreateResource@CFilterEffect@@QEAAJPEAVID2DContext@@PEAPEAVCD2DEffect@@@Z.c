/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18019730C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180197420 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct ID2DContext *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct CD2DEffect *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v12 = 0LL;
  v6 = *(_QWORD *)a2;
  v7 = (*(__int64 (__fastcall **)(CFilterEffect *))(v3 + 168))(this);
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, struct CD2DEffect **))(v6 + 256))(a2, v7, &v12);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x313u);
    if ( v12 )
      (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    *a3 = v12;
  }
  return v10;
}
