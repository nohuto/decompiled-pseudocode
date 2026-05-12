/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C0049F50
 * Callers:
 *     RaidUnitRequestTimeout @ 0x1C0048FC8 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2976) )
  {
    if ( (*(_BYTE *)(a1 + 450) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 2988);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 3024) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 3024) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 3024)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 2988));
        }
      }
    }
  }
  return v1;
}
