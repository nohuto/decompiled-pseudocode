/*
 * XREFs of ?IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x180240A84
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18023F090 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall PeoplePaneViewManager::IsApplicationViewAlreadyStashed(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rdi
  struct IApplicationView **i; // rax
  char v6; // bl

  v2 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  for ( i = (struct IApplicationView **)this[21].Ptr; ; ++i )
  {
    if ( i == this[22].Ptr )
    {
      v6 = 0;
      goto LABEL_6;
    }
    if ( *i == a2 )
      break;
  }
  v6 = 1;
LABEL_6:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v6;
}
