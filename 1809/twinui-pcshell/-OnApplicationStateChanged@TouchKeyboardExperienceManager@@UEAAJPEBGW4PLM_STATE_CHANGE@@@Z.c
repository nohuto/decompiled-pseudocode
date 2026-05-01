/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1802B7E40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C4814 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C48EC (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v3; // rsi
  _QWORD *v6; // rax
  bool v7; // cf

  v3 = (RTL_SRWLOCK *)(a1 + 528);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 528));
  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a1 + 520) = *(_DWORD *)(a1 + 520) != 4;
      break;
    case 2:
      *(_DWORD *)(a1 + 520) = 2;
      break;
    case 4:
      *(_DWORD *)(a1 + 520) = 3;
      break;
    case 8:
      *(_DWORD *)(a1 + 520) = 4;
      break;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( a3 == 1 )
  {
    KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(a1 + 536));
  }
  else if ( a3 == 8 )
  {
    v6 = (_QWORD *)(a1 + 352);
    v7 = *(_QWORD *)(a1 + 376) < 8uLL;
    *(_QWORD *)(a1 + 368) = 0LL;
    if ( !v7 )
      v6 = (_QWORD *)*v6;
    *(_WORD *)v6 = 0;
    KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(a1 + 536));
  }
  return 0LL;
}
