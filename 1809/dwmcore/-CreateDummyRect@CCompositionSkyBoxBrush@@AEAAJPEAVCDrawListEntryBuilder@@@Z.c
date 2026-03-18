/*
 * XREFs of ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180190A38
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180028814 (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateDummyRect(
        CCompositionSkyBoxBrush *this,
        struct CDrawListEntryBuilder *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-D0h]
  __int128 v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+50h] [rbp-B0h]
  char v10; // [rsp+58h] [rbp-A8h]
  _BYTE v11[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+80h] [rbp-80h]
  _BYTE v13[112]; // [rsp+90h] [rbp-70h] BYREF

  if ( dword_18030C5E4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030C5E4);
    if ( dword_18030C5E4 == -1 )
    {
      *(_OWORD *)&stru_18030C5E8.m11 = _xmm;
      *(_QWORD *)&stru_18030C5E8.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      Init_thread_footer(&dword_18030C5E4);
    }
  }
  memset_0(&v8, 0, 0x20uLL);
  v9 = 0;
  v10 |= 6u;
  v8 = xmmword_1802BCB58;
  memset_0(v11, 0, sizeof(v11));
  memset_0(v13, 0, 0x68uLL);
  *(_QWORD *)&v7 = 2LL;
  *((_QWORD *)&v7 + 1) = v13;
  v12 = v7;
  v3 = CDrawListEntryBuilder::Insert(
         a2,
         0,
         (const struct PrimitiveGeometryDesc *)&v8,
         (const struct PrimitiveVertexAttributesDesc *)v11,
         &stru_18030C5E8);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x144u);
  else
    return 0;
  return v5;
}
