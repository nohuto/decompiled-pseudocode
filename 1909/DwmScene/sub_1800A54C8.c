/*
 * XREFs of sub_1800A54C8 @ 0x1800A54C8
 * Callers:
 *     sub_1800D45C8 @ 0x1800D45C8 (sub_1800D45C8.c)
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A54C8(_QWORD *Src, _QWORD **a2)
{
  _BYTE *v4; // rbx
  char v5; // bp
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  const void *v8; // rdx
  __int64 **v9; // rax
  __int64 i; // rax
  __int64 *j; // rcx

  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  if ( Src[3] )
  {
    v4 = Src;
    if ( Src[3] >= 0x10uLL )
      v4 = (_BYTE *)*Src;
    Src[2] = 1LL;
    memmove(v4, "{", 1uLL);
    v4[1] = 0;
  }
  else
  {
    sub_18000E168(Src, 1uLL, 0LL, "{");
  }
  v5 = 0;
  v6 = *a2;
  v7 = (_QWORD *)*v6;
  while ( v7 != v6 )
  {
    if ( v5 )
      std::string::append(Src, ",", 1uLL);
    else
      v5 = 1;
    v8 = v7 + 4;
    if ( v7[7] >= 0x10uLL )
      v8 = (const void *)v7[4];
    std::string::append(Src, v8, v7[6]);
    v9 = (__int64 **)v7[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v7 = (_QWORD *)i;
      v7 = (_QWORD *)i;
    }
    else
    {
      v7 = (_QWORD *)v7[2];
      for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v7 = j;
    }
  }
  std::string::append(Src, "}", 1uLL);
  return Src;
}
