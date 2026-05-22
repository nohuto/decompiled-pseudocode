/*
 * XREFs of ?RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z @ 0x18010B5E4
 * Callers:
 *     ?Add@PinchStretchRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010B370 (-Add@PinchStretchRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x18010B174 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall PinchStretchRecognizer::RecordPoints(
        PinchStretchRecognizer *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  char v3; // r10
  unsigned int v4; // r8d
  struct tagPOINT v5; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_BYTE *)this + 56);
  *((struct tagPOINT *)this + 4) = *a2;
  *((struct tagPOINT *)this + 5) = *a3;
  if ( (v3 & 1) == 0 )
  {
    *((struct tagPOINT *)this + 2) = *a2;
    *((struct tagPOINT *)this + 3) = *a3;
  }
  v5.x = *((_DWORD *)this + 4) - a2->x;
  v5.y = *((_DWORD *)this + 5) - a2->y;
  v6 = v5;
  v5.x = *((_DWORD *)this + 6) - a3->x;
  v5.y = *((_DWORD *)this + 7) - a3->y;
  if ( (v3 & 2) == 0
    && ((v3 & 1) == 0
     || GestureRecognizer::MeetsThreshold(this, &v6, *((unsigned __int16 *)this + 29))
     || GestureRecognizer::MeetsThreshold(this, &v5, v4)) )
  {
    *((_BYTE *)this + 56) = v3 | 2;
  }
}
