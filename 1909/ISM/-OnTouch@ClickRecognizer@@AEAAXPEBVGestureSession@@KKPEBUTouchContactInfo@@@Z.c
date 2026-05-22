/*
 * XREFs of ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x18010BB98
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010B780 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x18010B840 (-CancelTapAndHold@ClickRecognizer@@AEAAXXZ.c)
 *     ?ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z @ 0x18010B888 (-ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z.c)
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x18010BD94 (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

void __fastcall ClickRecognizer::OnTouch(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned int a3,
        int a4,
        const struct TouchContactInfo *a5)
{
  unsigned int v6; // r9d
  __int64 v7; // r10
  __int16 v8; // r11
  __int64 v9; // r10
  unsigned int v10; // eax
  __int64 v11; // rcx
  struct tagPOINT v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+40h] [rbp+18h] BYREF

  *((_DWORD *)this + 32) = a3;
  if ( a4 != 1 || (*((_WORD *)this + 8) & 2) != 0 )
  {
    ClickRecognizer::CancelTapAndHold(this);
    *(_WORD *)(v11 + 16) |= 2u;
  }
  else if ( (unsigned int)(((int)(*((_DWORD *)this + 5) << 28) >> 28) - 1) <= 3 )
  {
    v6 = *((unsigned __int16 *)this + 18);
    v12 = (struct tagPOINT)*((_QWORD *)a2 + 149);
    if ( ClickRecognizer::PointsWithinThreshold(this, &v12, (const struct tagPOINT *)((char *)a5 + 4), v6) )
    {
      if ( a3 >= *(_DWORD *)(v7 + 132) )
      {
        v13 = 0;
        *(_WORD *)(v7 + 16) = v8 & 0xFDFF;
        if ( (int)ClickRecognizer::ChangeTapAndHoldState((ClickRecognizer *)v7, &v13) >= 0 )
        {
          v10 = v13;
          if ( v13 )
          {
            *(_WORD *)(v9 + 16) |= 0x200u;
            *(_DWORD *)(v9 + 132) += v10;
          }
        }
      }
    }
    else
    {
      ClickRecognizer::CancelTapAndHold((ClickRecognizer *)v7);
    }
  }
}
