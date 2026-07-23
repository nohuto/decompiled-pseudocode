/*
 * XREFs of MiCountSystemPool @ 0x1401B4F60
 * Callers:
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x140163F48 (MiIncreaseNonPagedPoolUsage.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14017FA60 (MiSignalNonPagedPoolWatchers.c)
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
    v4 = &qword_14043C048;
    v6 = (unsigned int)ExpHeapBackedPoolEnabledState >= 2;
    v7 = a1 & 1;
    if ( !v7 )
      v4 = &qword_140439B18;
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
      ++dword_140439B94;
      MiFreeExcessSegments();
    }
  }
}
