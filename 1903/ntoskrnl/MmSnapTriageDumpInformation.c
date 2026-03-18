/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1402C6610
 * Callers:
 *     IoWriteCrashDump @ 0x14029580C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1402976EC (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x1402C5D20 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  dword_14044611C = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140469440;
  dword_140446108 = dword_140466314;
  dword_14044610C = dword_140466310;
  dword_140446110 = dword_140466318;
  dword_140446114 = dword_14046631C;
  dword_140446118 = dword_140466308;
  qword_140446120 = KeFeatureBits;
  xmmword_140446128 = 0LL;
  LODWORD(xmmword_140446128) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140446128) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140446128 + 1);
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
  return IoAddTriageDumpDataBlock((ULONG)&MiTriageDumpData, (PVOID)0x38);
}
