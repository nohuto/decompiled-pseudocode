/*
 * XREFs of ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18019AECC
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18019B0E4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18019B53C (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::CreateResource(CInk *this, struct ID2DContext *a2, struct CD2DInk **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(struct ID2DContext *, char *, char *, CD2DInk **); // rax
  struct ID2D1Ink *v7; // rsi
  struct ID2D1InkStyle *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int ID2D1InkAndInkStyle; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  struct CD2DInk *v16; // rax
  CD2DInk *v18; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1InkStyle *v19; // [rsp+68h] [rbp+38h] BYREF
  struct ID2D1Ink *v20; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(_QWORD *)a2;
  v18 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct ID2DContext *, char *, char *, CD2DInk **))(v3 + 184);
  v7 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v9 = v6(a2, (char *)this + 168, (char *)this + 180, &v18);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x139u);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v18, &v20, &v19);
    v11 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ID2D1InkAndInkStyle, 0x13Bu);
      v7 = v20;
    }
    else
    {
      v7 = v20;
      v14 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, _QWORD))(*(_QWORD *)v20 + 48LL))(
              v20,
              *((_QWORD *)this + 17),
              *((unsigned int *)this + 40));
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x13Cu);
      }
      else
      {
        v16 = v18;
        v18 = 0LL;
        *a3 = v16;
      }
    }
    v8 = v19;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v18 )
    (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v18 + 16LL))(v18);
  return v11;
}
