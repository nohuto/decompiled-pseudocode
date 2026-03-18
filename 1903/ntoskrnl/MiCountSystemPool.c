/*
 * XREFs of MiCountSystemPool @ 0x140023198
 * Callers:
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 *     MmFreePoolMemory @ 0x14010E4BC (MmFreePoolMemory.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1402B99CC (MiFreeExcessSegments.c)
 */

unsigned __int64 __fastcall MiCountSystemPool(char a1, unsigned __int64 a2, int a3)
{
  volatile signed __int64 *v4; // r9
  unsigned __int64 result; // rax
  int v6; // r11d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r10

  if ( (a1 & 0x20) != 0 )
  {
    v8 = a2;
    result = -(__int64)a2;
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
    if ( a3 != 1 )
      v8 = -(__int64)a2;
    v4 = (volatile signed __int64 *)(v9 + 184);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 48), v8);
  }
  else
  {
    v4 = &qword_1404669A8;
    result = (unsigned __int64)&qword_1404644C8;
    if ( (a1 & 1) == 0 )
      v4 = &qword_1404644C8;
  }
  v6 = a1 & 1;
  if ( a3 == 1 )
  {
    v7 = a2 + _InterlockedExchangeAdd64(v4, a2);
    if ( !v6 )
    {
      result = (MiState - v7) & -(__int64)(v7 < MiState);
      if ( result < 0x300 )
        return MiFreeExcessSegments();
    }
  }
  else
  {
    _InterlockedExchangeAdd64(v4, -(__int64)a2);
  }
  return result;
}
