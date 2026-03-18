/*
 * XREFs of GreIsRendering @ 0x1C0033740
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002FF24 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreIsRendering(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 40LL) & 1;
  else
    v1 = 0;
  if ( v3[0] )
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v3);
  return v1;
}
