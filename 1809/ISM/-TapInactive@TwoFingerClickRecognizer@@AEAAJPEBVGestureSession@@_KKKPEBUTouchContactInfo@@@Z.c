/*
 * XREFs of ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D91BC
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8FE0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TwoFingerClickRecognizer::TapInactive(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  _QWORD *v7; // r10
  __int64 v8; // rsi
  __int64 *v9; // r9
  _DWORD *v10; // r11
  __int64 v11; // rax
  unsigned int v12; // r9d

  if ( (a3 & 1) != 0 )
  {
    if ( a5 <= 2 )
    {
      if ( a5 )
      {
        v7 = (_QWORD *)((char *)this + 44);
        v8 = a5;
        v9 = (__int64 *)((char *)a6 + 4);
        v10 = (_DWORD *)((char *)this + 36);
        do
        {
          *v10++ = *((unsigned __int16 *)v9 - 1);
          v11 = *v9;
          v9 += 5;
          *v7++ = v11;
          --v8;
        }
        while ( v8 );
      }
      if ( a5 == 1 )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 31);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 1;
        return 0LL;
      }
      v12 = *((unsigned __int16 *)this + 30);
      if ( abs32(*((_DWORD *)a6 + 1) - *((_DWORD *)a6 + 11)) <= v12
        && abs32(*((_DWORD *)a6 + 2) - *((_DWORD *)a6 + 12)) <= v12
        && *((_WORD *)this + 30) )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 32);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 2;
        return 0LL;
      }
    }
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  return 0LL;
}
