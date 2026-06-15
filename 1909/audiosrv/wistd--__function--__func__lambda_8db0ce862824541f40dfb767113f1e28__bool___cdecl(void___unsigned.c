/*
 * XREFs of wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::operator() @ 0x180046810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180022130 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180038B70 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180038D4C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

char __fastcall wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl_void___unsigned___int64_void___unsigned___int64_unsigned_int__::operator()(
        __int64 a1,
        void **a2,
        size_t *a3,
        void **a4,
        size_t *a5,
        unsigned int *a6)
{
  unsigned __int64 v7; // rdi
  void *v8; // r13
  size_t v9; // r15
  unsigned int v10; // r12d
  size_t v11; // r14
  char v12; // bl
  unsigned __int64 v14; // rdx
  void *v15; // rcx
  void *v16; // rsi
  unsigned int v17; // [rsp+28h] [rbp-50h]
  void *v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h]
  void *v20; // [rsp+A8h] [rbp+30h]

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16) )
    goto LABEL_3;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *a4;
  v9 = *a3;
  v10 = *a6;
  v17 = *a6;
  v11 = *a5;
  v20 = *a2;
  v12 = 0;
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(v7, *a2, *a3, *a4, *a5, v17) )
    goto LABEL_3;
  v14 = v9 + v11 + 32;
  if ( *(_QWORD *)(v7 + 24) )
  {
    if ( *(_BYTE *)(v7 + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)(v7 + 24), v14);
  }
  else
  {
    *(_OWORD *)v18 = 0LL;
    v19 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v18, v14 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        (wil::details_abi::RawUsageIndex *)v7,
        (_WORD *)v18[0],
        0LL,
        (const char *)(v19 - (unsigned __int64)v18[0]));
      v15 = *(void **)(v7 + 48);
      v16 = 0LL;
      *(_QWORD *)(v7 + 48) = *((_QWORD *)&v19 + 1);
      if ( v15 )
        operator delete(v15);
      *(_BYTE *)(v7 + 58) = 1;
    }
    else
    {
      v16 = (void *)*((_QWORD *)&v19 + 1);
    }
    if ( v16 )
      operator delete(v16);
  }
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(v7, v20, v9, v8, v11, v10) )
  {
LABEL_3:
    v12 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v12;
}
