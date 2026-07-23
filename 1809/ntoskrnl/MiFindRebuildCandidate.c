/*
 * XREFs of MiFindRebuildCandidate @ 0x1402CE488
 * Callers:
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 * Callees:
 *     MiCollapseRunTopDown @ 0x14009A65C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 */

__int64 __fastcall MiFindRebuildCandidate(__int16 *a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int *a6)
{
  unsigned int *v6; // r12
  int v7; // r13d
  int v8; // r10d
  __int64 v9; // rsi
  unsigned int *v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 i; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+C0h] [rbp+50h]

  v25 = a3;
  v6 = a6;
  v7 = 58720256;
  v8 = a2;
  v18 = 0LL;
  v19 = a5;
  v9 = *a6;
  v20 = a4;
  v21 = a4;
  v22 = 0;
  v10 = &a6[4 * v9 + 4];
  if ( a4 != 16 )
    v7 = 41943040;
  do
  {
LABEL_15:
    if ( !(_DWORD)v9 )
      return -1LL;
    v9 = (unsigned int)(v9 - 1);
  }
  while ( *((unsigned __int8 *)v10 + 2 * v9) != v8 || *((unsigned __int8 *)v10 + 2 * v9 + 1) != a3 );
  v16 = *(_QWORD *)&v6[4 * (unsigned int)v9 + 4];
  for ( i = *(_QWORD *)&v6[4 * (unsigned int)v9 + 6] + v16; ; i = v11 - v12 )
  {
    if ( !(unsigned int)MiCollapseRunTopDown((__int64)&v16) )
      goto LABEL_14;
    v11 = i;
    v12 = v21;
    LODWORD(a6) = 0;
    v13 = i - v21;
    v14 = MiPfnsWorthTrying(a1, 48 * (i - v21) - 0x58000000000LL, v21, v7, &a6);
    if ( !v14 )
      break;
    if ( v14 > v13 - v16 )
    {
      v19 = v11 - v14 - 1;
LABEL_14:
      v8 = a2;
      a3 = v25;
      goto LABEL_15;
    }
    if ( v14 > v12 )
      v12 = v14;
  }
  return v13;
}
