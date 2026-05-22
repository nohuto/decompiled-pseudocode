/*
 * XREFs of ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x180043930
 * Callers:
 *     ?push_back@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18004356C (-push_back@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  size_t v13; // rdx
  size_t v14; // rcx
  void *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  char *v19; // r13
  _OWORD *v20; // r14
  _BYTE *v21; // r8
  _BYTE *v22; // rdx
  void *v23; // rcx
  size_t v24; // r8
  __int64 v25; // rcx
  _BYTE *v26; // r8
  __int64 v28; // [rsp+78h] [rbp+10h]
  __int64 v29; // [rsp+88h] [rbp+20h]

  v6 = (a2 - (_BYTE *)*a1) / 184;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 184;
  if ( v7 == 0x1642C8590B21642LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 184;
  v10 = v9 >> 1;
  if ( v9 <= 0x1642C8590B21642LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v28 = v11;
  v12 = 23 * v11;
  v13 = 184 * v11;
  if ( v11 > 0x1642C8590B21642LL )
    v13 = -1LL;
  if ( v13 < 0x1000 )
  {
    if ( v13 )
      v18 = operator new(v13);
    else
      v18 = 0LL;
  }
  else
  {
    v14 = v13 + 39;
    if ( v13 + 39 < v13 )
      v14 = -1LL;
    v15 = operator new(v14);
    if ( !v15 )
      goto LABEL_26;
    v18 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v18 - 1) = v15;
  }
  try
  {
    v29 = 184 * v6;
    v19 = (char *)&v18[23 * v6];
    *(_OWORD *)v19 = *a3;
    *((_OWORD *)v19 + 1) = a3[1];
    *((_OWORD *)v19 + 2) = a3[2];
    *((_OWORD *)v19 + 3) = a3[3];
    *((_OWORD *)v19 + 4) = a3[4];
    *((_OWORD *)v19 + 5) = a3[5];
    *((_OWORD *)v19 + 6) = a3[6];
    *((_OWORD *)v19 + 7) = a3[7];
    v20 = a3 + 8;
    *((_OWORD *)v19 + 8) = *v20;
    *((_OWORD *)v19 + 9) = v20[1];
    *((_OWORD *)v19 + 10) = v20[2];
    *((_QWORD *)v19 + 22) = *((_QWORD *)v20 + 6);
    v21 = a1[1];
    v22 = *a1;
    v23 = v18;
    if ( a2 == v21 )
    {
      v24 = v21 - v22;
    }
    else
    {
      memmove_0(v18, v22, a2 - (_BYTE *)*a1);
      v23 = v19 + 184;
      v24 = (_BYTE *)a1[1] - a2;
      v22 = a2;
    }
    memmove_0(v23, v22, v24);
  }
  catch ( ... )
  {
    std::allocator<PointData3D>::deallocate(v25, v18, v28);
    throw;
  }
  v26 = *a1;
  if ( *a1 )
  {
    v16 = 184 * (((_BYTE *)a1[2] - v26) / 184);
    if ( v16 < 0x1000 )
    {
LABEL_24:
      operator delete(v26, (const struct std::nothrow_t *)v16);
      goto LABEL_25;
    }
    v16 += 39LL;
    v17 = *((_QWORD *)v26 - 1);
    if ( (unsigned __int64)&v26[-v17 - 8] <= 0x1F )
    {
      v26 = (_BYTE *)*((_QWORD *)v26 - 1);
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v17, v16);
    __debugbreak();
  }
LABEL_25:
  *a1 = v18;
  a1[1] = &v18[23 * v8];
  a1[2] = &v18[v12];
  return (__int64)*a1 + v29;
}
