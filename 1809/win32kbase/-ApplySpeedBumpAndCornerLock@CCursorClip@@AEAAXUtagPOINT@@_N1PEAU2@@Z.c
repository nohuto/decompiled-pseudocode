/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C01488E4
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C003D56C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(
        CCursorClip *this,
        struct tagPOINT a2,
        char a3,
        char a4,
        struct tagPOINT *a5)
{
  bool v5; // al
  struct tagPOINT v6; // r10
  LONG x; // ecx
  LONG y; // ecx
  LONG v10; // r8d
  int v11; // ecx
  LONG v12; // r8d
  unsigned __int64 v13; // r10
  int v14; // ecx

  v5 = 0;
  v6 = a2;
  *a5 = a2;
  if ( a3 )
  {
    if ( a2.y < *((_DWORD *)this + 15) + 6 || a2.y >= *((_DWORD *)this + 17) - 6 )
    {
      a2.x = *((_DWORD *)this + 14);
      x = a2.x;
      if ( v6.x > a2.x )
        x = v6.x;
      if ( x >= *((_DWORD *)this + 16) - 1 )
      {
        a2.x = *((_DWORD *)this + 16) - 1;
      }
      else if ( v6.x > a2.x )
      {
        a2.x = v6.x;
      }
      a5->x = a2.x;
    }
    if ( v6.x < *((_DWORD *)this + 14) + 6 || v6.x >= *((_DWORD *)this + 16) - 6 )
    {
      a2.x = *((_DWORD *)this + 15);
      y = a2.x;
      if ( a2.y > a2.x )
        y = a2.y;
      if ( y >= *((_DWORD *)this + 17) - 1 )
      {
        a2.x = *((_DWORD *)this + 17) - 1;
      }
      else if ( a2.y > a2.x )
      {
        a2.x = a2.y;
      }
      a5->y = a2.x;
      a2.x = a5->x;
    }
    v5 = __PAIR64__(a5->y, v6.x) != a2;
  }
  if ( a4 && !v5 )
  {
    v10 = *((_DWORD *)this + 14);
    if ( (int)abs32(v6.x - v10) < 6 || (int)abs32(v6.x - *((_DWORD *)this + 16)) < 6 )
    {
      v11 = *((_DWORD *)this + 14);
      if ( v6.x > v10 )
        v11 = v6.x;
      if ( v11 >= *((_DWORD *)this + 16) - 1 )
      {
        v10 = *((_DWORD *)this + 16) - 1;
      }
      else if ( v6.x > v10 )
      {
        v10 = v6.x;
      }
      a5->x = v10;
    }
    v12 = *((_DWORD *)this + 15);
    v13 = HIDWORD(*(unsigned __int64 *)&v6);
    if ( (int)abs32(v13 - v12) < 6 || (int)abs32(v13 - *((_DWORD *)this + 17)) < 6 )
    {
      v14 = *((_DWORD *)this + 15);
      if ( (int)v13 > v12 )
        v14 = v13;
      if ( v14 >= *((_DWORD *)this + 17) - 1 )
      {
        v12 = *((_DWORD *)this + 17) - 1;
      }
      else if ( (int)v13 > v12 )
      {
        v12 = v13;
      }
      a5->y = v12;
    }
  }
}
