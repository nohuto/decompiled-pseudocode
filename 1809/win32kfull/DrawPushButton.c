/*
 * XREFs of DrawPushButton @ 0x1C007B7E0
 * Callers:
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     DrawThumb2 @ 0x1C0106B08 (DrawThumb2.c)
 * Callees:
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v7; // esi
  int v8; // ebp
  int v10; // r14d
  HBRUSH v11; // rbx
  int result; // eax
  RECT v13; // [rsp+20h] [rbp-28h] BYREF

  v13 = *a2;
  v7 = 0;
  v8 = 0;
  DrawEdge(a1, &v13, (a3 & 0x600) != 0 ? 10 : 5, a4 & 0xD000 | 0x200F);
  v10 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF )
    {
      v11 = *(HBRUSH *)(gpsi + 4944LL);
      v7 = GreSetBkColor(a1, *(_DWORD *)(gpsi + 4648LL));
      v8 = GreSetTextColor(a1, *(_DWORD *)(gpsi + 4628LL));
      v10 = 1;
    }
    else
    {
      v11 = *(HBRUSH *)(gpsi + 4856LL);
    }
  }
  else
  {
    v11 = *(HBRUSH *)(gpsi + 4816LL);
  }
  result = FillRect(a1, &v13, v11);
  if ( v10 )
  {
    GreSetBkColor(a1, v7);
    result = GreSetTextColor(a1, v8);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v13;
  return result;
}
