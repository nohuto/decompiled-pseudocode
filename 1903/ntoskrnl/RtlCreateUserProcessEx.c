/*
 * XREFs of RtlCreateUserProcessEx @ 0x1409FCEF4
 * Callers:
 *     StartFirstUserProcess @ 0x1409FCD18 (StartFirstUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x1409FCF74 (RtlpCreateUserProcess.c)
 */

__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2)
{
  int v3; // edx
  unsigned int v4; // r9d
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *(_DWORD *)(a2 + 8);
  if ( (v3 & 1) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 64);
    if ( v9 )
      *(_QWORD *)(a2 + 64) = a2 + v9;
    v10 = *(_QWORD *)(a2 + 88);
    if ( v10 )
      *(_QWORD *)(a2 + 88) = a2 + v10;
    v11 = *(_QWORD *)(a2 + 104);
    if ( v11 )
      *(_QWORD *)(a2 + 104) = a2 + v11;
    v12 = *(_QWORD *)(a2 + 120);
    if ( v12 )
      *(_QWORD *)(a2 + 120) = a2 + v12;
    v13 = *(_QWORD *)(a2 + 184);
    if ( v13 )
      *(_QWORD *)(a2 + 184) = a2 + v13;
    v14 = *(_QWORD *)(a2 + 200);
    if ( v14 )
      *(_QWORD *)(a2 + 200) = a2 + v14;
    v15 = *(_QWORD *)(a2 + 216);
    if ( v15 )
      *(_QWORD *)(a2 + 216) = a2 + v15;
    v16 = *(_QWORD *)(a2 + 232);
    if ( v16 )
      *(_QWORD *)(a2 + 232) = a2 + v16;
    v17 = *(_QWORD *)(a2 + 1048);
    if ( v17 )
      *(_QWORD *)(a2 + 1048) = a2 + v17;
    *(_DWORD *)(a2 + 8) = v3 | 1;
  }
  v4 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 72) = 0LL;
  v5 = (v4 >> 11) & 0x80 | 0x40;
  if ( (v4 & 0x400000) == 0 )
    v5 = (v4 >> 11) & 0x80;
  v6 = v5 | 0x40000;
  v7 = v4 & 0x800000;
  if ( !v7 )
    v6 = v5;
  return RtlpCreateUserProcess(a1, a2, v6, v7);
}
