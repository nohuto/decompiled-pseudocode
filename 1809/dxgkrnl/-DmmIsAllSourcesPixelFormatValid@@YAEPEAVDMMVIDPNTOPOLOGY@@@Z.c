/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00BDFD8
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E4824 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(__int64 a1)
{
  struct DMMVIDPNTOPOLOGY *v1; // rbx
  char *v2; // rsi
  char *v3; // rbx
  char *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  char *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct DMMVIDPNTOPOLOGY *)a1;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v12);
  }
  v2 = (char *)v1 + 24;
  v3 = (char *)*((_QWORD *)v1 + 3);
  if ( v3 == v2 )
    return 1;
  v4 = v3 - 8;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v5 = *((_QWORD *)v4 + 11);
    if ( !v5 )
    {
      v13 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v13);
    }
    v6 = *(_QWORD *)(v5 + 104);
    v15 = 0LL;
    if ( !v6 )
    {
      v7 = 0LL;
LABEL_18:
      v14 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v14);
      goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v5 + 104);
    if ( !v7 )
      goto LABEL_18;
LABEL_9:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v15, v7);
    v8 = *(_QWORD *)(v15 + 144);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v15, 0LL);
    if ( v8 )
    {
      v9 = *(int *)(v8 + 96);
      if ( (unsigned int)v9 <= 0x29 )
      {
        a1 = 0x20003900000LL;
        if ( _bittest64(&a1, v9) )
          return 0;
      }
    }
    v10 = (char *)*((_QWORD *)v4 + 1);
    v4 = v10 - 8;
    if ( v10 == v2 )
      v4 = 0LL;
    if ( !v4 )
      return 1;
  }
}
