/*
 * XREFs of RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C0048DE0
 * Callers:
 *     RaidUnitRequestTimeout @ 0x1C0047E58 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitUnresponsiveDeviceMarkingNeeded(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 2720) )
  {
    if ( (*(_BYTE *)(a1 + 162) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 2732);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 2768) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 2768) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 2768)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 2732));
        }
      }
    }
  }
  return v1;
}
