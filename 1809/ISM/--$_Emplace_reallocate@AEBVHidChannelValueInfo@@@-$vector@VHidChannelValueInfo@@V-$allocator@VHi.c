/*
 * XREFs of ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x180078A84
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@ConsumerControlNexusDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@VHidChannelValueInfo@@U?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@@std@@PEAI@Z @ 0x1800777A8 (-ExtractReportDescriptorsFromPreparsedData@ConsumerControlNexusDevice@@AEAAJQEAU_HIDP_PREPARSED_.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18007AFBC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x18007FB34 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
        void **a1,
        char *a2,
        __int64 a3)
{
  char *v4; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  size_t v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rbx
  __int64 v17; // r15
  char *v18; // rdx
  char *v19; // rax
  char *v20; // rax
  _BYTE *v21; // r8
  __int64 v23; // rcx
  __int64 v24; // [rsp+68h] [rbp+10h]

  v4 = a2;
  v6 = (a2 - (_BYTE *)*a1) / 72;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 72;
  if ( v7 == 0x38E38E38E38E38ELL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 72;
  if ( v9 <= 0x38E38E38E38E38ELL - (v9 >> 1) )
  {
    v10 = v9 + (v9 >> 1);
    if ( v10 < v8 )
      v10 = v8;
  }
  else
  {
    v10 = v8;
  }
  v24 = v10;
  v11 = 72 * v10;
  v12 = 72 * v10;
  if ( v10 > 0x38E38E38E38E38ELL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    if ( v12 )
      v16 = (char *)operator new(v12);
    else
      v16 = 0LL;
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_35;
    v16 = (char *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v16 - 1) = v14;
  }
  try
  {
    v17 = 9 * v6;
    *(_OWORD *)&v16[8 * v17] = *(_OWORD *)a3;
    *(_OWORD *)&v16[8 * v17 + 16] = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v16[8 * v17 + 32] = *(_OWORD *)(a3 + 32);
    *(_OWORD *)&v16[8 * v17 + 48] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v16[8 * v17 + 64] = *(_QWORD *)(a3 + 64);
    v18 = (char *)a1[1];
    v19 = (char *)*a1;
    if ( v4 == v18 )
    {
      if ( v19 != v18 )
      {
        v10 = v16 - v19;
        do
        {
          *(_OWORD *)&v19[v10] = *(_OWORD *)v19;
          *(_OWORD *)&v19[v10 + 16] = *((_OWORD *)v19 + 1);
          *(_OWORD *)&v19[v10 + 32] = *((_OWORD *)v19 + 2);
          *(_OWORD *)&v19[v10 + 48] = *((_OWORD *)v19 + 3);
          *(_QWORD *)&v19[v10 + 64] = *((_QWORD *)v19 + 8);
          v19 += 72;
        }
        while ( v19 != v18 );
      }
    }
    else
    {
      if ( v19 != v4 )
      {
        v10 = v16 - v19;
        do
        {
          *(_OWORD *)&v19[v10] = *(_OWORD *)v19;
          *(_OWORD *)&v19[v10 + 16] = *((_OWORD *)v19 + 1);
          *(_OWORD *)&v19[v10 + 32] = *((_OWORD *)v19 + 2);
          *(_OWORD *)&v19[v10 + 48] = *((_OWORD *)v19 + 3);
          *(_QWORD *)&v19[v10 + 64] = *((_QWORD *)v19 + 8);
          v19 += 72;
        }
        while ( v19 != v4 );
        v18 = (char *)a1[1];
      }
      if ( v4 != v18 )
      {
        v20 = (char *)(&v16[8 * v17 + 72] - v4);
        do
        {
          *(_OWORD *)&v20[(_QWORD)v4] = *(_OWORD *)v4;
          *(_OWORD *)&v20[(_QWORD)v4 + 16] = *((_OWORD *)v4 + 1);
          *(_OWORD *)&v20[(_QWORD)v4 + 32] = *((_OWORD *)v4 + 2);
          *(_OWORD *)&v20[(_QWORD)v4 + 48] = *((_OWORD *)v4 + 3);
          *(_QWORD *)&v20[(_QWORD)v4 + 64] = *((_QWORD *)v4 + 8);
          v4 += 72;
        }
        while ( v4 != v18 );
      }
    }
  }
  catch ( ... )
  {
    MPCClickerProcessor::Uninitialize3DComponents((MPCClickerProcessor *)v10);
    std::allocator<HidChannelValueInfo>::deallocate(v23, v16, v24);
    throw;
  }
  v21 = *a1;
  if ( *a1 )
  {
    v15 = 72 * (((_BYTE *)a1[2] - v21) / 72);
    if ( v15 < 0x1000 )
    {
LABEL_33:
      operator delete(v21, (const struct std::nothrow_t *)v15);
      goto LABEL_34;
    }
    v15 += 39LL;
    v10 = *((_QWORD *)v21 - 1);
    if ( (unsigned __int64)&v21[-v10 - 8] <= 0x1F )
    {
      v21 = (_BYTE *)*((_QWORD *)v21 - 1);
      goto LABEL_33;
    }
LABEL_35:
    _o__invalid_parameter_noinfo_noreturn(v10, v15);
    __debugbreak();
  }
LABEL_34:
  *a1 = v16;
  a1[1] = &v16[72 * v8];
  a1[2] = &v16[v11];
  return (__int64)*a1 + 8 * v17;
}
