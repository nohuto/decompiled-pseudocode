/*
 * XREFs of ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x18010D9D0
 * Callers:
 *     ?TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010DCE8 (-TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010DD58 (-TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x18010B174 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall TwoFingerClickRecognizer::SaveTapInfo(TwoFingerClickRecognizer *this, int a2)
{
  TwoFingerClickRecognizer *v2; // r10
  int v3; // r9d
  int v4; // eax
  GestureRecognizer *v5; // rcx
  unsigned int v6; // r8d
  __int16 v7; // cx
  __int16 v8; // cx
  struct tagPOINT v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v2 = this;
  v3 = (*((_DWORD *)this + 11) + *((_DWORD *)this + 13)) / 2;
  LODWORD(v10) = v3;
  v4 = *((_DWORD *)this + 12) + *((_DWORD *)this + 14);
  v5 = (GestureRecognizer *)*((unsigned __int16 *)this + 8);
  HIDWORD(v10) = v4 / 2;
  LOWORD(v5) = (unsigned __int16)v5 & 0xFFE6 | 1;
  *((_WORD *)v2 + 8) = (_WORD)v5;
  if ( ((unsigned __int8)v5 & 4) != 0 )
  {
    v6 = *((unsigned __int16 *)v2 + 34);
    v9.x = *((_DWORD *)v2 + 7) - v3;
    v9.y = *((_DWORD *)v2 + 8) - v4 / 2;
    if ( !GestureRecognizer::MeetsThreshold(v5, &v9, v6) )
      v7 |= 2u;
  }
  else
  {
    *((_WORD *)v2 + 8) = (unsigned __int16)v5 | 8;
    *((_DWORD *)v2 + 6) = a2 + *((unsigned __int16 *)v2 + 35);
    v7 = *((_WORD *)v2 + 8) | 0x10;
  }
  if ( (v7 & 2) != 0 )
    v8 = v7 & 0xFFFB;
  else
    v8 = v7 | 4;
  *((_WORD *)v2 + 8) = v8;
  if ( (v8 & 2) == 0 )
    *(_QWORD *)((char *)v2 + 28) = v10;
  *((_DWORD *)v2 + 5) = 0;
}
