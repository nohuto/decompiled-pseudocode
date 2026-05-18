/*
 * XREFs of sub_180031F00 @ 0x180031F00
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180031F00(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdx
  size_t v8; // rsi
  const void *v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  void *v12; // rax
  char *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == -1 )
      return 0LL;
    v5 = std::streambuf::pptr();
    v6 = v5;
    v7 = **(_QWORD **)(a1 + 64) + **(int **)(a1 + 88);
    if ( v5 && v5 < v7 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      *(_QWORD *)(a1 + 104) = v6 + 1;
      return a2;
    }
    v8 = 0LL;
    v9 = **(const void ***)(a1 + 24);
    v10 = 32LL;
    if ( !v5 )
      goto LABEL_20;
    v8 = v7 - (_QWORD)v9;
    if ( v7 - (unsigned __int64)v9 < 0x20 )
      goto LABEL_20;
    if ( v8 < 0x3FFFFFFF )
    {
      v10 = 2 * v8;
LABEL_13:
      if ( v10 >= 0x1000 )
      {
        v11 = v10 + 39;
        if ( v10 + 39 < v10 )
          v11 = -1LL;
        v12 = operator new(v11);
        if ( !v12 )
          goto LABEL_30;
        v15 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v15 - 1) = v12;
LABEL_21:
        memcpy(v15, v9, v8);
        v13 = (char *)v15 + v8;
        *(_QWORD *)(a1 + 104) = (char *)v15 + v8 + 1;
        **(_QWORD **)(a1 + 32) = v15;
        **(_QWORD **)(a1 + 64) = (char *)v15 + v8;
        **(_DWORD **)(a1 + 88) = v10 - v8;
        if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
        {
          **(_QWORD **)(a1 + 24) = v15;
          **(_QWORD **)(a1 + 56) = 0LL;
          **(_DWORD **)(a1 + 80) = (_DWORD)v15;
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 104);
          v17 = (char *)v15 - (_BYTE *)v9 + std::streambuf::gptr(a1);
          **(_QWORD **)(a1 + 24) = v15;
          **(_QWORD **)(a1 + 56) = v17;
          **(_DWORD **)(a1 + 80) = v16 - v17;
        }
        v18 = *(_DWORD *)(a1 + 112);
        if ( (v18 & 1) == 0 )
          goto LABEL_29;
        if ( v8 < 0x1000 )
        {
LABEL_28:
          j_j__o_free(v9);
          v18 = *(_DWORD *)(a1 + 112);
LABEL_29:
          *(_DWORD *)(a1 + 112) = v18 | 1;
          *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
          return a2;
        }
        v14 = *((_QWORD *)v9 - 1);
        if ( (unsigned __int64)v9 - v14 - 8 <= 0x1F )
        {
          v9 = (const void *)*((_QWORD *)v9 - 1);
          goto LABEL_28;
        }
LABEL_30:
        o__invalid_parameter_noinfo_noreturn(v14, v13);
        __debugbreak();
      }
      if ( !v10 )
      {
        v15 = 0LL;
        goto LABEL_21;
      }
LABEL_20:
      v15 = operator new(v10);
      goto LABEL_21;
    }
    v10 = 0x7FFFFFFFLL;
    if ( v8 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
