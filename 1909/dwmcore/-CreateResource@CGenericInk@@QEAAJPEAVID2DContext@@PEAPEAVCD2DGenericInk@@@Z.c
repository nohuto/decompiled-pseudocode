/*
 * XREFs of ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180213648
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180213C38 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x180169060 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGenericInk::CreateResource(CGenericInk *this, struct ID2DContext *a2, struct CD2DGenericInk **a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v7)(struct ID2DContext *, CGdiSpriteBitmap **); // rbx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  signed int v15; // eax
  __int64 v16; // rcx
  struct CD2DGenericInk *v17; // rax
  CGdiSpriteBitmap *v19; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)a2;
  v19 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct ID2DContext *, CGdiSpriteBitmap **))(v4 + 192);
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v19);
  v8 = v7(a2, &v19);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1A3u, 0LL);
  }
  else
  {
    v11 = *((_QWORD *)v19 + 13);
    if ( *((_DWORD *)this + 42)
      && (v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 40LL))(
                  *((_QWORD *)v19 + 13),
                  *((_QWORD *)this + 18)),
          v10 = v12,
          v12 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1A8u, 0LL);
    }
    else
    {
      v14 = *((_DWORD *)this + 50);
      if ( v14
        && (v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v11 + 48LL))(
                    v11,
                    0LL,
                    *((_QWORD *)this + 22),
                    v14 / *((_DWORD *)this + 52),
                    *((_DWORD *)this + 53),
                    *((_DWORD *)this + 52),
                    0LL),
            v10 = v15,
            v15 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1B5u, 0LL);
      }
      else
      {
        v17 = v19;
        v19 = 0LL;
        *a3 = v17;
        (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
      }
    }
  }
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v19);
  return v10;
}
