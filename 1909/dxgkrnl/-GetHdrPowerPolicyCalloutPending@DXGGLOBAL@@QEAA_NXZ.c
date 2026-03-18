/*
 * XREFs of ?GetHdrPowerPolicyCalloutPending@DXGGLOBAL@@QEAA_NXZ @ 0x1C00245AC
 * Callers:
 *     DxgkSessionConnected @ 0x1C01409D0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C015A690 (DxgkSessionReconnected.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::GetHdrPowerPolicyCalloutPending(DXGGLOBAL *this)
{
  return *((_DWORD *)this + 76030) != 0;
}
