/*
 * XREFs of ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C6D5C
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800C65A0 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800C6924 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180037CF0 (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

_QWORD *__fastcall std::vector<enum _Button>::operator=(_QWORD *a1, char **a2)
{
  char *v2; // r15
  char *v4; // rbp
  _QWORD *v5; // rdi
  signed __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  const struct std::nothrow_t *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  char *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  char *v18; // rdx
  char *v19; // rbx
  size_t v20; // r15

  v2 = a2[1];
  v4 = *a2;
  v5 = (_QWORD *)*a1;
  v6 = v2 - *a2;
  v7 = v6 >> 2;
  v8 = (__int64)(a1[1] - *a1) >> 2;
  v9 = (__int64)(a1[2] - *a1) >> 2;
  if ( v6 >> 2 <= v9 )
  {
    v16 = (_QWORD *)*a1;
    if ( v7 <= v8 )
    {
      memmove_0(v16, v4, v6);
      v15 = (char *)v5 + 4 * v7;
    }
    else
    {
      v17 = 4 * v8;
      memmove_0(v16, v4, 4 * v8);
      v18 = &v4[v17];
      v19 = (char *)a1[1];
      v20 = v2 - v18;
      memmove_0(v19, v18, v20);
      v15 = &v19[v20];
    }
  }
  else
  {
    if ( v7 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v10 = v9 >> 1;
    if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v7 )
        v11 = v6 >> 2;
      v7 = v11;
    }
    if ( v5 )
    {
      v12 = (const struct std::nothrow_t *)(4 * v9);
      if ( (unsigned __int64)v12 >= 0x1000 )
      {
        v13 = *(v5 - 1);
        v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
        if ( (unsigned __int64)v5 - v13 - 8 > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v13, v12);
          __debugbreak();
        }
        v5 = (_QWORD *)*(v5 - 1);
      }
      operator delete(v5, v12);
    }
    std::vector<enum _Button>::_Buy(a1, v7);
    v14 = (_QWORD *)*a1;
    memmove_0((void *)*a1, v4, v6);
    v15 = (char *)v14 + v6;
  }
  a1[1] = v15;
  return a1;
}
