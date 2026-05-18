/*
 * XREFs of sub_1800A6324 @ 0x1800A6324
 * Callers:
 *     sub_1800A4FB8 @ 0x1800A4FB8 (sub_1800A4FB8.c)
 * Callees:
 *     sub_180011EFC @ 0x180011EFC (sub_180011EFC.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

void __fastcall sub_1800A6324(__int64 a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rdx
  char *v7; // rcx
  _QWORD *v8; // rbx
  char *v9; // rcx
  char *v10; // r8

  if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 < 0x10 )
    {
      sub_180011EFC((const void **)a1);
      return;
    }
    v3 = v2 | 0xF;
    if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
      v3 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v3 < *(_QWORD *)(a1 + 24) )
    {
      if ( v3 + 1 < 0x1000 )
      {
        v8 = operator new(v3 + 1);
      }
      else
      {
        v4 = v3 + 40;
        if ( v3 + 40 < v3 + 1 )
          v4 = -1LL;
        v5 = operator new(v4);
        if ( !v5 )
          goto LABEL_18;
        v8 = (_QWORD *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v8 - 1) = v5;
      }
      memcpy(v8, *(const void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
      v9 = *(char **)a1;
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL) < 0x1000 )
      {
LABEL_16:
        j_j__o_free(v9);
        *(_QWORD *)a1 = v8;
        *(_QWORD *)(a1 + 24) = v3;
        return;
      }
      v10 = (char *)*((_QWORD *)v9 - 1);
      v6 = *(_QWORD *)(a1 + 24) + 40LL;
      v7 = (char *)(v9 - v10);
      if ( (unsigned __int64)(v7 - 8) <= 0x1F )
      {
        v9 = v10;
        goto LABEL_16;
      }
LABEL_18:
      o__invalid_parameter_noinfo_noreturn(v7, v6);
      JUMPOUT(0x1800A6418LL);
    }
  }
}
