/*
 * XREFs of RtlCreateUserProcessEx @ 0x1409C5E8C
 * Callers:
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x1409C5F0C (RtlpCreateUserProcess.c)
 */

__int64 __fastcall RtlCreateUserProcessEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  int v6; // edx
  unsigned int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v6 & 1) == 0 )
  {
    v12 = *(_QWORD *)(a2 + 64);
    if ( v12 )
      *(_QWORD *)(a2 + 64) = a2 + v12;
    v13 = *(_QWORD *)(a2 + 88);
    if ( v13 )
      *(_QWORD *)(a2 + 88) = a2 + v13;
    v14 = *(_QWORD *)(a2 + 104);
    if ( v14 )
      *(_QWORD *)(a2 + 104) = a2 + v14;
    v15 = *(_QWORD *)(a2 + 120);
    if ( v15 )
      *(_QWORD *)(a2 + 120) = a2 + v15;
    v16 = *(_QWORD *)(a2 + 184);
    if ( v16 )
      *(_QWORD *)(a2 + 184) = a2 + v16;
    v17 = *(_QWORD *)(a2 + 200);
    if ( v17 )
      *(_QWORD *)(a2 + 200) = a2 + v17;
    v18 = *(_QWORD *)(a2 + 216);
    if ( v18 )
      *(_QWORD *)(a2 + 216) = a2 + v18;
    v19 = *(_QWORD *)(a2 + 232);
    if ( v19 )
      *(_QWORD *)(a2 + 232) = a2 + v19;
    v20 = *(_QWORD *)(a2 + 1048);
    if ( v20 )
      *(_QWORD *)(a2 + 1048) = a2 + v20;
    *(_DWORD *)(a2 + 8) = v6 | 1;
  }
  v7 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 72) = 0LL;
  v8 = (v7 >> 11) & 0x80 | 0x40;
  if ( (v7 & 0x400000) == 0 )
    v8 = (v7 >> 11) & 0x80;
  v9 = v8 | 0x40000;
  v10 = v7 & 0x800000;
  if ( !v10 )
    v9 = v8;
  return RtlpCreateUserProcess(a1, a2, v9, v10, v21, a5);
}
