/*
 * XREFs of MiUpdatePfnPriority @ 0x14008DD04
 * Callers:
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiUpdatePrefetchPriority @ 0x14010A9B0 (MiUpdatePrefetchPriority.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x14000E990 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x1401587DC (MiIsPteInStore.c)
 */

char __fastcall MiUpdatePfnPriority(ULONG_PTR a1, unsigned int a2, int a3)
{
  ULONG_PTR v3; // r11
  int v4; // r10d
  char v5; // cl
  char v6; // bl
  unsigned int v7; // r9d
  char v9; // al

  v3 = a1;
  v4 = a2;
  v5 = *(_BYTE *)(a1 + 35);
  v6 = -1;
  if ( (v5 & 8) != 0 )
    v7 = 5;
  else
    v7 = v5 & 7;
  if ( a2 != v7 && (a2 >= v7 || a3 && (v7 <= 5 || (*(_QWORD *)(v3 + 40) & 0x200000000000000LL) == 0)) )
  {
    v9 = *(_BYTE *)(v3 + 34) & 7;
    if ( v9 == 2 )
    {
      if ( v7
        || (*(_DWORD *)(v3 + 16) & 0x400LL) != 0
        || !(unsigned int)MiIsPteInStore(
                            *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL)),
                            *(_QWORD *)(v3 + 16)) )
      {
        MiRelinkStandbyPage(v3, v4);
      }
    }
    else if ( v9 != 6 || (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || a2 >= v7 )
    {
      *(_BYTE *)(v3 + 35) = v5 ^ (a2 ^ v5) & 7;
      if ( v7 < 5 )
      {
        v6 = -1;
        if ( a2 == 5 )
          return 0;
      }
      else if ( a2 < 5 )
      {
        return 7;
      }
    }
  }
  return v6;
}
