/*
 * XREFs of ?Add@PinchStretchRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x18010B370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z @ 0x18010B5E4 (-RecordPoints@PinchStretchRecognizer@@AEAAXPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall PinchStretchRecognizer::Add(
        PinchStretchRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3)
{
  unsigned int v5; // esi
  char v6; // cl

  if ( (a3 & 0x100) == 0 )
  {
    v5 = *((_DWORD *)a2 + 187);
    if ( (a3 & 1) != 0 )
      (*(void (__fastcall **)(PinchStretchRecognizer *))(*(_QWORD *)this + 32LL))(this);
    v6 = *((_BYTE *)this + 56);
    if ( (v6 & 1) != 0 )
    {
      if ( v5 >= 2
        && *((unsigned __int16 *)a2 + 377) == *((_DWORD *)this + 12)
        && *((unsigned __int16 *)a2 + 397) == *((_DWORD *)this + 13) )
      {
        PinchStretchRecognizer::RecordPoints(
          this,
          (const struct tagPOINT *)((char *)a2 + 756),
          (const struct tagPOINT *)((char *)a2 + 796));
      }
      else
      {
        *((_BYTE *)this + 56) = v6 & 0xFC | 2;
      }
    }
    else if ( v5 >= 2 )
    {
      *((_DWORD *)this + 12) = *((unsigned __int16 *)a2 + 377);
      *((_DWORD *)this + 13) = *((unsigned __int16 *)a2 + 397);
      PinchStretchRecognizer::RecordPoints(
        this,
        (const struct tagPOINT *)((char *)a2 + 756),
        (const struct tagPOINT *)((char *)a2 + 796));
      *((_BYTE *)this + 56) |= 1u;
    }
  }
  return 0LL;
}
