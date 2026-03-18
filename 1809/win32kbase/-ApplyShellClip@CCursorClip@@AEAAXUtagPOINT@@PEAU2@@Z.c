/*
 * XREFs of ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C003D65C
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C003D420 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C003D6B4 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 */

void __fastcall CCursorClip::ApplyShellClip(CCursorClip *this, struct tagPOINT a2, struct tagPOINT *a3)
{
  unsigned __int64 v4; // r9
  const struct tagRECT *v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // ebx
  int v8; // edi
  __int64 v9; // rbp
  const struct tagRECT *v10; // r14
  unsigned int v11; // esi
  LONG v12; // r10d
  struct tagPOINT *v13; // r11
  int right; // eax
  LONG top; // eax
  int v16; // eax
  LONG bottom; // r8d

  *a3 = a2;
  v4 = (unsigned __int64)a2;
  v5 = 0LL;
  v6 = -1;
  v7 = 0;
  v8 = *((_DWORD *)this + 22);
  if ( !v8 )
    return;
  v9 = *((_QWORD *)this + 10);
  while ( 1 )
  {
    v10 = v5;
    v11 = v6;
    if ( PtInRect((_DWORD *)(v9 + 16LL * v7), v4) )
      break;
    v6 = 0;
    if ( (int)v4 >= v5->left )
    {
      right = v5->right;
      if ( (int)v4 >= right )
        v6 = v4 - right + 1;
    }
    else
    {
      v6 = v5->left - v4;
    }
    top = v5->top;
    if ( v12 < top )
    {
      v16 = top - v12;
LABEL_13:
      v6 += v16;
      goto LABEL_14;
    }
    bottom = v5->bottom;
    if ( v12 >= bottom )
    {
      v16 = v12 - bottom;
      ++v6;
      goto LABEL_13;
    }
LABEL_14:
    if ( v6 >= v11 )
      v5 = v10;
    ++v7;
    if ( v6 >= v11 )
      v6 = v11;
    if ( v7 == v8 )
      goto LABEL_21;
  }
  v5 = 0LL;
LABEL_21:
  if ( v5 )
    CCursorClip::ClipPointToRect((struct tagPOINT)v4, v5, v13);
}
