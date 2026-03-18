/*
 * XREFs of ?RemoveGaps@@YAXPEAUtagRECT@@I@Z @ 0x1C0165A94
 * Callers:
 *     AlignRects @ 0x1C0055D24 (AlignRects.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C01657BC (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x1C01659EC (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 */

void __fastcall RemoveGaps(struct tagRECT *a1, int a2)
{
  struct tagRECT **v4; // rdi
  struct tagRECT **v5; // r9
  struct tagRECT *v6; // rbx
  unsigned int v7; // r11d
  struct tagRECT *v8; // r10
  LONG left; // ecx
  int v10; // eax
  unsigned int v11; // edx
  struct tagRECT **v12; // rax
  struct tagRECT *v13; // rcx
  struct tagRECT *v14; // rsi
  struct tagRECT **v15; // rdi
  unsigned __int64 v16; // rbx
  struct tagRECT **v17; // rax
  struct tagRECT *v18; // rdx
  struct tagRECT *v19; // [rsp+20h] [rbp-A8h] BYREF
  struct tagRECT *v20; // [rsp+28h] [rbp-A0h] BYREF

  CenterRectangles(a1, a2);
  v4 = &v19;
  v5 = &v19;
  v6 = &a1[a2];
  v7 = -1;
  v8 = a1;
  if ( a1 < v6 )
  {
    do
    {
      left = v8->left;
      v10 = v8->right - v8->left;
      *v4 = v8;
      v11 = abs32(v8->top + (v8->bottom - v8->top) / 2) + abs32(v10 / 2 + left);
      v12 = v4;
      if ( v11 >= v7 )
        v12 = v5;
      ++v4;
      ++v8;
      v5 = v12;
      if ( v11 >= v7 )
        v11 = v7;
      v7 = v11;
    }
    while ( v8 < v6 );
    if ( v12 != &v19 )
    {
      v13 = *v12;
      *v12 = v19;
      v19 = v13;
    }
  }
  v14 = a1 + 1;
  v15 = &v20;
  if ( v14 < v6 )
  {
    v16 = ((unsigned __int64)((char *)v6 - (char *)v14 - 1) >> 4) + 1;
    do
    {
      v17 = AddNextContiguousRectangle(&v19, v15, a2);
      if ( v17 != v15 )
      {
        v18 = *v17;
        *v17 = *v15;
        *v15 = v18;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
}
