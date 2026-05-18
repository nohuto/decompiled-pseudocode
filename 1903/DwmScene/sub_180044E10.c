/*
 * XREFs of sub_180044E10 @ 0x180044E10
 * Callers:
 *     sub_180045004 @ 0x180045004 (sub_180045004.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180044E10(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = operator new(0x18uLL);
    if ( v5 )
    {
      v5[1] = 0LL;
      *((_DWORD *)v5 + 2) = 1;
      *((_DWORD *)v5 + 3) = 1;
      *v5 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      v5[2] = v4;
    }
    *a1 = v4;
    a1[1] = v5;
    *a2 = 0LL;
  }
  return a1;
}
