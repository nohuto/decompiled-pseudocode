/*
 * XREFs of GreSelectVisRgnShared @ 0x1C0029E90
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 */

__int64 __fastcall GreSelectVisRgnShared(HDC a1, HRGN a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v5 = GreSelectVisRgnInternal(v7, a2, a3);
  DCOBJA::~DCOBJA(v7);
  return v5;
}
