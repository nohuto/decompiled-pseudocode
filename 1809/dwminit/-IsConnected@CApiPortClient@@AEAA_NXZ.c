/*
 * XREFs of ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004464
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x1800041A8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042F4 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004490 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x18000468C (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 * Callees:
 *     ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180004910 (-IsConnected@CPortClient@@QEAA_NXZ.c)
 */

bool __fastcall CApiPortClient::IsConnected(CApiPortClient *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(&hObject + 1) )
    return CPortClient::IsConnected((CPortClient *)*(&hObject + 1));
  return v1;
}
