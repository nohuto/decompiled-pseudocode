/*
 * XREFs of sub_1800B78D4 @ 0x1800B78D4
 * Callers:
 *     sub_1800B7A24 @ 0x1800B7A24 (sub_1800B7A24.c)
 *     sub_180103120 @ 0x180103120 (sub_180103120.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x18000F5E4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800B78D4(_QWORD *Src, unsigned __int64 a2, __int64 a3, char a4)
{
  size_t v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi

  v4 = Src[2];
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    std::vector<void *>::_Xlen();
  v8 = Src[3];
  v9 = a2 + v4;
  v10 = (a2 + v4) | 0xF;
  if ( v10 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v11 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v5 = v10;
      if ( v10 < v11 + v8 )
        v5 = v11 + v8;
    }
  }
  v12 = v5 + 1;
  if ( v5 == -1 )
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
      goto LABEL_21;
    v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = v14;
  }
  Src[2] = v9;
  Src[3] = v5;
  if ( v8 < 0x10 )
  {
    memcpy(v17, Src, v4);
    *((_BYTE *)v17 + v4) = a4;
    *((_BYTE *)v17 + v4 + 1) = 0;
    goto LABEL_23;
  }
  v18 = (_QWORD *)*Src;
  memcpy(v17, (const void *)*Src, v4);
  *((_BYTE *)v17 + v4) = a4;
  *((_BYTE *)v17 + v4 + 1) = 0;
  if ( v8 + 1 >= 0x1000 )
  {
    v16 = *(v18 - 1);
    v15 = v8 + 40;
    if ( (unsigned __int64)v18 - v16 - 8 <= 0x1F )
    {
      v18 = (_QWORD *)*(v18 - 1);
      goto LABEL_20;
    }
LABEL_21:
    o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_20:
  j_j__o_free(v18);
LABEL_23:
  *Src = v17;
  return Src;
}
