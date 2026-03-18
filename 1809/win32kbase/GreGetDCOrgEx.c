/*
 * XREFs of GreGetDCOrgEx @ 0x1C00760E0
 * Callers:
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDCPoint @ 0x1C0076160 (GreGetDCPoint.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  unsigned int DCPoint; // ebx
  struct OBJECT *v7[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  DCPoint = 0;
  if ( v7[0] )
  {
    *a3 = *(_OWORD *)((char *)v7[0] + 1032);
    DCPoint = GreGetDCPoint(a1);
  }
  DCOBJA::~DCOBJA(v7);
  return DCPoint;
}
