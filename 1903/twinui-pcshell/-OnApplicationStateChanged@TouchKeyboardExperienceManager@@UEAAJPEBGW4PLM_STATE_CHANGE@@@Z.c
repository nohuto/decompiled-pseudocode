/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180311600
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x180310830 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180322580 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18032265C (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180324314 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v3; // rsi
  _WORD *v6; // rcx
  KeyboardHosting::TabTipAdapter *v7; // rcx

  v3 = (RTL_SRWLOCK *)(a1 + 560);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 560));
  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a1 + 552) = *(_DWORD *)(a1 + 552) != 4;
      break;
    case 2:
      *(_DWORD *)(a1 + 552) = 2;
      break;
    case 4:
      *(_DWORD *)(a1 + 552) = 3;
      break;
    case 8:
      *(_DWORD *)(a1 + 552) = 4;
      break;
  }
  *(_BYTE *)(a1 + 556) = 0;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( a3 == 1 )
  {
    KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(a1 + 568));
  }
  else if ( a3 == 8 )
  {
    v6 = (_WORD *)(a1 + 376);
    if ( *(_QWORD *)(a1 + 400) >= 8uLL )
      v6 = *(_WORD **)(a1 + 376);
    *(_QWORD *)(a1 + 392) = 0LL;
    *v6 = 0;
    KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(a1 + 568));
    if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
    {
      v7 = *(KeyboardHosting::TabTipAdapter **)(a1 + 568);
      if ( *(_BYTE *)(*((_QWORD *)v7 + 12) + 485LL) )
        KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(v7);
    }
  }
  return 0LL;
}
