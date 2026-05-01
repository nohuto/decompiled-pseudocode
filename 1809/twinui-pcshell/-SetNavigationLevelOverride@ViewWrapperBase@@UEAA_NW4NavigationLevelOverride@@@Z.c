/*
 * XREFs of ?SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x180244130
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180242DDC (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ViewWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rsi
  int v5; // edi
  int v6; // eax
  char v7; // bl

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
  AcquireSRWLockExclusive(v4);
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        *(_DWORD *)(a1 + 88) |= 0x10u;
        *(_DWORD *)(a1 + 88) &= ~8u;
      }
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 88);
      if ( (v6 & 0x18) != 0 )
      {
        v7 = 0;
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 88) = v6 | 8;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 88) &= 0xFFFFFFC7;
  }
  ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
  v7 = 1;
LABEL_10:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
