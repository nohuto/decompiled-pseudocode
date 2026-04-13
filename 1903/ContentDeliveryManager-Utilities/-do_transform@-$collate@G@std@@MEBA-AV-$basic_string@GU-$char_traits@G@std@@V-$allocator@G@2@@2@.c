/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x1800C3BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180034388 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     memcpy_s_0 @ 0x1800CABE5 (memcpy_s_0.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::collate<unsigned short>::do_transform(__int64 a1, char *a2, const void *a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 *v12; // rax

  *((_QWORD *)a2 + 3) = 7LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *(_WORD *)a2 = 0;
  v6 = (a4 - (__int64)a3) >> 1;
  if ( v6 )
  {
    v7 = 0LL;
    do
    {
      if ( v6 > v7 )
      {
        std::wstring::append(a2, v6 - v7, 0);
      }
      else
      {
        *((_QWORD *)a2 + 2) = v6;
        if ( *((_QWORD *)a2 + 3) < 8uLL )
          v8 = (__int64 *)a2;
        else
          v8 = *(__int64 **)a2;
        *((_WORD *)v8 + v6) = 0;
      }
      if ( *((_QWORD *)a2 + 3) < 8uLL )
        v9 = (__int64 *)a2;
      else
        v9 = *(__int64 **)a2;
      v7 = *((_QWORD *)a2 + 2);
      if ( *((_QWORD *)a2 + 3) < 8uLL )
        v10 = (__int64 *)a2;
      else
        v10 = *(__int64 **)a2;
      v11 = (__int64)((__int64)v9 + 2 * v7 - (_QWORD)v10) >> 1;
      if ( v6 <= v11 )
      {
        memcpy_s_0(v10, 2 * v11, a3, 2 * v6);
        v7 = *((_QWORD *)a2 + 2);
      }
    }
    while ( v6 > v7 && v6 );
  }
  if ( v6 > *((_QWORD *)a2 + 2) )
  {
    std::wstring::append(a2, v6 - *((_QWORD *)a2 + 2), 0);
  }
  else
  {
    *((_QWORD *)a2 + 2) = v6;
    if ( *((_QWORD *)a2 + 3) < 8uLL )
      v12 = (__int64 *)a2;
    else
      v12 = *(__int64 **)a2;
    *((_WORD *)v12 + v6) = 0;
  }
  return a2;
}
