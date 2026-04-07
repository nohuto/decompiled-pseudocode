/*
 * XREFs of ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x180005BB8
 * Callers:
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180005B94 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180005C28 (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_DiscardStoredSnapshotByIndex(
        CTransitionVisualController *this,
        unsigned int a2)
{
  unsigned int v3; // ebx
  struct CTransitionWindowSnapshot *v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v8; // rax

  v3 = a2;
  v4 = *(struct CTransitionWindowSnapshot **)(*((_QWORD *)this + 7) + 16LL * a2 + 8);
  CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(this, v4);
  v5 = *((_DWORD *)this + 20);
  if ( v3 >= v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  else
  {
    v6 = *((_QWORD *)this + 7);
    while ( v3 < v5 - 1 )
    {
      v8 = v3++;
      *(_OWORD *)(v6 + 16 * v8) = *(_OWORD *)(v6 + 16LL * v3);
      v5 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v5 - 1;
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return 0LL;
}
