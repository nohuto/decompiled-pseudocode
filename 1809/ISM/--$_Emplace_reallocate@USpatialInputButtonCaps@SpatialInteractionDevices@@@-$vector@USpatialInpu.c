/*
 * XREFs of ??$_Emplace_reallocate@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAPEAUSpatialInputButtonCaps@SpatialInteractionDevices@@QEAU23@$$QEAU23@@Z @ 0x1800A7494
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800A5ED8 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::_Emplace_reallocate<SpatialInteractionDevices::SpatialInputButtonCaps>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  size_t v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // r14
  _BYTE *v19; // r8
  _BYTE *v20; // rdx
  char *v21; // rcx
  size_t v22; // r8
  __int64 v23; // rcx
  _BYTE *v24; // r8
  unsigned __int64 v26; // [rsp+68h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 12;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 12;
  if ( v7 == 0x1555555555555555LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 12;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v10 = v9 + (v9 >> 1);
    if ( v10 < v8 )
      v10 = v8;
  }
  else
  {
    v10 = v8;
  }
  v26 = v10;
  v11 = 12 * v10;
  v12 = 12 * v10;
  if ( v10 > 0x1555555555555555LL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v17 = operator new(v12);
    else
      v17 = 0LL;
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_26;
    v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = v14;
  }
  try
  {
    v18 = 3 * v6;
    *(_QWORD *)((char *)v17 + 4 * v18) = *(_QWORD *)a3;
    *((_DWORD *)v17 + v18 + 2) = *(_DWORD *)(a3 + 8);
    v19 = a1[1];
    v20 = *a1;
    v21 = (char *)v17;
    if ( a2 == v19 )
    {
      v22 = v19 - v20;
    }
    else
    {
      memmove_0(v17, v20, a2 - (_BYTE *)*a1);
      v21 = (char *)v17 + 4 * v18 + 12;
      v22 = (_BYTE *)a1[1] - a2;
      v20 = a2;
    }
    memmove_0(v21, v20, v22);
  }
  catch ( ... )
  {
    std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>::deallocate(v23, v17, v26);
    throw;
  }
  v24 = *a1;
  if ( *a1 )
  {
    v15 = 12 * (((_BYTE *)a1[2] - v24) / 12);
    if ( v15 < 0x1000 )
    {
LABEL_24:
      operator delete(v24, (const struct std::nothrow_t *)v15);
      goto LABEL_25;
    }
    v15 += 39LL;
    v16 = *((_QWORD *)v24 - 1);
    if ( (unsigned __int64)&v24[-v16 - 8] <= 0x1F )
    {
      v24 = (_BYTE *)*((_QWORD *)v24 - 1);
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_25:
  *a1 = v17;
  a1[1] = (char *)v17 + 12 * v8;
  a1[2] = (char *)v17 + v11;
  return (__int64)*a1 + 4 * v18;
}
