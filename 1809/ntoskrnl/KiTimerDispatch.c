/*
 * XREFs of KiTimerDispatch @ 0x14034BB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTimerDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // r10
  _QWORD *v6; // rbx
  unsigned __int64 *v7; // rcx
  char v8; // al
  unsigned __int64 v9; // rsi
  unsigned int v10; // r11d
  __int64 v11; // rdi
  char v12; // cl
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]
  unsigned __int64 v20; // [rsp+58h] [rbp+10h]

  _mm_lfence();
  v2 = 16LL;
  v3 = a2 ^ *(_QWORD *)(a1 + 64);
  v4 = &v18;
  v18 = 0xB7BCB9B6B8B5B3B0uLL;
  v5 = v3 | 0xFFFF800000000000uLL;
  v19 = 0xB2BBBFB1B4BEBABDuLL;
  v6 = (_QWORD *)v5;
  v7 = &v18;
  v20 = __ROR8__(v5, v5 & 0x3F);
  do
  {
    v8 = *(_BYTE *)v7;
    v7 = (unsigned __int64 *)((char *)v7 + 1);
    *(_BYTE *)v4 = v8 ^ 0xB0;
    v4 = (unsigned __int64 *)((char *)v4 + 1);
    --v2;
  }
  while ( v2 );
  v9 = v20;
  v10 = 0;
  v11 = 0LL;
  do
  {
    v12 = ~(unsigned __int8)*v6 & 0x3F;
    v13 = *v6 & 0x3FLL;
    v14 = v11 + (v9 ^ *v6);
    *v6 = v14;
    v15 = 16LL;
    v9 = v5 + __ROL8__(__ROR8__(v10 * (200 - v10), v12) ^ v9, v13);
    do
    {
      v14 = __ROR8__(*((unsigned __int8 *)&v18 + (*(_BYTE *)v6 & 0xF)) | v14 & 0xFFFFFFFFFFFFFFF0uLL, 4);
      *v6 = v14;
      --v15;
    }
    while ( v15 );
    ++v6;
    ++v10;
    v11 += v5;
  }
  while ( v10 < 0x19 );
  v16 = *(_QWORD *)v5 ^ 0x85131481131482ELL;
  *(_DWORD *)v5 = 288442414;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD, unsigned __int64, unsigned __int64))v5)(
           v5,
           v16,
           0LL,
           0LL,
           v18,
           v19);
}
