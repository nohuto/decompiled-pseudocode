/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1800E4AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopySid @ 0x180014AC0 (RtlCopySid.c)
 */

__int64 __fastcall RtlCopySidAndAttributesArray(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char *a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int v8; // r15d
  _DWORD *v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // r14d

  v8 = 0;
  if ( a1 )
  {
    v11 = (_DWORD *)(a4 + 8);
    v12 = a2 - a4;
    while ( 1 )
    {
      v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v11 + v12 - 8) + 1LL) + 8;
      if ( v13 > a3 )
        return 3221225507LL;
      *((_QWORD *)v11 - 1) = a5;
      *v11 = *(_DWORD *)((char *)v11 + v12);
      a3 -= v13;
      RtlCopySid(v13, a5, *(unsigned __int8 **)((char *)v11 + v12 - 8));
      ++v8;
      a5 += v13;
      v11 += 4;
      if ( v8 >= a1 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *a6 = a5;
    *a7 = a3;
    return 0LL;
  }
}
