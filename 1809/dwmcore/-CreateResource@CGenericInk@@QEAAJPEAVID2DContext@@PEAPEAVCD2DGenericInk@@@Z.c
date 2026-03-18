/*
 * XREFs of ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180198D48
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180198EF8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18018EA70 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGenericInk::CreateResource(CGenericInk *this, struct ID2DContext *a2, struct CD2DGenericInk **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  struct CD2DGenericInk *v15; // rax
  CGdiSpriteBitmap *v17; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v17);
  v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, CGdiSpriteBitmap **))(*(_QWORD *)a2 + 192LL))(a2, &v17);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x128u);
  }
  else
  {
    v9 = *((_QWORD *)v17 + 13);
    if ( *((_DWORD *)this + 40)
      && (v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 40LL))(
                  *((_QWORD *)v17 + 13),
                  *((_QWORD *)this + 17)),
          v8 = v10,
          v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x12Du);
    }
    else
    {
      v12 = *((_DWORD *)this + 48);
      if ( v12
        && (v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v9 + 48LL))(
                    v9,
                    0LL,
                    *((_QWORD *)this + 21),
                    v12 / *((_DWORD *)this + 50),
                    *((_DWORD *)this + 51),
                    *((_DWORD *)this + 50),
                    0LL),
            v8 = v13,
            v13 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x13Au);
      }
      else
      {
        v15 = v17;
        v17 = 0LL;
        *a3 = v15;
        (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
      }
    }
  }
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v17);
  return v8;
}
