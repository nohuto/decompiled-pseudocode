/*
 * XREFs of KeGetExecuteOptions @ 0x1406CB134
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetExecuteOptions(__int64 a1, int *a2)
{
  __int64 v2; // rax
  char v4; // al
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  int v10; // ecx

  v2 = *(_QWORD *)(a1 + 1064);
  if ( v2 && *(_WORD *)(v2 + 8) == 332 )
  {
    v4 = *(_BYTE *)(a1 + 447);
    v5 = v4 & 1 | 2;
    if ( (v4 & 2) == 0 )
      v5 = v4 & 1;
    v6 = v5 | 4;
    if ( (v4 & 4) == 0 )
      v6 = v5;
    v7 = v6 | 8;
    if ( (v4 & 8) == 0 )
      v7 = v6;
    v8 = v7 | 0x10;
    if ( (v4 & 0x10) == 0 )
      v8 = v7;
    v9 = v8 | 0x20;
    if ( (v4 & 0x20) == 0 )
      v9 = v8;
    v10 = v9 | 0x40;
    if ( (v4 & 0x40) == 0 )
      v10 = v9;
    *a2 = v10;
  }
  else
  {
    *a2 = 13;
  }
  return 0LL;
}
