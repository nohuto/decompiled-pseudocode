/*
 * XREFs of ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1800D65B4
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D6290 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::AddPoint(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        struct tagPOINT a3,
        int a4)
{
  char v5; // r11
  char v6; // r9
  int v8; // eax
  __int64 v9; // rcx
  char v10; // al
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  char v13; // cl
  char v14; // al

  v5 = *((_BYTE *)this + 138) & 0xFE;
  *((_BYTE *)this + 138) = v5;
  v6 = 2;
  if ( (v5 & 2) == 0 )
  {
    v9 = *((_QWORD *)a2 + 149);
    v8 = a3.x - v9;
    LODWORD(v9) = *((unsigned __int16 *)this + 79);
    if ( abs32(v8) < (unsigned int)v9 && abs32(a3.y - HIDWORD(v9)) < (unsigned int)v9 )
      v6 = 0;
    *((_BYTE *)this + 138) = v6 | v5 & 0xFD;
  }
  v10 = *((_BYTE *)this + 137);
  if ( v10 == 10 )
  {
    *((struct tagPOINT *)this + 2) = a3;
    *((_DWORD *)this + 6) = a4;
    *((_WORD *)this + 68) = 0;
  }
  else
  {
    if ( v10 == 9 )
      v11 = 0;
    else
      v11 = v10 + 1;
    *((_BYTE *)this + 137) = v11;
    v12 = 3LL * v11;
    *(struct tagPOINT *)((char *)this + 4 * v12 + 16) = a3;
    *((_DWORD *)this + v12 + 6) = a4;
    v13 = *((_BYTE *)this + 136);
    if ( *((_BYTE *)this + 137) == v13 )
    {
      v14 = v13 + 1;
      if ( v13 == 9 )
        v14 = 0;
      *((_BYTE *)this + 136) = v14;
    }
  }
}
