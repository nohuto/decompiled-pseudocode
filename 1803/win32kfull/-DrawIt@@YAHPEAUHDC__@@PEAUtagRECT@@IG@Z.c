/*
 * XREFs of ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0012C5C
 * Callers:
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C000EE70 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 */

__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, __int16 a4)
{
  int v5; // r12d
  __int64 v7; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v7) = a4;
  v5 = a3 & 0x100;
  GreSetTextColor(a1);
  GreExtTextOutWInternal(a1, 0LL, (__int64)&v7, 1, 0LL, 0LL, 0);
  if ( v5 )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, 0LL, (__int64)&v7, 1, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1);
  return 1LL;
}
