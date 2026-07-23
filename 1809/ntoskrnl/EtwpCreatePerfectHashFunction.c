/*
 * XREFs of EtwpCreatePerfectHashFunction @ 0x1408C321C
 * Callers:
 *     EtwpAllocateFilter @ 0x1408C2A1C (EtwpAllocateFilter.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     EtwpFillPerfectHashTable @ 0x1408C3438 (EtwpFillPerfectHashTable.c)
 */

__int64 __fastcall EtwpCreatePerfectHashFunction(char a1, _WORD *a2, unsigned __int16 a3, _QWORD *a4)
{
  unsigned __int8 v4; // bl
  _QWORD *v7; // r13
  unsigned __int16 v8; // r14
  char v9; // r15
  int v10; // ecx
  unsigned __int16 v11; // dx
  int v12; // r8d
  char v13; // r9
  unsigned __int16 v14; // r10
  _WORD *v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // r8
  __int64 v18; // r11
  __int64 v19; // rcx
  char v20; // cl
  unsigned __int16 v21; // si
  unsigned __int16 v22; // ax
  unsigned __int16 v24; // di
  _BYTE *PoolWithTag; // rax
  __int64 v26; // rcx
  __int16 v28; // [rsp+34h] [rbp-264h] BYREF
  int v29; // [rsp+38h] [rbp-260h]
  _QWORD *v30; // [rsp+40h] [rbp-258h]
  _BYTE v31[2]; // [rsp+50h] [rbp-248h] BYREF
  _DWORD v32[127]; // [rsp+52h] [rbp-246h] BYREF

  v4 = 0;
  v7 = a4;
  v30 = a4;
  v8 = 0;
  v28 = 0;
  v9 = 0;
  v10 = a3 - 1;
  v11 = 1;
  v12 = 63;
  v29 = 63;
  if ( v10 > 1 )
  {
    do
      v11 = (2 * v11) | 1;
    while ( v11 < v10 );
    if ( v11 > 0x40u )
      return 3221225473LL;
  }
LABEL_4:
  v13 = 0;
  while ( 1 )
  {
    v14 = 0;
    v15 = v32;
    v16 = 128LL;
    do
    {
      *v15 = -1;
      v15 += 2;
      --v16;
    }
    while ( v16 );
    if ( a3 )
    {
      v17 = a2;
      v18 = a3;
      do
      {
        v19 = (unsigned __int16)(v11 & __ROR2__(*v17, v13));
        if ( LOWORD(v32[v19]) == 0xFFFF )
        {
          ++v14;
          LOWORD(v32[v19]) = *v17;
        }
        ++v17;
        --v18;
      }
      while ( v18 );
      v7 = v30;
      v12 = v29;
    }
    v20 = v13;
    v21 = v11;
    if ( v14 <= v8 )
    {
      v20 = v9;
      v21 = v12;
    }
    v22 = v14;
    v9 = v20;
    if ( v14 <= v8 )
      v22 = v8;
    v8 = v22;
    if ( v14 == a3 )
      break;
    ++v13;
    v12 = v21;
    v29 = v21;
    if ( (unsigned __int8)v13 >= 0x10u )
    {
      v11 = (2 * v11) | 1;
      if ( v11 <= 0x40u )
        goto LABEL_4;
      break;
    }
  }
  if ( !v22 )
    return 3221225473LL;
  LOBYTE(v12) = v20;
  v24 = EtwpFillPerfectHashTable((_DWORD)a2, a3, v12, v21, (__int64)v31, (__int64)&v28);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(4 * v24 + 10), 0x46777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = v9;
  *((_WORD *)PoolWithTag + 1) = v21;
  *((_WORD *)PoolWithTag + 2) = v24;
  *PoolWithTag = a1 != 0;
  if ( v24 )
  {
    do
    {
      v26 = v4++;
      *(_DWORD *)&PoolWithTag[4 * v26 + 6] = *(_DWORD *)&v31[4 * v26];
    }
    while ( v4 < v24 );
  }
  *v7 = PoolWithTag;
  return 0LL;
}
