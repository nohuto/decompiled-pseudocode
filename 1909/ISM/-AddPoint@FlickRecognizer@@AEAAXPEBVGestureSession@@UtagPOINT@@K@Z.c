/*
 * XREFs of ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x18010AE58
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010AD00 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x18010B174 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall FlickRecognizer::AddPoint(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        struct tagPOINT a3,
        int a4)
{
  FlickRecognizer *v4; // r10
  int v5; // r11d
  __int64 v6; // rax
  bool v7; // al
  char v8; // cl
  char v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  char v12; // cl
  char v13; // al
  struct tagPOINT v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  v5 = a4;
  LOBYTE(this) = *((_BYTE *)this + 138) & 0xFE;
  *((_BYTE *)v4 + 138) = (_BYTE)this;
  if ( ((unsigned __int8)this & 2) == 0 )
  {
    v6 = *((_QWORD *)a2 + 149);
    v15.x = a3.x - v6;
    v15.y = a3.y - HIDWORD(v6);
    v7 = GestureRecognizer::MeetsThreshold(this, &v15, *((unsigned __int16 *)v4 + 79));
    *((_BYTE *)v4 + 138) = (2 * v7) | v8 & 0xFD;
  }
  v9 = *((_BYTE *)v4 + 137);
  if ( v9 == 10 )
  {
    *((struct tagPOINT *)v4 + 2) = a3;
    *((_DWORD *)v4 + 6) = v5;
    *((_WORD *)v4 + 68) = 0;
  }
  else
  {
    if ( v9 == 9 )
      v10 = 0;
    else
      v10 = v9 + 1;
    *((_BYTE *)v4 + 137) = v10;
    v11 = 3LL * v10;
    *(struct tagPOINT *)((char *)v4 + 4 * v11 + 16) = a3;
    *((_DWORD *)v4 + v11 + 6) = v5;
    v12 = *((_BYTE *)v4 + 136);
    if ( *((_BYTE *)v4 + 137) == v12 )
    {
      v13 = v12 + 1;
      if ( v12 == 9 )
        v13 = 0;
      *((_BYTE *)v4 + 136) = v13;
    }
  }
}
