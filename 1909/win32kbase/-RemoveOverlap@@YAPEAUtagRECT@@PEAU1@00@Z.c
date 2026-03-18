/*
 * XREFs of ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1C019F8E4
 * Callers:
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C019FAF4 (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0052CD4 (PtInRect.c)
 */

struct tagRECT *__fastcall RemoveOverlap(struct tagRECT *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  LONG top; // r9d
  LONG bottom; // r8d
  struct tagRECT *v6; // rbx
  LONG right; // r15d
  int v8; // esi
  int v9; // r13d
  int v10; // ebp
  LONG v11; // r14d
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // r11d
  int v16; // edi
  _DWORD *v17; // rcx
  int v18; // r8d
  int v19; // r9d
  struct tagRECT *v20; // r9
  unsigned int v21; // r8d
  int v22; // edx
  int v23; // ecx
  LONG v24; // eax
  int v25; // ecx
  LONG v26; // r8d
  int v27; // ecx
  int v28; // edx
  bool v29; // zf
  LONG v30; // edx
  unsigned __int64 v32; // [rsp+20h] [rbp-58h]
  LONG left; // [rsp+90h] [rbp+18h]
  unsigned __int64 v35; // [rsp+98h] [rbp+20h]

  top = a1->top;
  bottom = a1->bottom;
  v6 = a1;
  right = a3->right;
  v8 = (a1->right - a1->left) / 2 + a1->left;
  v9 = (bottom - top) / 2 + top;
  v10 = (a2->right - a2->left) / 2 + a2->left;
  LODWORD(v35) = v10;
  v11 = a3->bottom;
  HIDWORD(v35) = a2->top + (a2->bottom - a2->top) / 2;
  v12 = 0;
  left = a3->left;
  if ( right == a1->right )
    v12 = 2;
  v13 = v12 | (v11 == bottom);
  v14 = 0;
  v15 = 1;
  if ( a3->left == a1->left )
    v14 = 2;
  v16 = ((v14 | (a3->top == top)) ^ v13) - 1;
  if ( (v16 & 2) == 0 )
  {
    v19 = a2->top + (a2->bottom - a2->top) / 2;
    goto LABEL_14;
  }
  HIDWORD(v32) = (bottom - top) / 2 + top;
  LODWORD(v32) = (a1->right - a1->left) / 2 + a1->left;
  if ( PtInRect(a3, v32) || PtInRect(v17, v35) )
  {
    v19 = HIDWORD(v35);
    if ( (int)abs32(v8 - v10) >= (int)abs32(v9 - HIDWORD(v35)) )
      goto LABEL_9;
    v16 = 0;
LABEL_14:
    if ( v16 == v15 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( right - left <= v11 - v18 )
  {
LABEL_9:
    v16 = v15;
    goto LABEL_16;
  }
  v19 = HIDWORD(v35);
  v16 = 0;
LABEL_15:
  v8 = v9;
  v10 = v19;
LABEL_16:
  v20 = a2;
  v21 = (unsigned int)v8 >> 31;
  v22 = -v8;
  if ( v8 >= 0 )
    v22 = v8;
  v23 = -v10;
  if ( v10 >= 0 )
    v23 = v10;
  if ( v23 >= v22 )
  {
    v20 = v6;
    v21 = (unsigned int)v10 >> 31;
    v6 = a2;
  }
  if ( v16 == v15 )
  {
    v24 = v6->left;
    if ( v21 )
      v25 = v20->left + v24 - v6->right;
    else
      v25 = v20->right;
    v26 = v6->top;
    v27 = v25 - v24;
    v28 = 0;
  }
  else
  {
    v29 = v21 == 0;
    v26 = v6->top;
    if ( v29 )
      v30 = v20->bottom;
    else
      v30 = v26 + v20->top - v6->bottom;
    v24 = v6->left;
    v28 = v30 - v26;
    v27 = 0;
  }
  v6->right += v27;
  v6->bottom += v28;
  v6->left = v27 + v24;
  v6->top = v26 + v28;
  return v6;
}
