/*
 * XREFs of ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180004300
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180004224 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180004500 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 */

bool __fastcall CTopLevelWindow::DoHitTest(LONG *this, const struct tagPOINT *a2, LONG **a3, unsigned int *a4)
{
  LONG *v7; // r13
  LONG x; // r14d
  _DWORD *v9; // rax
  LONG y; // ecx
  _DWORD *v12; // rcx
  POINT v13; // rdx
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // eax
  int v17; // eax
  LONG **v18; // rdi
  LONG v19; // eax
  __int64 v20; // r15
  LONG *v21; // rbx
  int SystemMetricsForDpi; // edi
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  LONG *v26; // rcx
  int v27; // eax
  POINT v28; // rdx
  POINT pt; // [rsp+20h] [rbp-49h] BYREF
  unsigned int *v30; // [rsp+28h] [rbp-41h]
  RECT v31; // [rsp+30h] [rbp-39h] BYREF
  RECT rc; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v33[5]; // [rsp+50h] [rbp-19h] BYREF

  v30 = a4;
  CVisual::DoHitTest((CVisual *)this, a2, (struct CVisual **)&v31, (unsigned int *)&pt);
  v7 = *(LONG **)&v31.left;
  x = pt.x;
  if ( *(_QWORD *)&v31.left && pt.x == -2 )
  {
    if ( a2->x >= this[147] && a2->x < this[30] - this[148] )
    {
      y = a2->y;
      if ( y >= *(_DWORD *)(*((_QWORD *)this + 90) + 96LL) && y < this[149] )
        x = 2;
    }
    v12 = (_DWORD *)*((_QWORD *)this + 90);
    v13 = *a2;
    *(_QWORD *)&rc.left = 0LL;
    v14 = v12[14] - v12[12];
    if ( v14 < 0 )
      v14 = 0;
    rc.right = v14;
    v15 = v12[15] - v12[13];
    if ( v15 < 0 )
      v15 = 0;
    rc.bottom = v15;
    if ( !PtInRect(&rc, v13) )
    {
      x = 18;
      if ( a2->y < 0 )
        x = 2;
    }
    v16 = this[146];
    if ( (v16 & 0x20) != 0 )
    {
      if ( (v16 & 0x20000) != 0 )
        v17 = this[30] - a2->x - 1;
      else
        v17 = a2->x;
      pt.x = v17;
      v18 = (LONG **)v33;
      v19 = a2->y;
      v20 = 5LL;
      pt.y = v19;
      v33[0] = *((_QWORD *)this + 65);
      v33[1] = *((_QWORD *)this + 60);
      v33[2] = *((_QWORD *)this + 61);
      v33[3] = *((_QWORD *)this + 62);
      v33[4] = *((_QWORD *)this + 63);
      do
      {
        v21 = *v18;
        if ( *v18 )
        {
          v31.left = v21[28];
          v31.top = this[161];
          v31.right = v21[28] + v21[30];
          v31.bottom = v21[29] + v21[31];
          if ( v21 == *((LONG **)this + 65) )
          {
            v31.left = this[159];
          }
          else if ( v21 == *((LONG **)this + 63) )
          {
            v31.right = this[30] - this[160];
          }
          if ( PtInRect(&v31, pt) )
          {
            x = v21[48];
            v7 = v21;
          }
        }
        ++v18;
        --v20;
      }
      while ( v20 );
    }
    else if ( *((_QWORD *)this + 65) )
    {
      SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
      v23 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 90) + 324LL));
      v24 = (SystemMetricsForDpi - v23 - GetSystemMetrics(46)) / 2;
      v25 = 0;
      if ( v24 >= 0 )
        v25 = v24;
      if ( v25 > 0 )
      {
        v26 = (LONG *)*((_QWORD *)this + 65);
        v31.left = v26[28];
        v31.top = v26[29] - v25;
        v31.right = v26[28] + v26[30];
        v27 = v25 + v26[31];
        v28 = *a2;
        v31.bottom = v26[29] + v27;
        if ( PtInRect(&v31, v28) )
        {
          v7 = (LONG *)*((_QWORD *)this + 65);
          x = v7[48];
        }
      }
    }
  }
  v9 = v30;
  *a3 = v7;
  *v9 = x;
  return v7 != 0LL;
}
