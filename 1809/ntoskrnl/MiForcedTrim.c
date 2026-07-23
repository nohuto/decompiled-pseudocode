/*
 * XREFs of MiForcedTrim @ 0x14013F310
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140130D18 (MiPreUnlockWorkingSetShared.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 *     MiTrimWorkingSet @ 0x140130F08 (MiTrimWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x1402B3310 (MiForceAgeWorkingSet.c)
 */

__int64 __fastcall MiForcedTrim(__int64 a1, char a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // r14
  __int64 v5; // r13
  __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r11
  unsigned int v12; // ecx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rsi
  unsigned int v17; // r10d
  char v18; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+70h] [rbp+8h]

  v2 = 0LL;
  v4 = *(_QWORD **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v5 = v4[878];
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v4, 6u);
  v7 = *(_QWORD *)(a1 + 136);
  v8 = AvailablePagesBelowPriority;
  v9 = *(_QWORD *)(v5 + 2408);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v7 <= v10 )
    return 0LL;
  v11 = v7 - v10;
  v24 = v4[890];
  v12 = 1;
  v13 = 0LL;
  v14 = (15 * v11 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  v15 = (_QWORD *)(a1 + 48);
  v16 = (v14 + ((15 * v11 - v14) >> 1)) >> 6;
  do
  {
    v13 += *v15;
    if ( v13 >= v16 )
      break;
    ++v12;
    ++v15;
  }
  while ( v12 < 8 );
  v17 = 7;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    v20 = v4[890];
    v21 = v24 / 0xA;
    if ( v11 < v24 )
      v20 = v11;
    if ( 16 * v9 <= v21 )
      v21 = 16 * v9;
    v9 = v21 * (100 * v20 / v24) / 0x64;
    v14 = v11 / 0xA;
    if ( v9 > v11 / 0xA )
      v9 = v11 / 0xA;
  }
  if ( v8 >= v9 )
    goto LABEL_7;
  v22 = v9 - v8;
  v14 = 0LL;
  if ( v22 < 0x10 )
    v22 = 16LL;
  while ( 1 )
  {
    v14 += *(_QWORD *)(a1 + 8LL * v17 + 40);
    if ( v14 >= v22 )
      break;
    if ( --v17 == 1 )
      goto LABEL_26;
  }
  v14 = v22;
LABEL_26:
  if ( v14 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      v14 &= -(__int64)(v8 < v4[765] >> 1);
    v18 = a2;
    if ( v14 )
    {
      v23 = MiTrimWorkingSet(a1, v14, a2, v17, 121);
      *(_QWORD *)(v5 + 2488) += v23;
      v2 = v23;
    }
  }
  else
  {
LABEL_7:
    v18 = a2;
  }
  if ( v13 < v16 || (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
  {
    LOBYTE(v14) = v18;
    MiForceAgeWorkingSet(a1, v14);
  }
  return v2;
}
