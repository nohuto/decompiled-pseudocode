/*
 * XREFs of ?UpdateWindowRegion@CTopLevelWindow@@AEAAXXZ @ 0x1800141E8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     floor_0 @ 0x18004E25A (floor_0.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowRegion(CTopLevelWindow *this)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  float v4; // xmm1_4
  int v5; // eax
  int v6; // eax
  int v7; // eax
  BOOL v8; // eax
  bool v9; // di
  HRGN v10; // rsi
  RECT rc1; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 90);
  if ( *(_QWORD *)(v1 + 40) )
  {
    v3 = *((_BYTE *)this + 240) & 8 | 0x136LL;
    rc1 = *(RECT *)(v1 + 180);
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v1 + 304) - 0.0)) & _xmm);
    if ( v4 > 0.0000011920929 )
    {
      if ( *(int *)((char *)this + 2 * v3) < 0 )
        rc1.left += (int)floor_0((float)((float)*(int *)((char *)this + 2 * v3) / *(float *)(v1 + 304)) + 0.5);
      v5 = *(_DWORD *)((char *)this + 2 * v3 + 4);
      if ( v5 < 0 )
        rc1.right -= (int)floor_0((float)((float)v5 / *(float *)(v1 + 304)) + 0.5);
      v6 = *(_DWORD *)((char *)this + 2 * v3 + 8);
      if ( v6 < 0 )
        rc1.top += (int)floor_0((float)((float)v6 / *(float *)(v1 + 304)) + 0.5);
      v7 = *(_DWORD *)((char *)this + 2 * v3 + 12);
      if ( v7 < 0 )
        rc1.bottom -= (int)floor_0((float)((float)v7 / *(float *)(v1 + 304)) + 0.5);
    }
    v8 = EqualRect(&rc1, (const RECT *)(v1 + 180));
    v9 = v8;
    if ( (*((_BYTE *)this + 240) & 4) == 0 || !v8 )
    {
      if ( v8 )
        v10 = 0LL;
      else
        v10 = CreateRectRgnIndirect(&rc1);
      if ( !(unsigned int)SetWindowRgnEx(*(_QWORD *)(*((_QWORD *)this + 90) + 40LL), v10, 1LL) )
      {
        if ( v10 )
          DeleteObject(v10);
      }
      *((_BYTE *)this + 240) &= ~4u;
      *((_BYTE *)this + 240) |= 4 * v9;
    }
  }
}
