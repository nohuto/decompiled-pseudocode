/*
 * XREFs of RaUnitSetQueueDepth @ 0x1C0016D90
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C0014834 (RaidBusEnumeratorGetUnit.c)
 *     RaidCreateUnit @ 0x1C00152E8 (RaidCreateUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C002059C (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     McTemplateK0zquuuqqqt @ 0x1C003B6C8 (McTemplateK0zquuuqqqt.c)
 */

__int64 __fastcall RaUnitSetQueueDepth(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // eax

  v4 = *(_DWORD *)(a1 + 660);
  v5 = -1073741823;
  if ( a2 && a2 <= a3 )
  {
    *(_DWORD *)(a1 + 660) = a2;
    v6 = a2;
  }
  else
  {
    v6 = v4;
  }
  if ( a2 == v6 )
  {
    v5 = 0;
    *(_DWORD *)(a1 + 832) = a3;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zquuuqqqt(
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        a2,
        a3,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        v4,
        a2,
        a3,
        0);
  }
  return v5;
}
