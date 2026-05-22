/*
 * XREFs of ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x18010C19C
 * Callers:
 *     ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010C060 (-Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x18010C394 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x18010C3C4 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

void __fastcall DragRecognizer::AddPoint(
        DragRecognizer *this,
        const struct GestureSession *a2,
        const struct tagPOINT *a3,
        char a4)
{
  LONG v4; // edi
  LONG v7; // eax
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r11
  char v14; // dl
  char v15; // si
  unsigned __int8 v16; // r9
  bool v17; // zf
  bool v18; // sf
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r14d
  int v22; // edx
  int v23; // r8d
  int v24; // edi
  int v25; // edx
  int v26; // r8d
  int v27; // r10d
  int v28; // edx
  LONG y; // eax
  __int16 v30; // ax
  struct tagPOINT v31; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3->x - *((_DWORD *)this + 14);
  v31.x = v4;
  v7 = a3->y - *((_DWORD *)this + 15);
  v9 = *((unsigned __int16 *)this + 18);
  v10 = *((unsigned __int16 *)this + 19);
  v31.y = v7;
  if ( !GestureRecognizer::ExceedsThreshold(*(GestureRecognizer **)&v31, &v31, v9, v10) && !a4 )
    return;
  v14 = *(_BYTE *)(v13 + 30);
  v15 = 0;
  *(struct tagPOINT *)(v13 + 56) = *a3;
  if ( (v14 & 2) == 0 )
  {
    *(_BYTE *)(v13 + 30) = v14 | 2;
    v15 = 1;
    if ( abs32(v4) <= v12 )
    {
      v19 = HIDWORD(v11);
      v16 = 0;
      v17 = (_DWORD)v19 == 0;
      v18 = (v19 & 0x80000000) != 0LL;
    }
    else
    {
      v16 = 1;
      v17 = v4 == 0;
      v18 = v4 < 0;
    }
    v20 = *((_QWORD *)a2 + 149);
    v21 = *(unsigned __int16 *)(v13 + 24);
    v22 = *(unsigned __int16 *)(v13 + 22) >> 1;
    v23 = v22 + *(unsigned __int16 *)(v13 + 16);
    v24 = *(unsigned __int16 *)(v13 + 22) - v22;
    v25 = -v23;
    if ( !v18 && !v17 )
      v25 = v23;
    if ( v16 )
    {
      v26 = HIDWORD(v20) + v21;
      v27 = v24 + v25 + v20;
      v11 = (unsigned int)(HIDWORD(v20) - v21);
      v28 = v20 + v25 - v24;
    }
    else
    {
      v11 = (unsigned int)(v25 - v24 + HIDWORD(v20));
      v27 = v21 + v20;
      v26 = v24 + v25 + HIDWORD(v20);
      v28 = v20 - v21;
    }
    *(_DWORD *)(v13 + 40) = v28;
    *(_DWORD *)(v13 + 48) = v27;
    *(_DWORD *)(v13 + 44) = v11;
    *(_DWORD *)(v13 + 52) = v26;
    v14 = *(_BYTE *)(v13 + 30);
    *(_QWORD *)(v13 + 64) = *(_QWORD *)(v13 + 56);
    *(_DWORD *)(v13 + 72) &= ~(16 * v16 + 16);
  }
  LOBYTE(v11) = v14;
  if ( (v14 & 6) == 2 )
  {
    if ( !*(_WORD *)(v13 + 22) )
    {
      LOBYTE(v11) = v14 | 4;
LABEL_22:
      *(_BYTE *)(v13 + 30) = v11;
      goto LABEL_23;
    }
    if ( a3->x < *(_DWORD *)(v13 + 40) || a3->x > *(_DWORD *)(v13 + 48) )
    {
      LOBYTE(v11) = v14 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x20u;
      goto LABEL_22;
    }
    y = a3->y;
    if ( y < *(_DWORD *)(v13 + 44) || (LOBYTE(v11) = v14, y > *(_DWORD *)(v13 + 52)) )
    {
      LOBYTE(v11) = v14 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x10u;
      goto LABEL_22;
    }
  }
LABEL_23:
  v30 = *(_WORD *)(v13 + 28);
  *(_WORD *)(v13 + 36) = v30;
  *(_WORD *)(v13 + 38) = v30;
  v31.x = *(_DWORD *)(v13 + 56) - *(_DWORD *)(v13 + 64);
  v31.y = *(_DWORD *)(v13 + 60) - *(_DWORD *)(v13 + 68);
  if ( v15 || a4 || GestureRecognizer::ExceedsThreshold((GestureRecognizer *)v11, &v31, *(unsigned __int16 *)(v13 + 26)) )
    *(_BYTE *)(v13 + 30) = v11 | 8;
}
