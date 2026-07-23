/*
 * XREFs of _RtlpMuiRegValidatePartialLanguage @ 0x180103554
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x180102F30 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x18007E868 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidatePartialLanguage(__int64 a1, int a2)
{
  int v4; // edi
  char v5; // r15
  _WORD *v6; // rbx
  int v7; // esi
  __int16 *v8; // r14
  unsigned __int8 v9; // dl
  __int64 v10; // rbp
  __int16 v11; // r8
  __int16 v12; // r8
  __int16 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * a2);
  v7 = 0;
  v8 = v6 + 6;
  do
  {
    v9 = (v6[4] >> (2 * v5)) & 3;
    if ( !v9 )
      goto LABEL_13;
    if ( v9 == 2 )
    {
      if ( *v8 == a2 )
      {
        v6[4] &= ~(3 << v7);
        goto LABEL_13;
      }
LABEL_12:
      ++v4;
      goto LABEL_13;
    }
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *v8;
    v14 = -1;
    if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v10, v9, v11, &v14) < 0 )
      goto LABEL_12;
    v12 = v14;
    if ( v14 >= 0 && v14 < (int)*(unsigned __int16 *)(v10 + 6) && v14 != a2 )
    {
      ++v4;
      if ( (*(_BYTE *)(28LL * v14 + *(_QWORD *)(v10 + 16)) & 1) != 0 )
      {
        v6[4] = (2 << v7) | v6[4] & ~(3 << v7);
        *v8 = v12;
      }
    }
LABEL_13:
    ++v5;
    ++v8;
    v7 += 2;
  }
  while ( v7 < 8 );
  if ( v4 >= 1 )
    return 0LL;
  *v6 |= 0x1000u;
  return 3221225473LL;
}
