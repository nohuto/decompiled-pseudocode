/*
 * XREFs of sub_18006F454 @ 0x18006F454
 * Callers:
 *     sub_18006F614 @ 0x18006F614 (sub_18006F614.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x18000F5E4 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall sub_18006F454(_QWORD *Src, char *a2, __int64 a3)
{
  char *result; // rax
  char v6; // r13
  size_t v7; // rsi
  unsigned __int64 v8; // r15
  _QWORD *v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // r14
  __int64 v19; // rcx

  result = (char *)a3;
  while ( a2 != result )
  {
    try
    {
      v6 = *a2;
      v7 = Src[2];
      v8 = Src[3];
      if ( v7 >= v8 )
      {
        if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
          std::vector<void *>::_Xlen();
        v10 = (v7 + 1) | 0xF;
        if ( v10 > 0x7FFFFFFFFFFFFFFFLL || (v11 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1)) )
        {
          v10 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else if ( v10 < v11 + v8 )
        {
          v10 = v11 + v8;
        }
        v12 = v10 + 1;
        if ( v10 == -1LL )
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
          {
            o__invalid_parameter_noinfo_noreturn(v16, v15);
            __debugbreak();
          }
          v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v17 - 1) = v14;
        }
        Src[2] = v7 + 1;
        Src[3] = v10;
        if ( v8 < 0x10 )
        {
          memcpy(v17, Src, v7);
          *((_BYTE *)v17 + v7) = v6;
          *((_BYTE *)v17 + v7 + 1) = 0;
        }
        else
        {
          v18 = (_QWORD *)*Src;
          memcpy(v17, (const void *)*Src, v7);
          *((_BYTE *)v17 + v7) = v6;
          *((_BYTE *)v17 + v7 + 1) = 0;
          if ( v8 + 1 >= 0x1000 )
          {
            v19 = *(v18 - 1);
            if ( (unsigned __int64)v18 - v19 - 8 > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v19, v8 + 40);
              __debugbreak();
            }
            v18 = (_QWORD *)*(v18 - 1);
          }
          j_j__o_free(v18);
        }
        *Src = v17;
      }
      else
      {
        Src[2] = v7 + 1;
        v9 = Src;
        if ( v8 >= 0x10 )
          v9 = (_QWORD *)*Src;
        *((_BYTE *)v9 + v7) = v6;
        *((_BYTE *)v9 + v7 + 1) = 0;
      }
      a2 += 2;
      result = (char *)a3;
    }
    catch ( ... )
    {
      std::string::_Tidy_deallocate(Src);
      throw;
    }
  }
  return result;
}
