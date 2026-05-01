/*
 * XREFs of ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x180250F40
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18001F0B8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall WindowWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // eax
  char v6; // bl
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 264) + 184LL))(*(_QWORD *)(a1 + 264), &SRWLock);
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *(_DWORD *)(a1 + 164) |= 0x10u;
        *(_DWORD *)(a1 + 164) &= ~8u;
      }
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 164);
      if ( (v5 & 0x18) != 0 )
      {
        v6 = 0;
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 164) = v5 | 8;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 164) &= 0xFFFFFFC7;
  }
  WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
  v6 = 1;
LABEL_10:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v6;
}
