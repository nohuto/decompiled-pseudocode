/*
 * XREFs of RaidBusEnumeratorBuildReportLuns @ 0x1C0014508
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C0013F2C (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     memset @ 0x1C0023840 (memset.c)
 *     RaidInitializeReportLunsSrb @ 0x1C006AC68 (RaidInitializeReportLunsSrb.c)
 */

_QWORD *__fastcall RaidBusEnumeratorBuildReportLuns(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        _QWORD *a5)
{
  void *v5; // rbp
  __int64 v7; // r14
  __int64 v10; // r12
  char v11; // r13
  __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // rax
  _QWORD *result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax

  v5 = (void *)a3[4];
  v7 = a3[2];
  v10 = a4;
  v11 = 0;
  memset(v5, 0, a4);
  v12 = *a1;
  LOBYTE(v13) = a2;
  RaidInitializeReportLunsSrb(v7, v13, a2 >> 8, HIWORD(a2), (__int64)v5, v10, *(_BYTE *)(v12 + 402));
  if ( *(_BYTE *)(v12 + 402) == 1 )
  {
    *(_QWORD *)(v7 + 104) = 0LL;
    v16 = 0LL;
    *(_DWORD *)(v7 + 24) |= 0x80110u;
    *(_QWORD *)(v7 + 64) = a3[4];
    *(_DWORD *)(v7 + 60) = v10;
    if ( *(_DWORD *)(v7 + 56) )
    {
      do
      {
        v17 = *(unsigned int *)(v7 + 4 * v16 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          v18 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v17 <= (unsigned int)v18 )
          {
            if ( *(_DWORD *)(v17 + v7) == 64 && v17 + 40 <= v18 )
            {
              v11 = 1;
              *(_QWORD *)((unsigned int)v17 + v7 + 16) = a3[3];
              *(_BYTE *)((unsigned int)v17 + v7 + 9) = 18;
            }
            if ( v11 )
              break;
          }
        }
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < *(_DWORD *)(v7 + 56) );
    }
  }
  else
  {
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 32) = a3[3];
    *(_BYTE *)(v7 + 11) = 18;
    v14 = a3[4];
    *(_DWORD *)(v7 + 12) |= 0x80110u;
    *(_QWORD *)(v7 + 24) = v14;
    *(_DWORD *)(v7 + 16) = v10;
  }
  result = a5;
  *a5 = v7;
  return result;
}
