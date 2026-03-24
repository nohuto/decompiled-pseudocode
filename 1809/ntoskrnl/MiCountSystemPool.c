/*
 * XREFs of MiCountSystemPool @ 0x1401B4E20
 * Callers:
 *     MmFreePoolMemory @ 0x14007BD58 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiReturnNonPagedPoolPde @ 0x1401616A0 (MiReturnNonPagedPoolPde.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x140163E48 (MiIncreaseNonPagedPoolUsage.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1401643D4 (MiFreeExcessSegments.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017F920 (MiSignalNonPagedPoolWatchers.c)
 */

void __fastcall MiCountSystemPool(char a1, unsigned __int64 a2, int a3)
{
  volatile signed __int64 *v4; // rax
  BOOL v6; // ecx
  int v7; // edi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax

  if ( (a1 & 0x20) == 0 )
  {
    v4 = &qword_14043AF88;
    v6 = (unsigned int)ExpHeapBackedPoolEnabledState >= 2;
    v7 = a1 & 1;
    if ( !v7 )
      v4 = &qword_140438A58;
    if ( a3 == 1 )
      v8 = a2 + _InterlockedExchangeAdd64(v4, a2);
    else
      v8 = _InterlockedExchangeAdd64(v4, -(__int64)a2);
    if ( !v6 && !v7 && MiState[0] )
    {
      if ( (v9 = v8 - a2, v8 >= MiState[0] - 5120) && v9 < MiState[0] - 5120
        || v8 >= MiState[0] - 2048 && v9 < MiState[0] - 2048 )
      {
        MiSignalNonPagedPoolWatchers();
      }
    }
    if ( a3 == 1 && !v7 && ((MiState[0] - v8) & -(__int64)(v8 < MiState[0])) < 0x300 )
    {
      ++dword_140438AD4;
      MiFreeExcessSegments();
    }
  }
}
