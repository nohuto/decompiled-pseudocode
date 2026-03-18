/*
 * XREFs of DxgkEngWatchVisRgnChange @ 0x1C025BA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngWatchVisRgnChange(HDC a1, int a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    if ( a2 )
      *(_DWORD *)(v4[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v4[0] + 36LL) &= ~0x20000u;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v4);
  return UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v5);
}
