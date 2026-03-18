/*
 * XREFs of GreOffsetClipRgn @ 0x1C012D6B0
 * Callers:
 *     xxxInternalPaintDesktop @ 0x1C012D518 (xxxInternalPaintDesktop.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v9[48]; // [rsp+38h] [rbp-30h] BYREF
  struct _POINTL v10; // [rsp+88h] [rbp+20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v5 = 0;
  if ( v8[0] )
  {
    v10.x = a2;
    v10.y = a3;
    v7 = *(_QWORD *)(v8[0] + 160LL);
    if ( v7 )
      v5 = RGNOBJ::bOffset((RGNOBJ *)&v7, &v10);
    else
      v5 = 1;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
  return v5;
}
