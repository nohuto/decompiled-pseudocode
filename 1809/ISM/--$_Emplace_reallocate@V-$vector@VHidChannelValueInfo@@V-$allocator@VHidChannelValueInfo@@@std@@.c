/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18007C60C
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18007AFBC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800789B4 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
        unsigned __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  size_t v11; // rax
  size_t v12; // rcx
  void *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  _QWORD *v18; // r9
  _QWORD *v19; // r8
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rbx
  _QWORD *v25; // rsi
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+88h] [rbp+10h]
  __int64 v30; // [rsp+98h] [rbp+20h]

  v6 = (__int64)((__int64)a2 - *a1) / 24;
  v7 = (__int64)(a1[1] - *a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) / 24;
  if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v10 = v9 + (v9 >> 1);
    if ( v10 < v8 )
      v10 = v8;
  }
  else
  {
    v10 = v8;
  }
  v30 = v10;
  v11 = 24 * v10;
  v28 = 24 * v10;
  if ( v10 > 0xAAAAAAAAAAAAAAALL )
    v11 = -1LL;
  if ( v11 < 0x1000 )
  {
    if ( v11 )
      v16 = (unsigned __int64)operator new(v11);
    else
      v16 = 0LL;
  }
  else
  {
    v12 = v11 + 39;
    if ( v11 + 39 < v11 )
      v12 = -1LL;
    v13 = operator new(v12);
    if ( !v13 )
      goto LABEL_39;
    v16 = ((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v16 - 8) = v13;
  }
  v17 = 24 * v6;
  v18 = (_QWORD *)(v17 + v16);
  try
  {
    *v18 = 0LL;
    v18[1] = 0LL;
    v18[2] = 0LL;
    *v18 = *a3;
    v18[1] = a3[1];
    v18[2] = a3[2];
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    v29 = v17 + v16;
    v19 = (_QWORD *)a1[1];
    v20 = (_QWORD *)*a1;
    if ( a2 == v19 )
    {
      if ( v20 != v19 )
      {
        v21 = (_QWORD *)(v16 + 16);
        v20 = (_QWORD *)((char *)v20 - v16);
        do
        {
          *(v21 - 2) = 0LL;
          *(v21 - 1) = 0LL;
          *v21 = 0LL;
          *(v21 - 2) = *(_QWORD *)((char *)v21 + (_QWORD)v20 - 16);
          *(v21 - 1) = *(_QWORD *)((char *)v21 + (_QWORD)v20 - 8);
          *v21 = *(_QWORD *)((char *)v21 + (_QWORD)v20);
          *(_QWORD *)((char *)v21 + (_QWORD)v20 - 16) = 0LL;
          *(_QWORD *)((char *)v21 + (_QWORD)v20 - 8) = 0LL;
          *(_QWORD *)((char *)v21 + (_QWORD)v20) = 0LL;
          v21 += 3;
        }
        while ( (_QWORD *)((char *)v21 + (_QWORD)v20 - 16) != v19 );
      }
    }
    else
    {
      if ( v20 != a2 )
      {
        v22 = (_QWORD *)(v16 + 16);
        v20 = (_QWORD *)((char *)v20 - v16);
        do
        {
          *(v22 - 2) = 0LL;
          *(v22 - 1) = 0LL;
          *v22 = 0LL;
          *(v22 - 2) = *(_QWORD *)((char *)v22 + (_QWORD)v20 - 16);
          *(v22 - 1) = *(_QWORD *)((char *)v22 + (_QWORD)v20 - 8);
          *v22 = *(_QWORD *)((char *)v22 + (_QWORD)v20);
          *(_QWORD *)((char *)v22 + (_QWORD)v20 - 16) = 0LL;
          *(_QWORD *)((char *)v22 + (_QWORD)v20 - 8) = 0LL;
          *(_QWORD *)((char *)v22 + (_QWORD)v20) = 0LL;
          v22 += 3;
        }
        while ( (_QWORD *)((char *)v22 + (_QWORD)v20 - 16) != a2 );
        v19 = (_QWORD *)a1[1];
      }
      v29 = v16;
      if ( a2 != v19 )
      {
        v20 = v18 + 5;
        v23 = (unsigned __int64)&a2[v17 / 0xFFFFFFFFFFFFFFF8uLL] - v16;
        do
        {
          *(v20 - 2) = 0LL;
          *(v20 - 1) = 0LL;
          *v20 = 0LL;
          *(v20 - 2) = *(_QWORD *)((char *)v20 + v23 - 40);
          *(v20 - 1) = *(_QWORD *)((char *)v20 + v23 - 32);
          *v20 = *(_QWORD *)((char *)v20 + v23 - 24);
          *(_QWORD *)((char *)v20 + v23 - 40) = 0LL;
          *(_QWORD *)((char *)v20 + v23 - 32) = 0LL;
          *(_QWORD *)((char *)v20 + v23 - 24) = 0LL;
          v20 += 3;
        }
        while ( (_QWORD *)((char *)v20 + v23 - 40) != v19 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<std::vector<HidChannelValueInfo>>::_Destroy((__int64)v20, v29, v17 + v16 + 24);
    std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(v27, (_QWORD *)v16, v30);
    throw;
  }
  v24 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v25 = (_QWORD *)a1[1];
    if ( v24 != v25 )
    {
      do
      {
        std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)v24);
        v24 += 3;
      }
      while ( v24 != v25 );
      v24 = (_QWORD *)*a1;
    }
    v14 = 24 * ((__int64)(a1[2] - (_QWORD)v24) / 24);
    if ( v14 < 0x1000 )
      goto LABEL_37;
    v14 += 39LL;
    v15 = *(v24 - 1);
    if ( (unsigned __int64)v24 - v15 - 8 <= 0x1F )
    {
      v24 = (_QWORD *)*(v24 - 1);
LABEL_37:
      operator delete(v24, (const struct std::nothrow_t *)v14);
      goto LABEL_38;
    }
LABEL_39:
    _o__invalid_parameter_noinfo_noreturn(v15, v14);
    __debugbreak();
  }
LABEL_38:
  *a1 = v16;
  a1[1] = v16 + 24 * v8;
  a1[2] = v16 + v28;
  return v17 + *a1;
}
