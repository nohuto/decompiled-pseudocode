/*
 * XREFs of PpmEnableWmiInterface @ 0x14077E190
 * Callers:
 *     PopNewProcessorCallback @ 0x1408A21D0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x140134AA0 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x140714870 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  ULONG i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = KeGetPrcb(i);
      v2 = GroupAffinity;
      if ( GroupAffinity )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(GroupAffinity + 24040), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v2 + 24032), 0x80000001);
      }
    }
  }
  return GroupAffinity;
}
