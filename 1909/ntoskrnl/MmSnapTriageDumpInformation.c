/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1402C6370
 * Callers:
 *     IoWriteCrashDump @ 0x14029556C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14029744C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14012B22C (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x1402C5A80 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  dword_140445E5C = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140469180;
  dword_140445E48 = dword_140466014;
  dword_140445E4C = dword_140466010;
  dword_140445E50 = dword_140466018;
  dword_140445E54 = dword_14046601C;
  dword_140445E58 = dword_140466008;
  qword_140445E60 = KeFeatureBits;
  xmmword_140445E68 = 0LL;
  LODWORD(xmmword_140445E68) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140445E68) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140445E68 + 1);
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
