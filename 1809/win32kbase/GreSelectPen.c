/*
 * XREFs of GreSelectPen @ 0x1C00F60A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00A9880 (-GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

struct HOBJ__ *__fastcall GreSelectPen(HDC a1, struct HOBJ__ *a2)
{
  struct HOBJ__ *v3; // rbx
  struct HOBJ__ ***v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
    v3 = GreSelectPenInternal(v5, a2, 1);
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
