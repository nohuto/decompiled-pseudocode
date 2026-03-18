/*
 * XREFs of GreGetDCOrgEx @ 0x1C003DAF0
 * Callers:
 *     GetMonitorDC @ 0x1C003C510 (GetMonitorDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00150FC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreGetDCPoint @ 0x1C003DB70 (GreGetDCPoint.c)
 */

__int64 __fastcall GreGetDCOrgEx(HDC a1, __int64 a2, _OWORD *a3)
{
  __int64 *v5; // rdi
  unsigned int DCPoint; // ebx
  __int64 *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  v5 = v8[0];
  if ( v8[0] )
  {
    *a3 = *(_OWORD *)(v8[0] + 129);
    DCPoint = GreGetDCPoint(a1);
  }
  else
  {
    DCPoint = 0;
  }
  if ( v5 )
    XDCOBJ::vAltUnlockFast(v8);
  return DCPoint;
}
