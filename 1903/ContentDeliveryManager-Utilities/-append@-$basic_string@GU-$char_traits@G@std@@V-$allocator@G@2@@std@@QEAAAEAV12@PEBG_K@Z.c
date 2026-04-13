/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18004A6F4
 * Callers:
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004A394 (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18001481C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180034180 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180035408 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x1800CB058 (memcpy_0.c)
 */

char *__fastcall std::wstring::append(_QWORD *Src, char *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  char *v7; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  _WORD *v11; // rax
  _WORD *v12; // rcx
  _WORD *v13; // rax

  v5 = Src;
  if ( !a2 )
    goto LABEL_13;
  v6 = Src[3] < 8uLL ? (char *)Src : (char *)*Src;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  if ( (char *)Src + 2 * v5[2] <= a2 )
  {
LABEL_13:
    v9 = v5[2];
    if ( ~v9 > a3 )
    {
      if ( !a3 )
        return (char *)v5;
      v10 = v9 + a3;
      if ( v9 + a3 <= 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v5[3] >= v10 )
        {
          if ( v10 )
          {
LABEL_24:
            if ( v5[3] < 8uLL )
              v12 = v5;
            else
              v12 = (_WORD *)*v5;
            memcpy_0(&v12[v5[2]], a2, 2 * a3);
            if ( v5[3] < 8uLL )
              v13 = v5;
            else
              v13 = (_WORD *)*v5;
            v5[2] = v10;
            v13[v10] = 0;
            return (char *)v5;
          }
          if ( v5[3] < 8uLL )
            v11 = v5;
          else
            v11 = (_WORD *)*v5;
          v5[2] = 0LL;
          *v11 = 0;
        }
        else
        {
          std::wstring::_Copy((const void **)v5, v9 + a3, v9);
        }
        if ( v10 )
          goto LABEL_24;
        return (char *)v5;
      }
    }
    std::wstring::_Xlen();
  }
  if ( v5[3] < 8uLL )
    v7 = (char *)v5;
  else
    v7 = (char *)*v5;
  return std::wstring::append((char *)v5, v5, (a2 - v7) >> 1, a3);
}
