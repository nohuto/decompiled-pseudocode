/*
 * XREFs of GreGetTextColor @ 0x1C0106CC4
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxDrawState @ 0x1C0230354 (xxxDrawState.c)
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextColor(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 188LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
