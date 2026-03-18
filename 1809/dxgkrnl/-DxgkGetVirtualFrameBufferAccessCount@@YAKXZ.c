/*
 * XREFs of ?DxgkGetVirtualFrameBufferAccessCount@@YAKXZ @ 0x1C015A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetVirtualFrameBufferAccessCount(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v2; // rcx
  unsigned int *v3; // rcx
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGGLOBAL *)((char *)Global + 1272), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = (unsigned int *)*((_QWORD *)DXGGLOBAL::GetGlobal(v2) + 158);
  if ( v3 )
    v4 = *v3;
  else
    v4 = 0;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return v4;
}
