/*
 * XREFs of MiQueryMemoryListInformation @ 0x140090FB4
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x140609464 (MmManagePartitionMemoryInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiQueryMemoryListInformation(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned int *v2; // r10
  unsigned __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 *v22; // rdx
  unsigned __int64 result; // rax

  v2 = (unsigned int *)(a1 + 527);
  v3 = a1[890];
  v4 = a2 + 13;
  *a2 = a1[272];
  v5 = 8LL;
  a2[1] = a1[280];
  a2[2] = a1[960];
  a2[3] = a1[968];
  a2[4] = a1[504];
  v6 = a1[974];
  v7 = a1 + 296;
  a2[21] = v6;
  do
  {
    v8 = *v7;
    v7 += 5;
    *(v4 - 8) = v8;
    v9 = *v2++;
    *v4++ = v9;
    --v5;
  }
  while ( v5 );
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3];
  v13 = a2[4];
  if ( *a2 > v3 )
  {
    *a2 = v3;
    v14 = 0LL;
  }
  else
  {
    v14 = v3 - *a2;
  }
  if ( v10 > v14 )
  {
    a2[1] = v14;
    v15 = 0LL;
  }
  else
  {
    v15 = v14 - v10;
  }
  v16 = v15;
  if ( v11 > v15 )
  {
    a2[2] = v15;
    v17 = 0LL;
  }
  else
  {
    v17 = v15 - v11;
    v16 = v11;
  }
  if ( v12 > v17 )
  {
    a2[3] = v17;
    v18 = 0LL;
  }
  else
  {
    v18 = v17 - v12;
  }
  if ( v13 > v18 )
  {
    a2[4] = v18;
    v19 = 0LL;
  }
  else
  {
    v19 = v18 - v13;
  }
  v20 = a2[21];
  if ( v20 >= v16 )
    v20 = v16;
  v21 = 8LL;
  a2[21] = v20;
  v22 = a2 + 5;
  do
  {
    result = *v22;
    if ( *v22 > v19 )
    {
      *v22 = v19;
      v19 = 0LL;
    }
    else
    {
      v19 -= result;
    }
    ++v22;
    --v21;
  }
  while ( v21 );
  return result;
}
