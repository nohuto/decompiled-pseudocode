/*
 * XREFs of MiFindRebuildCandidate @ 0x1402E8900
 * Callers:
 *     MiRebuildLargePage @ 0x1402E8A58 (MiRebuildLargePage.c)
 * Callees:
 *     MiCollapseRunTopDown @ 0x1400BA3FC (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1400BA490 (MiPfnsWorthTrying.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiFindRebuildCandidate(__int16 *a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int *a6)
{
  int v7; // esi
  unsigned int *v9; // r13
  int v10; // eax
  __int64 v11; // r14
  unsigned int *v12; // r12
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  _QWORD v18[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+D0h] [rbp+60h]

  v7 = a3;
  memset(v18, 0, 0x38uLL);
  v9 = a6;
  v18[3] = a5;
  v10 = 58720256;
  v18[4] = a4;
  v18[5] = a4;
  v11 = *a6;
  LOBYTE(v18[6]) = 0;
  v12 = &a6[4 * v11 + 4];
  if ( a4 != 16 )
    v10 = 41943040;
  v21 = v10;
  do
  {
LABEL_15:
    if ( !(_DWORD)v11 )
      return -1LL;
    v11 = (unsigned int)(v11 - 1);
  }
  while ( *((unsigned __int8 *)v12 + 2 * v11) != a2 || *((unsigned __int8 *)v12 + 2 * v11 + 1) != v7 );
  v18[0] = *(_QWORD *)&v9[4 * (unsigned int)v11 + 4];
  for ( v18[1] = *(_QWORD *)&v9[4 * (unsigned int)v11 + 6] + v18[0]; ; v18[1] = v13 - v14 )
  {
    if ( !(unsigned int)MiCollapseRunTopDown((__int64)v18) )
      goto LABEL_14;
    v13 = v18[1];
    v14 = v18[5];
    LODWORD(a6) = 0;
    v15 = v18[1] - v18[5];
    v16 = MiPfnsWorthTrying(a1, 48LL * (v18[1] - v18[5]) - 0x58000000000LL, v18[5], v21, &a6);
    if ( !v16 )
      break;
    if ( v16 > v15 - v18[0] )
    {
      v18[3] = v13 - v16 - 1;
LABEL_14:
      v7 = a3;
      goto LABEL_15;
    }
    if ( v16 > v14 )
      v14 = v16;
  }
  return v15;
}
