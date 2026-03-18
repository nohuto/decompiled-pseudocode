/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00E31E8
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00E484C (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(__int64 a1, __int64 a2)
{
  struct DMMVIDPNTOPOLOGY *v2; // rbx
  char *v3; // rsi
  char *v4; // rbx
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  char *v10; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct DMMVIDPNTOPOLOGY *)a1;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  v3 = (char *)v2 + 24;
  v4 = (char *)*((_QWORD *)v2 + 3);
  if ( v4 == v3 )
    return 1;
  v5 = v4 - 8;
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    v6 = *((_QWORD *)v5 + 11);
    if ( !v6 )
    {
      v14 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v14);
    }
    v7 = *(_QWORD *)(v6 + 104);
    v16 = 0LL;
    if ( !v7 )
    {
      v8 = 0LL;
LABEL_18:
      v15 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v15);
      goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
    v8 = *(_QWORD *)(v6 + 104);
    if ( !v8 )
      goto LABEL_18;
LABEL_9:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v16, v8);
    v9 = *(_QWORD *)(v16 + 144);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v16, 0LL);
    if ( v9 )
    {
      v12 = *(int *)(v9 + 96);
      if ( (unsigned int)v12 <= 0x29 )
      {
        a1 = 0x20003900000LL;
        if ( _bittest64(&a1, v12) )
          return 0;
      }
    }
    v10 = (char *)*((_QWORD *)v5 + 1);
    v5 = v10 - 8;
    if ( v10 == v3 )
      v5 = 0LL;
    if ( !v5 )
      return 1;
  }
}
