/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801BEB3C
 * Callers:
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801BEAB8 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801C32E4 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 * Callees:
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18000BD64 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x1801AE9DC (--4-$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CPolygon::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        char a11,
        _OWORD *a12,
        _QWORD *a13)
{
  bool v14; // cf
  unsigned int v18; // edi
  unsigned int v19; // r9d
  char *v20; // rax
  void (__fastcall ***v21)(_QWORD); // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // xmm0_4
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-20h]
  struct D2D_VECTOR_4F v30; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+60h] [rbp+20h] BYREF

  v14 = *(_DWORD *)(a1 + 24) < 3u;
  v31 = 0LL;
  if ( v14 )
  {
    v18 = -2147024809;
    v29 = 27;
LABEL_3:
    v19 = v18;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v19, v29, 0LL);
    goto LABEL_18;
  }
  v20 = (char *)DefaultHeap::AllocClear(0x110uLL);
  v21 = (void (__fastcall ***)(_QWORD))v20;
  if ( v20 )
  {
    *((_DWORD *)v20 + 2) = 0;
    *(_QWORD *)v20 = &CPolygon::`vftable';
    *((_QWORD *)v20 + 2) = v20 + 48;
    *((_QWORD *)v20 + 3) = v20 + 48;
    *((_DWORD *)v20 + 8) = 4;
    *(_QWORD *)(v20 + 36) = 4LL;
    *((_DWORD *)v20 + 52) = 0;
    *((_QWORD *)v20 + 32) = 0LL;
    ++dword_18033C88C;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !*Microsoft::WRL::ComPtr<CPolygon>::operator=(&v31, v21) )
  {
    v18 = -2147024882;
    v29 = 30;
    goto LABEL_3;
  }
  v22 = v31 + 16;
  *(_DWORD *)(v31 + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize(v22, 0x14u);
  v23 = DynArrayImpl<0>::AddMultipleAndSet(v31 + 16, 20, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
  v18 = v23;
  if ( v23 < 0 )
  {
    v19 = v23;
    v29 = 33;
    goto LABEL_17;
  }
  *(_QWORD *)(v31 + 216) = a2;
  v24 = v31;
  *(_OWORD *)(v31 + 144) = *(_OWORD *)a4;
  *(_OWORD *)(v24 + 160) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v24 + 176) = *(_OWORD *)(a4 + 32);
  v25 = a5;
  *(_OWORD *)(v24 + 192) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(v24 + 208) = *(_DWORD *)(a4 + 64);
  LODWORD(v24) = a6;
  *(_DWORD *)(v31 + 224) = v25;
  *(_DWORD *)(v31 + 264) = v24;
  *(_DWORD *)(v31 + 236) = a7;
  *(_DWORD *)(v31 + 228) = a8;
  *(_DWORD *)(v31 + 232) = a9;
  *(_BYTE *)(v31 + 240) = a10;
  *(_BYTE *)(v31 + 241) = a11;
  *(_QWORD *)(v31 + 248) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a12 )
    *(_OWORD *)(v31 + 128) = *a12;
  else
    *(__m128i *)(v31 + 128) = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                                                 &v30,
                                                                 *(struct D2D_VECTOR_4F **)(v31 + 16),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v31 + 16)
                                                                                              + 20LL),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v31 + 16)
                                                                                              + 40LL)));
  v26 = v31;
  v31 = 0LL;
  *a13 = v26;
LABEL_18:
  v27 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  }
  return v18;
}
