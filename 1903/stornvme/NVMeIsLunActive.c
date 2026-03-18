/*
 * XREFs of NVMeIsLunActive @ 0x1C0011D24
 * Callers:
 *     ScsiReportLunsCommand @ 0x1C001319C (ScsiReportLunsCommand.c)
 *     NVMeReenumerateCompareAndMerge @ 0x1C0016F2C (NVMeReenumerateCompareAndMerge.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeIsLunActive(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 && *(_QWORD *)(a1 + 56) && *(_DWORD *)(a1 + 52) )
    return (*(_DWORD *)(a1 + 20) & 4) == 0;
  return v1;
}
