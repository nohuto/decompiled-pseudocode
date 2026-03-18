/*
 * XREFs of ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C0213774
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C000FA60 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C0213950 (GetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindGID(struct tagGESTURECONFIGLIST **a1, int a2, struct tagGESTURECONFIGLIST **a3)
{
  unsigned int v3; // r10d
  struct tagGESTURECONFIGLIST *v4; // r9
  struct tagGESTURECONFIGLIST *v5; // r11
  bool v6; // zf
  struct tagGESTURECONFIGLIST *v7; // rcx
  __int64 result; // rax

  v3 = 0;
  v4 = 0LL;
  v5 = a1[a2 & 7];
  while ( v5 )
  {
    v6 = *((_DWORD *)v5 + 2) == a2;
    v7 = v5;
    v5 = *(struct tagGESTURECONFIGLIST **)v5;
    if ( v6 )
      v3 = 1;
    else
      v7 = v4;
    v4 = v7;
  }
  result = v3;
  *a3 = v4;
  return result;
}
