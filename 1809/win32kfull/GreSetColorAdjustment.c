/*
 * XREFs of GreSetColorAdjustment @ 0x1C0282838
 * Callers:
 *     NtGdiSetColorAdjustment @ 0x1C0293820 (NtGdiSetColorAdjustment.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    v4 = 1;
    *(_OWORD *)(v6[0] + 176LL) = *(_OWORD *)a2;
    *(_QWORD *)(v3 + 192) = *(_QWORD *)(a2 + 16);
    *(_WORD *)(v6[0] + 178LL) &= 3u;
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v6);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v7);
  return v4;
}
