/*
 * XREFs of ?AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0004@@@Z @ 0x18011A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18002CE1C (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180042F7C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18004501C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 */

__int64 __fastcall CImmersiveApp::AddGhostStatusFlag(__int64 a1, int a2)
{
  CImmersiveApp::CImmersiveWindowCollection *v4; // rdi
  unsigned int v5; // ebx
  int v6; // esi
  unsigned int v7; // r8d

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  v5 = 0;
  v6 = 8;
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v4) )
  {
    v7 = 8;
    if ( a2 != 1 )
      v7 = 0;
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)v4, 0, v7);
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v4) )
  {
    if ( *((_DWORD *)v4 + 53) )
    {
      if ( a2 != 1 )
        v6 = 0;
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)v4, v6);
    }
  }
  else
  {
    v5 = -2147019873;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v5;
}
