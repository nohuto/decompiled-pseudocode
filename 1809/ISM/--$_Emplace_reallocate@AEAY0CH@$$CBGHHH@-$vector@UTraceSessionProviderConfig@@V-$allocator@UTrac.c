/*
 * XREFs of ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x180064130
 * Callers:
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180061CC8 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
        void **a1,
        _OWORD *a2,
        const OLECHAR *a3,
        unsigned int *a4,
        int *a5,
        int *a6)
{
  _OWORD *v8; // rdi
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  size_t v15; // rax
  size_t v16; // rcx
  void *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rbx
  GUID *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  HRESULT v24; // eax
  __int64 v25; // rcx
  void *v26; // rax
  char *v27; // rdx
  char *v28; // rcx
  char *v29; // rax
  _BYTE *v30; // r8
  int v32[2]; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v35; // [rsp+78h] [rbp+10h]

  v8 = a2;
  v10 = ((char *)a2 - (_BYTE *)*a1) / 40;
  v11 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 40;
  if ( v11 == 0x666666666666666LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v12 = v11 + 1;
  v13 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 40;
  if ( v13 <= 0x666666666666666LL - (v13 >> 1) )
  {
    v14 = v13 + (v13 >> 1);
    if ( v14 < v12 )
      v14 = v12;
  }
  else
  {
    v14 = v12;
  }
  v35 = v14;
  v15 = 40 * v14;
  *(_QWORD *)v32 = 40 * v14;
  if ( v14 > 0x666666666666666LL )
    v15 = -1LL;
  if ( v15 < 0x1000 )
  {
    if ( v15 )
      v20 = (char *)operator new(v15);
    else
      v20 = 0LL;
  }
  else
  {
    v16 = v15 + 39;
    if ( v15 + 39 < v15 )
      v16 = -1LL;
    v17 = operator new(v16);
    if ( !v17 )
      goto LABEL_37;
    v20 = (char *)(((unsigned __int64)v17 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v20 - 1) = v17;
  }
  try
  {
    v33 = 5 * v10;
    v21 = (GUID *)&v20[40 * v10];
    v22 = *a6;
    v23 = *a5;
    v21[1].Data1 = *a4;
    *(_QWORD *)v21[1].Data4 = v23;
    *(_QWORD *)&v21[2].Data1 = v22;
    v24 = CLSIDFromString(a3, v21);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12,
        (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v24);
    v25 = (__int64)a1[1];
    v26 = *a1;
    if ( v8 == (_OWORD *)v25 )
    {
      if ( v26 != (void *)v25 )
      {
        v27 = (char *)(v20 - (_BYTE *)v26);
        do
        {
          *(_OWORD *)&v27[(_QWORD)v26] = *(_OWORD *)v26;
          *(_OWORD *)&v27[(_QWORD)v26 + 16] = *((_OWORD *)v26 + 1);
          *(_QWORD *)&v27[(_QWORD)v26 + 32] = *((_QWORD *)v26 + 4);
          v26 = (char *)v26 + 40;
        }
        while ( v26 != (void *)v25 );
      }
    }
    else
    {
      if ( v26 != v8 )
      {
        v28 = (char *)(v20 - (_BYTE *)v26);
        do
        {
          *(_OWORD *)&v28[(_QWORD)v26] = *(_OWORD *)v26;
          *(_OWORD *)&v28[(_QWORD)v26 + 16] = *((_OWORD *)v26 + 1);
          *(_QWORD *)&v28[(_QWORD)v26 + 32] = *((_QWORD *)v26 + 4);
          v26 = (char *)v26 + 40;
        }
        while ( v26 != v8 );
        v25 = (__int64)a1[1];
      }
      if ( v8 != (_OWORD *)v25 )
      {
        v29 = (char *)(v21[2].Data4 - (unsigned __int8 *)v8);
        do
        {
          *(_OWORD *)&v29[(_QWORD)v8] = *v8;
          *(_OWORD *)&v29[(_QWORD)v8 + 16] = v8[1];
          *(_QWORD *)&v29[(_QWORD)v8 + 32] = *((_QWORD *)v8 + 4);
          v8 = (_OWORD *)((char *)v8 + 40);
        }
        while ( v8 != (_OWORD *)v25 );
      }
    }
  }
  catch ( ... )
  {
    std::allocator<CandidateIdentity>::deallocate(v25, v20, v35);
    throw;
  }
  v30 = *a1;
  if ( *a1 )
  {
    v18 = 40 * (((_BYTE *)a1[2] - v30) / 40);
    if ( v18 < 0x1000 )
    {
LABEL_35:
      operator delete(v30, (const struct std::nothrow_t *)v18);
      goto LABEL_36;
    }
    v18 += 39LL;
    v19 = *((_QWORD *)v30 - 1);
    if ( (unsigned __int64)&v30[-v19 - 8] <= 0x1F )
    {
      v30 = (_BYTE *)*((_QWORD *)v30 - 1);
      goto LABEL_35;
    }
LABEL_37:
    _o__invalid_parameter_noinfo_noreturn(v19, v18);
    __debugbreak();
  }
LABEL_36:
  *a1 = v20;
  a1[1] = &v20[40 * v12];
  a1[2] = &v20[*(_QWORD *)v32];
  return (__int64)*a1 + 8 * v33;
}
