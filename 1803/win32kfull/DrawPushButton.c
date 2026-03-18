/*
 * XREFs of DrawPushButton @ 0x1C0010CEC
 * Callers:
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     DrawThumb2 @ 0x1C012F804 (DrawThumb2.c)
 * Callees:
 *     DrawEdge @ 0x1C0010DBC (DrawEdge.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v8; // r14d
  HBRUSH v9; // rbx
  int result; // eax
  RECT v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = *a2;
  DrawEdge(a1);
  v8 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF )
    {
      v9 = *(HBRUSH *)(gpsi + 4944LL);
      GreSetBkColor(a1);
      GreSetTextColor(a1);
      v8 = 1;
    }
    else
    {
      v9 = *(HBRUSH *)(gpsi + 4856LL);
    }
  }
  else
  {
    v9 = *(HBRUSH *)(gpsi + 4816LL);
  }
  result = FillRect(a1, &v11, v9);
  if ( v8 )
  {
    GreSetBkColor(a1);
    result = GreSetTextColor(a1);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v11;
  return result;
}
