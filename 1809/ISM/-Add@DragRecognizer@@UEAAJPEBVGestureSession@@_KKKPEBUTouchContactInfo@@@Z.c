/*
 * XREFs of ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D7730
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1800D7890 (-Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1800D799C (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall DragRecognizer::Add(DragRecognizer *this, const struct GestureSession *a2, __int16 a3)
{
  unsigned int v5; // esi
  int v6; // ecx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  int v9; // ebp
  bool v10; // r12
  bool v11; // r9
  const struct tagPOINT *v12; // r8
  char v13; // r9
  int v14; // ecx
  char v15; // cl
  char v16; // cl

  if ( (a3 & 0x100) == 0 )
  {
    v5 = 1;
    v6 = *((_DWORD *)a2 + 3) & 0x7880;
    if ( v6 )
      v5 = *((_DWORD *)a2 + 187);
    v7 = -(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFE70uLL;
    v8 = v7 + 1156;
    v9 = a3 & 1;
    if ( (a3 & 1) != 0 )
      DragRecognizer::Reset(this, a2);
    v10 = v5 == 1;
    if ( v5 == 1 || v9 )
    {
      v11 = 0;
      v12 = (const struct tagPOINT *)((char *)a2 + v8);
      if ( (*((_BYTE *)this + 30) & 1) != 0 )
      {
        v14 = *((_DWORD *)this + 8);
      }
      else
      {
        v13 = *((_BYTE *)this + 30) | 1;
        *((_BYTE *)this + 30) = v13;
        *((struct tagPOINT *)this + 7) = *v12;
        *((_QWORD *)this + 8) = *(_QWORD *)((char *)a2 + v8);
        v14 = *(unsigned __int16 *)((char *)a2 + v7 + 1154);
        *((_DWORD *)this + 8) = v14;
        v11 = (v13 & 2) != 0;
      }
      if ( *(unsigned __int16 *)((char *)a2 + v7 + 1154) == v14 )
        DragRecognizer::AddPoint(this, a2, v12, v11);
      else
        v10 = 0;
    }
    if ( !v10 )
    {
      v15 = *((_BYTE *)this + 30);
      if ( (v15 & 1) != 0 )
      {
        v16 = v15 & 0xFE;
        *((_BYTE *)this + 30) = v16;
        if ( (v16 & 2) != 0 )
        {
          v16 |= 8u;
          *((_BYTE *)this + 30) = v16;
        }
        if ( v5 > 1 && (v16 & 6) == 2 )
        {
          *((_DWORD *)this + 18) &= 0xFFFFFFCF;
          *((_BYTE *)this + 30) = v16 | 4;
        }
      }
    }
  }
  return 0LL;
}
