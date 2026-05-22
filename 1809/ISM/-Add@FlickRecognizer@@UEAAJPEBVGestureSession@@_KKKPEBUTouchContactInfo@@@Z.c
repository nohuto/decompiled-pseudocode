/*
 * XREFs of ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D6290
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1800D6424 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1800D65B4 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 */

__int64 __fastcall FlickRecognizer::Add(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // bp
  int v8; // ecx
  unsigned int v9; // edx
  unsigned __int64 v10; // r10
  char v11; // al
  char v12; // al
  int v13; // ecx
  char v14; // al
  unsigned __int8 v15; // al
  char v16; // al

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    v8 = *((_DWORD *)a2 + 3) & 0x7880;
    if ( v8 )
      v9 = *((_DWORD *)a2 + 187);
    else
      v9 = 1;
    v10 = -(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFE70uLL;
    if ( (a3 & 1) != 0 )
    {
      v11 = *((_BYTE *)this + 138);
      if ( (v11 & 1) == 0 )
      {
        *((_DWORD *)this + 35) = 0;
        *((_WORD *)this + 68) = 2570;
        *((_BYTE *)this + 138) = v11 & 0xF8 | 1;
      }
      *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v10 + 1154);
    }
    if ( v9 <= 1 )
    {
      v13 = *(unsigned __int16 *)((char *)a2 + v10 + 1154);
      if ( v13 != *((_DWORD *)this + 35) )
      {
        v14 = *((_BYTE *)this + 138);
        if ( (v14 & 1) == 0 )
        {
          *((_DWORD *)this + 35) = 0;
          *((_WORD *)this + 68) = 2570;
          *((_BYTE *)this + 138) = v14 & 0xF8 | 1;
          LOWORD(v13) = *(_WORD *)((char *)a2 + v10 + 1154);
        }
        *((_DWORD *)this + 35) = (unsigned __int16)v13;
      }
      FlickRecognizer::AddPoint(this, a2, *(struct tagPOINT *)((char *)a2 + v10 + 1156), a4);
      if ( (v5 & 4) != 0 )
      {
        v15 = *((_BYTE *)this + 137);
        if ( v15 != 10 && a4 - *((_DWORD *)this + 3 * v15 + 6) > *((unsigned __int16 *)this + 81) )
        {
          v16 = *((_BYTE *)this + 138);
          if ( (v16 & 1) == 0 )
          {
            *((_DWORD *)this + 35) = 0;
            *((_WORD *)this + 68) = 2570;
            *((_BYTE *)this + 138) = v16 & 0xF8 | 1;
          }
        }
        FlickRecognizer::CheckForFlick(this, a2);
      }
    }
    else
    {
      v12 = *((_BYTE *)this + 138);
      if ( (v12 & 1) == 0 )
      {
        *((_DWORD *)this + 35) = 0;
        *((_WORD *)this + 68) = 2570;
        *((_BYTE *)this + 138) = v12 & 0xF8 | 1;
      }
    }
  }
  return 0LL;
}
