/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1402AE9C0
 * Callers:
 *     IoWriteCrashDump @ 0x14028079C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14028246C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiAddTriageDumpPtes @ 0x1402AE2F4 (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_14043E9C0;
  dword_14041B588 = dword_14043B934;
  dword_14041B58C = dword_14043B930;
  dword_14041B590 = dword_14043B938;
  dword_14041B594 = dword_14043B93C;
  dword_14041B598 = dword_14043B928;
  qword_14041B5A0 = KeFeatureBits;
  dword_14041B5A8 = MEMORY[0xFFFFF78000000240];
  dword_14041B5AC = MiFlags;
  HvlQueryVsmConnection(qword_14041B5B0);
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = (unsigned __int16 *)&IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*v5++ + a1));
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((int)&MiTriageDumpData, 56);
}
