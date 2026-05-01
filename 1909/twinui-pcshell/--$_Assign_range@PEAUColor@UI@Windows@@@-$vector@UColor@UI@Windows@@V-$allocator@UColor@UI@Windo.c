/*
 * XREFs of ??$_Assign_range@PEAUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@0Uforward_iterator_tag@1@@Z @ 0x1804220E4
 * Callers:
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180422204 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     ?_Buy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z @ 0x180422074 (-_Buy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z.c)
 */

char *__fastcall std::vector<Windows::UI::Color>::_Assign_range<Windows::UI::Color *>(void **a1, char *a2, __int64 a3)
{
  char *v3; // rdi
  signed __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // rbx
  char *result; // rax
  void *v15; // rcx
  __int64 v16; // rbx
  char *v17; // rdx
  char *v18; // rbx
  size_t v19; // r15

  v3 = (char *)*a1;
  v5 = a3 - (_QWORD)a2;
  v6 = v5 >> 2;
  v7 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v9 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v5 >> 2 <= v7 )
  {
    v15 = *a1;
    if ( v6 <= v9 )
    {
      memmove_0(v15, a2, v5);
      result = &v3[4 * v6];
    }
    else
    {
      v16 = 4 * v9;
      memmove_0(v15, a2, 4 * v9);
      v17 = &a2[v16];
      v18 = (char *)a1[1];
      v19 = a3 - (_QWORD)v17;
      memmove_0(v18, v17, v19);
      result = &v18[v19];
    }
  }
  else
  {
    if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v11 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v12 = v11 + v7;
      if ( v11 + v7 < v6 )
        v12 = v5 >> 2;
      v6 = v12;
    }
    if ( v3 )
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(4 * v7));
    std::vector<Windows::UI::Color>::_Buy(a1, v6);
    v13 = (char *)*a1;
    memmove_0(*a1, a2, v5);
    result = &v13[v5];
  }
  a1[1] = result;
  return result;
}
