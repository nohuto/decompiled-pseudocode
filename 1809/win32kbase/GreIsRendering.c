/*
 * XREFs of GreIsRendering @ 0x1C002A550
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  struct OBJECT *v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = *((_DWORD *)v3[0] + 10) & 1;
  DCOBJA::~DCOBJA(v3);
  return v1;
}
