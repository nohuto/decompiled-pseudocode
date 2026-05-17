/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180070A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlDowncaseUnicodeChar_0 @ 0x180070AD4 (RtlDowncaseUnicodeChar_0.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  unsigned int v7; // r10d
  __int16 v8; // ax
  __int64 v9; // r9
  unsigned int v11; // eax
  __int64 v12; // rax

  v5 = 0;
  if ( a3 )
  {
    v11 = *a2;
    *(_WORD *)(a1 + 2) = v11;
    v12 = sub_18006D6B8(v11);
    *(_QWORD *)(a1 + 8) = v12;
    if ( !v12 )
      return 3221225495LL;
    v6 = *a2;
  }
  else
  {
    v6 = *a2;
    if ( *a2 > *(_WORD *)(a1 + 2) )
      return 2147483653LL;
  }
  v7 = v6 >> 1;
  while ( v5 < v7 )
  {
    v8 = RtlDowncaseUnicodeChar_0(*(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v5));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v9) = v8;
    ++v5;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
