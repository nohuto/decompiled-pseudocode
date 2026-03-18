/*
 * XREFs of ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C006756C
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C0067330 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 * Callees:
 *     PtInRect @ 0x1C0067544 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C00675C0 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 */

void __fastcall CCursorClip::ApplyShellClip(CCursorClip *this, struct tagPOINT a2, struct tagPOINT *a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // eax
  const struct tagRECT *v6; // rcx
  unsigned int v7; // r11d
  int v8; // ebx
  __int64 v9; // rsi
  const struct tagRECT *v10; // rbp
  unsigned int v11; // edi
  struct tagPOINT *v12; // r10
  int v13; // r11d
  int right; // r8d
  LONG y; // edx
  LONG top; // r8d
  LONG bottom; // r8d

  v3 = (unsigned __int64)a2;
  v4 = -1;
  *a3 = (struct tagPOINT)v3;
  v6 = 0LL;
  v7 = 0;
  v8 = *((_DWORD *)this + 22);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 10);
    while ( 1 )
    {
      v10 = v6;
      v11 = v4;
      v4 = PtInRect((_DWORD *)(v9 + 16LL * v7), v3);
      if ( v4 )
        break;
      if ( (int)v3 >= v6->left )
      {
        right = v6->right;
        if ( (int)v3 >= right )
          v4 = v3 - right + 1;
      }
      else
      {
        v4 = v6->left - v3;
      }
      y = v12->y;
      top = v6->top;
      if ( y >= top )
      {
        bottom = v6->bottom;
        if ( y >= bottom )
          v4 += y - bottom + 1;
      }
      else
      {
        v4 += top - y;
      }
      if ( v4 >= v11 )
        v6 = v10;
      v7 = v13 + 1;
      if ( v4 >= v11 )
        v4 = v11;
      if ( v7 == v8 )
        goto LABEL_20;
    }
    v6 = 0LL;
LABEL_20:
    if ( v6 )
      CCursorClip::ClipPointToRect((struct tagPOINT)v3, v6, v12);
  }
}
