/*
 * XREFs of GreIsRendering @ 0x1C003C970
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003C510 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00150FC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  __int64 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = v3[0][5] & 1;
  else
    v1 = 0;
  if ( v3[0] )
    XDCOBJ::vAltUnlockFast(v3);
  return v1;
}
