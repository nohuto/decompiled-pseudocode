/*
 * XREFs of MiUpdatePfnPriority @ 0x140082AB8
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MiUpdatePrefetchPriority @ 0x1400B71C0 (MiUpdatePrefetchPriority.c)
 *     MiConvertStandbyToProto @ 0x14013EA50 (MiConvertStandbyToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB6BC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140082B70 (MiGetPfnPriority.c)
 *     MiRelinkStandbyPage @ 0x1400F0A38 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x140141808 (MiIsPteInStore.c)
 */

char __fastcall MiUpdatePfnPriority(__int64 a1)
{
  char v1; // bl
  unsigned int PfnPriority; // ecx
  int v3; // r8d
  ULONG_PTR v4; // r9
  unsigned int v5; // r10d
  int v6; // edx
  char v8; // al
  int IsPteInStore; // eax

  v1 = -1;
  PfnPriority = MiGetPfnPriority(a1);
  if ( v6 != PfnPriority
    && (v5 >= PfnPriority || v3 && (PfnPriority <= 5 || (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0)) )
  {
    v8 = *(_BYTE *)(v4 + 34) & 7;
    if ( v8 == 2 )
    {
      if ( PfnPriority
        || (*(_DWORD *)(v4 + 16) & 0x400LL) != 0
        || (IsPteInStore = MiIsPteInStore(
                             *(_QWORD *)(qword_14043A748 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL)),
                             *(_QWORD *)(v4 + 16))) == 0 )
      {
        MiRelinkStandbyPage(v4);
      }
    }
    else if ( v8 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v5 >= PfnPriority )
    {
      *(_BYTE *)(v4 + 35) ^= (v5 ^ *(_BYTE *)(v4 + 35)) & 7;
      if ( PfnPriority < 5 )
      {
        v1 = -1;
        if ( v5 == 5 )
          return 0;
      }
      else if ( v5 < 5 )
      {
        return 7;
      }
    }
  }
  return v1;
}
