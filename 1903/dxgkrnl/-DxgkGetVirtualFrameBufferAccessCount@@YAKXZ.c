/*
 * XREFs of ?DxgkGetVirtualFrameBufferAccessCount@@YAKXZ @ 0x1C017A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetVirtualFrameBufferAccessCount(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int *v5; // rcx
  unsigned int v6; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGGLOBAL *)((char *)Global + 1240), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = (unsigned int *)*((_QWORD *)DXGGLOBAL::GetGlobal(v4, v3) + 154);
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
