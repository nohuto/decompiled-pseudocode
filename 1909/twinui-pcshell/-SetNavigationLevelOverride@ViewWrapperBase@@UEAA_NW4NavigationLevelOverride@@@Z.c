/*
 * XREFs of ?SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1802B96E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802B83D8 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ViewWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rsi
  int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  char v8; // bl

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
  AcquireSRWLockExclusive(v4);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 88) &= 0xFFFFFFC7;
    goto LABEL_10;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v7 = *(_DWORD *)(a1 + 88);
    if ( (v7 & 0x18) != 0 )
    {
      v8 = 0;
      goto LABEL_11;
    }
    v6 = v7 | 8;
    goto LABEL_7;
  }
  if ( v5 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 88) & 0xFFFFFFE7 | 0x10;
LABEL_7:
    *(_DWORD *)(a1 + 88) = v6;
  }
LABEL_10:
  ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
  v8 = 1;
LABEL_11:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v8;
}
