/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801BF434
 * Callers:
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1801B6B48 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801BF3B0 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x1801BE340 (--4-$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801BE3E8 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
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
  unsigned int v17; // edi
  int v18; // r9d
  char *v19; // rax
  void (__fastcall ***v20)(_QWORD); // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // xmm0_4
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-20h]
  struct D2D_VECTOR_4F v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 v30; // [rsp+60h] [rbp+20h] BYREF

  v30 = 0LL;
  if ( *(_DWORD *)(a1 + 24) < 3u )
  {
    v17 = -2147024809;
    v28 = 29;
LABEL_3:
    v18 = v17;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v18, v28);
    goto LABEL_18;
  }
  v19 = (char *)WPF::ProcessHeapImpl::AllocClear(0x110uLL);
  v20 = (void (__fastcall ***)(_QWORD))v19;
  if ( v19 )
  {
    *((_DWORD *)v19 + 2) = 0;
    *(_QWORD *)v19 = &CPolygon::`vftable';
    *((_DWORD *)v19 + 10) = 0;
    *((_QWORD *)v19 + 2) = v19 + 48;
    *((_QWORD *)v19 + 3) = v19 + 48;
    *((_DWORD *)v19 + 8) = 4;
    *((_DWORD *)v19 + 9) = 4;
    *((_DWORD *)v19 + 52) = 0;
    *((_QWORD *)v19 + 32) = 0LL;
    ++dword_1803081AC;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*Microsoft::WRL::ComPtr<CPolygon>::operator=(&v30, v20) )
  {
    v17 = -2147024882;
    v28 = 32;
    goto LABEL_3;
  }
  v21 = v30;
  *(_DWORD *)(v30 + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize(v21 + 16, 0x14u);
  v22 = DynArrayImpl<0>::AddMultipleAndSet(v30 + 16, 20, *(_DWORD *)(a1 + 24), *(_QWORD *)a1);
  v17 = v22;
  if ( v22 < 0 )
  {
    v28 = 35;
    v18 = v22;
    goto LABEL_17;
  }
  *(_QWORD *)(v30 + 216) = a2;
  v23 = v30;
  *(_OWORD *)(v30 + 144) = *(_OWORD *)a4;
  *(_OWORD *)(v23 + 160) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v23 + 176) = *(_OWORD *)(a4 + 32);
  v24 = a5;
  *(_OWORD *)(v23 + 192) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(v23 + 208) = *(_DWORD *)(a4 + 64);
  LODWORD(v23) = a6;
  *(_DWORD *)(v30 + 224) = v24;
  *(_DWORD *)(v30 + 264) = v23;
  *(_DWORD *)(v30 + 236) = a7;
  *(_DWORD *)(v30 + 228) = a8;
  *(_DWORD *)(v30 + 232) = a9;
  *(_BYTE *)(v30 + 240) = a10;
  *(_BYTE *)(v30 + 241) = a11;
  *(_QWORD *)(v30 + 248) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a12 )
    *(_OWORD *)(v30 + 128) = *a12;
  else
    *(__m128i *)(v30 + 128) = _mm_loadu_si128((const __m128i *)D2DVectorHelper::CalculatePlane(
                                                                 &v29,
                                                                 *(struct D2D_VECTOR_4F **)(v30 + 16),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v30 + 16)
                                                                                              + 20LL),
                                                                 (const struct D2D_VECTOR_4F *)(*(_QWORD *)(v30 + 16)
                                                                                              + 40LL)));
  v25 = v30;
  v30 = 0LL;
  *a13 = v25;
LABEL_18:
  v26 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  }
  return v17;
}
