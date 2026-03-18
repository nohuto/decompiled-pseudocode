/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1402AE6D0
 * Callers:
 *     IoWriteCrashDump @ 0x1402804AC (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14028217C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140129FF4 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x140191CCC (IoAddTriageDumpDataBlock.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     MiAddTriageDumpPtes @ 0x1402AE004 (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_14043D900;
  dword_14041A4A8 = dword_14043A874;
  dword_14041A4AC = dword_14043A870;
  dword_14041A4B0 = dword_14043A878;
  dword_14041A4B4 = dword_14043A87C;
  dword_14041A4B8 = dword_14043A868;
  qword_14041A4C0 = KeFeatureBits;
  dword_14041A4C8 = MEMORY[0xFFFFF78000000240];
  dword_14041A4CC = MiFlags;
  HvlQueryVsmConnection(qword_14041A4D0);
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
