/*
 * XREFs of ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C014AB40
 * Callers:
 *     DxgkGetPathsModality @ 0x1C00D6780 (DxgkGetPathsModality.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D7C54 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00D8494 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D92B0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C014ABC8 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrieveAllPaths(CCD_TOPOLOGY *this, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  CCD_BTL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  char v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v14, 0);
  v8 = v4;
  if ( v4 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v13 + 24) = v8;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    v9 = CCD_BTL::Global(v6, v5);
    LODWORD(v8) = CCD_BTL::RetrieveAllPaths(v9, this, a2);
    if ( (int)v8 >= 0 )
    {
      LODWORD(v8) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v8 >= 0 )
        LODWORD(v8) = CCD_TOPOLOGY::FillPathsTargetFlags(this, v10);
    }
  }
  if ( v14 )
    DxgkReleaseSessionModeChangeLock(v11, v10);
  return (unsigned int)v8;
}
