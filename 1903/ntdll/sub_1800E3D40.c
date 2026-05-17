/*
 * XREFs of sub_1800E3D40 @ 0x1800E3D40
 * Callers:
 *     RtlUpcaseUnicodeToMultiByteN @ 0x180061FB0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180062010 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 */

__int64 __fastcall sub_1800E3D40(int a1, unsigned int a2, _DWORD *a3, unsigned __int16 *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // r11d
  _BYTE *v9; // r10
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int16 v15; // dx
  unsigned __int64 v16; // rax
  unsigned __int16 v17; // cx
  __int16 v18; // dx
  unsigned int v19; // eax

  v5 = a5;
  v8 = a2;
  LODWORD(v9) = a1;
  if ( a5 )
  {
    v11 = qword_180166950;
    v12 = qword_180166540;
    v13 = qword_180166530;
    do
    {
      if ( !v8 )
        break;
      v14 = *a4++;
      v15 = *(_WORD *)(v11 + 2 * v14);
      v16 = (unsigned __int64)v15 >> 8;
      if ( word_180163EE0[v16] )
        v17 = *(_WORD *)(v12 + 2 * ((unsigned __int8)v15 + (unsigned __int64)(unsigned __int16)word_180163EE0[v16]));
      else
        v17 = *(_WORD *)(v13 + 2LL * (unsigned __int8)v15);
      v18 = *(_WORD *)(v11 + 2LL * sub_18001A234(v17));
      if ( HIBYTE(v18) )
      {
        v19 = v8--;
        if ( v19 < 2 )
          break;
        *v9++ = HIBYTE(v18);
      }
      *v9 = v18;
      --v8;
      LODWORD(v9) = (_DWORD)v9 + 1;
      --v5;
    }
    while ( v5 );
  }
  if ( a3 )
    *a3 = (_DWORD)v9 - a1;
  return v8 < v5 ? 0x80000005 : 0;
}
