/*
 * XREFs of ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180010880
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180010664 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001F720 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032028 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180032054 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     McTemplateU0pq @ 0x180088340 (McTemplateU0pq.c)
 */

bool __fastcall CTopLevelWindow3D::ShouldDelayTransition(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  __int64 v2; // rdi
  bool v3; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v12; // rcx
  struct CTransitionWindowSnapshot *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 41);
  v3 = 0;
  v5 = v2;
  if ( *(char *)(v2 + 599) < 0 )
    return v3;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v2 + 604) & 0xFFF) == 0xFFF )
      return 0;
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                      *(HWND *)(v2 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v12, SnapshotIndex, &v13) < 0 )
      return 0;
    v3 = 1;
    goto LABEL_12;
  }
  v6 = 0x100000LL;
  do
  {
    v7 = v6;
    if ( !v5 )
      break;
    v8 = *(_DWORD *)(v5 + 604);
    v5 = *(_QWORD *)(v5 + 544);
    v9 = v6 & v8;
    LODWORD(v6) = v6 | 0x10000000;
    v3 = v9 == v7;
  }
  while ( v9 != v7 );
  if ( v3 )
  {
LABEL_12:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pq(v6, v5, *(_QWORD *)(v2 + 40), a2);
  }
  return v3;
}
