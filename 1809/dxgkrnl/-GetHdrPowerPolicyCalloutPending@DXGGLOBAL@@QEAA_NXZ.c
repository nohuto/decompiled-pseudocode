/*
 * XREFs of ?GetHdrPowerPolicyCalloutPending@DXGGLOBAL@@QEAA_NXZ @ 0x1C0021A50
 * Callers:
 *     DxgkSessionConnected @ 0x1C0138D00 (DxgkSessionConnected.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::GetHdrPowerPolicyCalloutPending(DXGGLOBAL *this)
{
  return *((_DWORD *)this + 5112) != 0;
}
