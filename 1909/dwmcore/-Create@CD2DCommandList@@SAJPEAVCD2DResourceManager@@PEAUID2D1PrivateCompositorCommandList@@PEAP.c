/*
 * XREFs of ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18016991C
 * Callers:
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18015EB40 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004F244 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18016987C (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 */

__int64 __fastcall CD2DCommandList::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorCommandList *a2,
        struct CD2DCommandList **a3)
{
  CD2DResource *v6; // rax
  __int64 v7; // rcx
  struct CD2DCommandList *v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct ID2D1PrivateCompositorCommandList *v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = (CD2DResource *)operator new(0x80uLL);
  v8 = v6;
  if ( v6 )
  {
    CD2DResource::CD2DResource(v6, a1, 0);
    *((_QWORD *)v8 + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 14) = 0LL;
    *((_DWORD *)v8 + 30) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v8 + 8LL))(v8);
    v14 = 0LL;
    v13 = a2;
    if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                         (__int64)v8 + 104,
                         &v14,
                         &v13) )
    {
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = 0;
      *a3 = v8;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x21u, 0LL);
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0x16u, 0LL);
      (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x13u, 0LL);
  }
  return v9;
}
