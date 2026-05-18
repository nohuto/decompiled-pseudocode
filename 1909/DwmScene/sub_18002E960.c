/*
 * XREFs of sub_18002E960 @ 0x18002E960
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 * Callees:
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

unsigned int *__fastcall sub_18002E960(unsigned int *a1, __int64 a2, unsigned int a3)
{
  int v5; // ebp
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  _DWORD *v15; // rax
  int v16; // eax
  int v17; // ecx
  _DWORD v19[10]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 44;
  memset(a1, 0, 0x2CuLL);
  *a1 = *(_DWORD *)a2;
  v7 = 0;
  a1[1] = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)(v8 - 23) <= 1 )
    v9 = 2;
  else
    v9 = (*(_BYTE *)(a2 + 20) & 8) != 0;
  v10 = sub_180029AD8(v8, v9);
  if ( v10 != 45 )
  {
    if ( v10 == 40 )
      v10 = 39;
    v5 = v10;
  }
  a1[4] = v5;
  if ( (*(_DWORD *)(a2 + 20) & 0x10) != 0 )
  {
    a1[10] |= 4u;
    a1[3] = 6;
  }
  else
  {
    a1[3] = 1;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0x20) != 0 )
  {
    v11 = a1[1];
    v12 = 0;
    if ( *a1 >= v11 )
      v11 = *a1;
    while ( v11 > 1 )
    {
      v11 >>= 1;
      ++v12;
    }
    v13 = v12 + 1;
    v14 = 15;
    if ( v13 < 0xF )
      v14 = v13;
    a1[10] |= 1u;
    a1[8] |= 0x28u;
    a1[2] = v14;
  }
  else
  {
    a1[2] = a3;
  }
  v15 = v19;
  do
    *v15++ = v7++;
  while ( v7 < 4 );
  a1[7] = v19[*(unsigned int *)(a2 + 24)];
  v16 = *(_DWORD *)(a2 + 24);
  if ( v16 == 2 || v16 == 3 )
  {
    a1[9] |= 0x10000u;
    if ( *(_DWORD *)(a2 + 24) == 3 )
      a1[9] |= 0x20000u;
  }
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
    a1[8] |= 8u;
  v17 = *(_DWORD *)(a2 + 20);
  if ( (v17 & 2) != 0 )
  {
    a1[8] |= 0x20u;
    v17 = *(_DWORD *)(a2 + 20);
  }
  if ( (v17 & 4) != 0 )
    a1[8] |= 0x40u;
  return a1;
}
