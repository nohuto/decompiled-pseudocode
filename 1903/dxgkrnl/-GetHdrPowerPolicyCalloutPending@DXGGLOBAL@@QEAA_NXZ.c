/*
 * XREFs of ?GetHdrPowerPolicyCalloutPending@DXGGLOBAL@@QEAA_NXZ @ 0x1C002455C
 * Callers:
 *     DxgkSessionConnected @ 0x1C013D9D0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C01567D0 (DxgkSessionReconnected.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::GetHdrPowerPolicyCalloutPending(DXGGLOBAL *this)
{
  return *((_DWORD *)this + 76030) != 0;
}
