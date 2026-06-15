/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800FCA04
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FD4BC (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009E8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@2@_K1@Z @ 0x1800FDDE0 (-_Change_array@-$vector@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixCli.c)
 */

unsigned __int64 __fastcall std::vector<std::unique_ptr<CAppSubmixClientContext>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClientContext>>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  signed __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  char *v13; // r10
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  char *v16; // r8
  char *v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  signed __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  signed __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  char *v27; // r8
  __int64 v28; // rax

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v9 + v10;
    if ( v9 + v10 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = *a3;
  *a3 = 0LL;
  *(_QWORD *)&v13[v14] = v15;
  v16 = a1[1];
  v17 = *a1;
  v18 = 0LL;
  if ( v4 == v16 )
  {
    v19 = (unsigned __int64)(v16 - v17 + 7) >> 3;
    if ( v17 > v16 )
      v19 = 0LL;
    if ( v19 )
    {
      v20 = v13 - v17;
      do
      {
        v21 = *(_QWORD *)v17;
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)&v17[v20] = v21;
        v17 += 8;
        ++v18;
      }
      while ( v18 != v19 );
    }
  }
  else
  {
    v22 = (unsigned __int64)(v4 - v17 + 7) >> 3;
    if ( v17 > v4 )
      v22 = 0LL;
    if ( v22 )
    {
      v23 = v13 - v17;
      do
      {
        v24 = *(_QWORD *)v17;
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)&v17[v23] = v24;
        v17 += 8;
        ++v18;
      }
      while ( v18 != v22 );
      v16 = a1[1];
    }
    v25 = 0LL;
    v26 = (unsigned __int64)(v16 - v4 + 7) >> 3;
    if ( v4 > v16 )
      v26 = 0LL;
    if ( v26 )
    {
      v27 = &v13[v14 - (_QWORD)v4];
      do
      {
        v28 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)&v4[(_QWORD)v27 + 8] = v28;
        v4 += 8;
        ++v25;
      }
      while ( v25 != v26 );
    }
  }
  std::vector<std::unique_ptr<CAppSubmixClientContext>>::_Change_array(a1, v13, v8, v11, v13, -2LL);
  return (unsigned __int64)&(*a1)[v14];
}
