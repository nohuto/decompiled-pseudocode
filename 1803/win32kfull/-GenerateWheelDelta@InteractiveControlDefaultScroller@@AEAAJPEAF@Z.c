/*
 * XREFs of ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C0213668
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C021331C (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelDelta(
        InteractiveControlDefaultScroller *this,
        __int16 *a2)
{
  unsigned int v4; // ebp
  int v5; // edi
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // ecx
  __int16 v9; // ax

  v4 = *((_DWORD *)this + 12) * *((_DWORD *)this + 7);
  v5 = 0;
  v6 = (unsigned __int64)(1000LL * (*((_QWORD *)this + 2) - *((_QWORD *)this + 1))) / *(_QWORD *)this;
  *((_DWORD *)this + 16) += 120 * abs32(*((_DWORD *)this + 15));
  if ( v6 < *((int *)InteractiveControlManager::Instance() + 47) )
    goto LABEL_12;
  v7 = *((_DWORD *)this + 16);
  if ( v7 < v4 )
    goto LABEL_12;
  do
  {
    v5 += *((_DWORD *)this + 12);
    v7 -= v4;
  }
  while ( v7 >= v4 );
  *((_DWORD *)this + 16) = v7;
  if ( v5 )
  {
    v8 = *((_DWORD *)this + 15);
    *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
    v9 = -(__int16)v5;
    if ( *((_DWORD *)this + 14) == 2 )
    {
      if ( v8 <= 0 )
        LOWORD(v5) = -(__int16)v5;
    }
    else
    {
      if ( v8 <= 0 )
        v9 = v5;
      LOWORD(v5) = v9;
    }
  }
  else
  {
LABEL_12:
    LOWORD(v5) = 0;
  }
  *a2 = v5;
  return 0LL;
}
