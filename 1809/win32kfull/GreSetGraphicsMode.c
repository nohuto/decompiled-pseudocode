/*
 * XREFs of GreSetGraphicsMode @ 0x1C02A1988
 * Callers:
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C01109FC (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetGraphicsMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 208);
    if ( (unsigned int)(a2 - 1) <= 1 )
      *(_DWORD *)(v4 + 208) = a2;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v3;
}
