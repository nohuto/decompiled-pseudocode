/*
 * XREFs of VerifierIoWMIWriteEvent @ 0x140946EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     WmiVerifierCopyEvent @ 0x14030E178 (WmiVerifierCopyEvent.c)
 *     WmiVerifierTakeEventOwnership @ 0x14030E1D0 (WmiVerifierTakeEventOwnership.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VerifierIoWMIWriteEvent(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // ebx
  PVOID v4; // rsi
  void *v5; // rcx

  if ( WmiVerifierTakeEventOwnership(a1) )
  {
    v4 = WmiVerifierCopyEvent(v2);
    if ( v4 )
    {
      v3 = ((__int64 (__fastcall *)(PVOID))pXdvIoWMIWriteEvent)(v4);
      v5 = (void *)a1;
      if ( v3 < 0 )
        v5 = v4;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)((__int64 (*)(void))pXdvIoWMIWriteEvent)();
  }
  return (unsigned int)v3;
}
