/*
 * XREFs of ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x1801D2C78
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D28CC (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005293C (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateDummyRect(
        CCompositionSkyBoxBrush *this,
        struct CDrawListEntryBuilder *a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+44h] [rbp-BCh]
  int v10; // [rsp+4Ch] [rbp-B4h]
  __int128 v11; // [rsp+50h] [rbp-B0h]
  _BYTE v12[40]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+88h] [rbp-78h]
  _BYTE v14[112]; // [rsp+A0h] [rbp-60h] BYREF

  if ( dword_180340CCC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180340CCC);
    if ( dword_180340CCC == -1 )
    {
      *(_OWORD *)&stru_180340CD0.m11 = _xmm;
      *(_QWORD *)&stru_180340CD0.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      Init_thread_footer(&dword_180340CCC);
    }
  }
  v9 = 0x600000000LL;
  v10 = 0;
  v8 = 0;
  v7 = xmmword_180311E70;
  memset_0(v12, 0, sizeof(v12));
  memset_0(v14, 0, 0x68uLL);
  *(_QWORD *)&v11 = 2LL;
  *((_QWORD *)&v11 + 1) = v14;
  v13 = v11;
  v3 = CDrawListEntryBuilder::Insert(
         a2,
         0,
         (const struct PrimitiveGeometryDesc *)&v7,
         (const struct PrimitiveVertexAttributesDesc *)v12,
         &stru_180340CD0);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x142u, 0LL);
  else
    return 0;
  return v5;
}
