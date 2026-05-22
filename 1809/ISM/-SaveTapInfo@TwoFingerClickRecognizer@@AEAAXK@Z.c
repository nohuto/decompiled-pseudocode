/*
 * XREFs of ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1800D9424
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D8FE0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerClickRecognizer::SaveTapInfo(TwoFingerClickRecognizer *this, int a2)
{
  int v4; // ecx
  int v5; // edx
  __int16 v6; // r8
  unsigned int v7; // r10d
  char v8; // cl
  __int16 v9; // ax
  __int16 v10; // r8
  __int16 v11; // ax
  __int64 v12; // [rsp+8h] [rbp+8h]

  v4 = (*((_DWORD *)this + 11) + *((_DWORD *)this + 13)) / 2;
  LODWORD(v12) = v4;
  v5 = (*((_DWORD *)this + 12) + *((_DWORD *)this + 14)) / 2;
  HIDWORD(v12) = v5;
  *((_WORD *)this + 8) &= 0xFFE7u;
  v6 = *((_WORD *)this + 8) | 1;
  *((_WORD *)this + 8) = v6;
  if ( (v6 & 4) != 0 )
  {
    v7 = *((unsigned __int16 *)this + 34);
    if ( abs32(*((_DWORD *)this + 7) - v4) < v7 && abs32(*((_DWORD *)this + 8) - v5) < v7 )
    {
      v6 |= 2u;
      *((_WORD *)this + 8) = v6;
    }
  }
  else
  {
    *((_WORD *)this + 8) = v6 | 8;
    *((_DWORD *)this + 6) = a2 + *((unsigned __int16 *)this + 35);
    *((_WORD *)this + 8) |= 0x10u;
    v6 = *((_WORD *)this + 8);
  }
  v8 = v6;
  v9 = v6;
  v10 = v6 | 4;
  v11 = v9 & 0xFFFB;
  if ( (v8 & 2) != 0 )
    v10 = v11;
  *((_WORD *)this + 8) = v10;
  if ( (v10 & 2) == 0 )
    *(_QWORD *)((char *)this + 28) = v12;
  *((_DWORD *)this + 5) = 0;
}
