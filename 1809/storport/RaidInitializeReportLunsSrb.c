/*
 * XREFs of RaidInitializeReportLunsSrb @ 0x1C006B50C
 * Callers:
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0018F10 (RaidBusEnumeratorBuildReportLuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidInitializeReportLunsSrb(__int64 a1, char a2, char a3, char a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( a7 == 1 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_WORD *)a1 = 8;
    *(_WORD *)(a1 + 36) = 2;
    *(_QWORD *)(a1 + 64) = a5;
    *(_DWORD *)(a1 + 52) = 128;
    *(_BYTE *)(a1 + 2) = 40;
    *(_DWORD *)(a1 + 8) = 1397899864;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 16) = 184;
    *(_DWORD *)(a1 + 24) = 72;
    *(_DWORD *)(a1 + 60) = a6;
    *(_DWORD *)(a1 + 40) = 10;
    *(_DWORD *)(a1 + 56) = 1;
    *(_DWORD *)(a1 + 120) = 144;
    v9 = a1 + *(unsigned int *)(a1 + 52);
    *(_WORD *)v9 = 1;
    *(_DWORD *)(v9 + 4) = 4;
    *(_BYTE *)(v9 + 8) = a2;
    *(_BYTE *)(v9 + 9) = a3;
    *(_BYTE *)(v9 + 10) = a4;
    v10 = a1 + *(unsigned int *)(a1 + 120);
    *(_DWORD *)v10 = 64;
    v7 = v10 + 24;
    *(_DWORD *)(v10 + 4) = 32;
    *(_BYTE *)(v10 + 10) = 12;
  }
  else
  {
    *(_BYTE *)(a1 + 2) = 0;
    *(_WORD *)a1 = 88;
    *(_QWORD *)(a1 + 24) = a5;
    *(_BYTE *)(a1 + 5) = a2;
    *(_BYTE *)(a1 + 6) = a3;
    *(_BYTE *)(a1 + 7) = a4;
    *(_DWORD *)(a1 + 12) = 72;
    *(_DWORD *)(a1 + 16) = a6;
    *(_DWORD *)(a1 + 20) = 10;
    *(_BYTE *)(a1 + 10) = 12;
    v7 = a1 + 72;
  }
  *(_QWORD *)v7 = 0LL;
  *(_DWORD *)(v7 + 8) = 0;
  *(_BYTE *)v7 = -96;
  *(_BYTE *)(v7 + 6) = BYTE3(a6);
  *(_BYTE *)(v7 + 7) = BYTE2(a6);
  *(_BYTE *)(v7 + 8) = BYTE1(a6);
  result = 0LL;
  *(_BYTE *)(v7 + 9) = a6;
  return result;
}
