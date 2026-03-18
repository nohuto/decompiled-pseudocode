/*
 * XREFs of ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C020A21C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0017750 (InternalSetTimer.c)
 */

__int64 __fastcall MNSetTimerToOpenHierarchy(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  if ( *(_DWORD *)(**(_QWORD **)a1 + 80LL) == -1 )
    return 0LL;
  if ( *(_DWORD *)(**(_QWORD **)a1 + 80LL) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) + 44LL) )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 88LL);
  v3 = 96LL * *(unsigned int *)(**(_QWORD **)a1 + 80LL);
  if ( !*(_QWORD *)(v3 + v2 + 16) || (*(_DWORD *)(*(_QWORD *)(v3 + v2) + 4LL) & 3) != 0 )
    return 0LL;
  if ( (***(_DWORD ***)a1 & 0x2000) == 0
    && ((***(_DWORD ***)a1 & 0x20) == 0 || *(_DWORD *)(**(_QWORD **)a1 + 80LL) != *(_DWORD *)(**(_QWORD **)a1 + 84LL)) )
  {
    if ( !InternalSetTimer(*(_QWORD *)(**(_QWORD **)a1 + 16LL), 65534LL, gdtMNDropDown, 0LL, 0, 16) )
      return 0xFFFFFFFFLL;
    ***(_DWORD ***)a1 |= 0x2000u;
  }
  return 1LL;
}
