/*
 * XREFs of ??$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAPEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1800BFBEC
 * Callers:
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_N33@Z @ 0x1800BDF98 (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatia.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Emplace_reallocate<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  _BYTE *v4; // r10
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  size_t v13; // rdx
  size_t v14; // rcx
  void *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // r12
  _OWORD *v20; // r15
  _OWORD *v21; // rax
  __int64 v22; // rcx
  _BYTE *v23; // r8
  _BYTE *v24; // rdx
  void *v25; // rcx
  size_t v26; // r8
  __int64 v27; // rcx
  _BYTE *v28; // r8
  __int64 v31; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - (_BYTE *)*a1) / 272;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 272;
  if ( v7 == 0xF0F0F0F0F0F0F0LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 272;
  v10 = v9 >> 1;
  if ( v9 <= 0xF0F0F0F0F0F0F0LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v31 = v11;
  v12 = 34 * v11;
  v13 = 272 * v11;
  if ( v11 > 0xF0F0F0F0F0F0F0LL )
    v13 = -1LL;
  if ( v13 >= 0x1000 )
  {
    v14 = v13 + 39;
    if ( v13 + 39 < v13 )
      v14 = -1LL;
    v15 = operator new(v14);
    if ( !v15 )
      goto LABEL_28;
    v18 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v18 - 1) = v15;
    goto LABEL_13;
  }
  if ( v13 )
  {
    v18 = operator new(v13);
LABEL_13:
    v4 = a2;
    goto LABEL_30;
  }
  v18 = 0LL;
LABEL_30:
  try
  {
    v19 = 272 * v6;
    v20 = &v18[34 * v6];
    v21 = v20;
    v22 = 2LL;
    do
    {
      *v21 = *a3;
      v21[1] = a3[1];
      v21[2] = a3[2];
      v21[3] = a3[3];
      v21[4] = a3[4];
      v21[5] = a3[5];
      v21[6] = a3[6];
      v21 += 8;
      *(v21 - 1) = a3[7];
      a3 += 8;
      --v22;
    }
    while ( v22 );
    *v21 = *a3;
    v23 = a1[1];
    v24 = *a1;
    v25 = v18;
    if ( v4 == v23 )
    {
      v26 = v23 - v24;
    }
    else
    {
      memmove_0(v18, v24, v4 - (_BYTE *)*a1);
      v25 = v20 + 17;
      v24 = a2;
      v26 = (_BYTE *)a1[1] - a2;
    }
    memmove_0(v25, v24, v26);
  }
  catch ( ... )
  {
    std::allocator<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::deallocate(
      v27,
      v18,
      v31);
    throw;
  }
  v28 = *a1;
  if ( *a1 )
  {
    v16 = 272 * (((_BYTE *)a1[2] - v28) / 272);
    if ( v16 < 0x1000 )
    {
LABEL_26:
      operator delete(v28, (const struct std::nothrow_t *)v16);
      goto LABEL_27;
    }
    v16 += 39LL;
    v17 = *((_QWORD *)v28 - 1);
    if ( (unsigned __int64)&v28[-v17 - 8] <= 0x1F )
    {
      v28 = (_BYTE *)*((_QWORD *)v28 - 1);
      goto LABEL_26;
    }
LABEL_28:
    _o__invalid_parameter_noinfo_noreturn(v17, v16);
    __debugbreak();
  }
LABEL_27:
  *a1 = v18;
  a1[1] = &v18[34 * v8];
  a1[2] = &v18[v12];
  return (__int64)*a1 + v19;
}
