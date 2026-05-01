/*
 * XREFs of ?HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z @ 0x180379470
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x180369260 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

bool __fastcall GridLayout::HitTestRow(GridLayout *this, const struct Geometry::CPoint *a2, unsigned __int64 *a3)
{
  int v3; // ebx
  __int64 i; // rsi
  int v8; // r8d
  bool result; // al
  struct tagRECT rc; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( !*((_QWORD *)this + 7) )
    return 0;
  for ( i = 0LL; ; i += 56LL )
  {
    v8 = *((_DWORD *)this + 1);
    rc = *(struct tagRECT *)(*((_QWORD *)this + 6) + i + 8);
    InflateRect(&rc, 0, v8);
    if ( *((_DWORD *)a2 + 1) - rc.top <= (unsigned int)(rc.bottom - rc.top) )
      break;
    if ( (unsigned __int64)++v3 >= *((_QWORD *)this + 7) )
      return 0;
  }
  result = 1;
  *a3 = v3;
  return result;
}
