/*
 * XREFs of VrpFindNamespaceNode @ 0x14080B714
 * Callers:
 *     VrpFindBestMatchNamespaceNode @ 0x14080B6D4 (VrpFindBestMatchNamespaceNode.c)
 *     VrpFindExactNamespaceNode @ 0x14080B6F4 (VrpFindExactNamespaceNode.c)
 *     VrpTranslatePath @ 0x14080DD70 (VrpTranslatePath.c)
 * Callees:
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     VrpComparePath @ 0x14080F2D4 (VrpComparePath.c)
 */

__int64 __fastcall VrpFindNamespaceNode(ULONGLONG *a1, __int64 a2, int a3, ULONGLONG *a4, unsigned __int64 *a5)
{
  ULONGLONG v5; // rax
  ULONGLONG v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v13; // r8
  ULONGLONG v14; // rdx
  __int64 v15; // rsi
  int v16; // eax
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1[6];
  v6 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      if ( v6 < v5 )
      {
        if ( ULongLongMult(a1[5], v6, &pullResult) < 0 || (v14 = a1[9], v14 + pullResult < v14) )
          v13 = 0LL;
        else
          v13 = (_QWORD *)(v14 + pullResult);
      }
      v15 = *v13;
      v16 = VrpComparePath(a2, *v13, &v18);
      if ( !v16 )
        break;
      if ( a3 == 1 && v18 > v7 )
      {
        v7 = v18;
        v8 = v15;
      }
      if ( v16 >= 0 )
      {
        v5 = a1[6];
        if ( ++v6 < v5 )
          continue;
      }
      goto LABEL_15;
    }
    v7 = v18;
    v8 = v15;
  }
LABEL_15:
  if ( a5 )
    *a5 = v7;
  if ( a4 )
    *a4 = v6;
  return v8;
}
