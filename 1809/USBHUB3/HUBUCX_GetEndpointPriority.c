/*
 * XREFs of HUBUCX_GetEndpointPriority @ 0x1C0021914
 * Callers:
 *     HUBUCX_CreateEndpointsInUCX @ 0x1C0021A78 (HUBUCX_CreateEndpointsInUCX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBUCX_GetEndpointPriority(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // r10d
  __int64 v9; // r11
  __int16 v10; // si
  char v11; // bp
  unsigned int v12; // r11d
  char v13; // bp
  __int16 v14; // r13
  __int64 v15; // rax
  unsigned int v16; // edx
  __int16 v17; // r15
  __int16 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // r11d
  unsigned int v22; // r9d
  __int64 v23; // r8
  __int16 v24; // ax
  __int16 v25; // ax
  __int16 v26; // ax

  v5 = 0;
  v9 = *(_QWORD *)(a3 + 32);
  if ( (*(_BYTE *)(v9 + 3) & 3) != 2 )
    return (unsigned int)-1073741275;
  v10 = 0;
  v11 = *(_BYTE *)(v9 + 2);
  v12 = *(_DWORD *)(a2 + 24);
  v13 = v11 & 0x80;
  v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 2016) + 5LL);
  v15 = *(_QWORD *)(a2 + 32);
  v16 = 0;
  v17 = *(unsigned __int8 *)(v15 + 2);
  v18 = *(unsigned __int8 *)(v15 + 3);
  if ( v12 )
  {
    v19 = a2 + 40;
    do
    {
      if ( v19 == a3 )
        break;
      v20 = *(_QWORD *)(v19 + 32);
      if ( (*(_BYTE *)(v20 + 3) & 3) == 2 && (*(_BYTE *)(v20 + 2) & 0x80) == v13 )
        ++v10;
      ++v16;
      v19 += 72LL;
    }
    while ( v16 < v12 );
  }
  if ( v16 != v12 && (v21 = *(_DWORD *)(a1 + 2696), v22 = 0, v21) )
  {
    v23 = *(_QWORD *)(a1 + 2688);
    while ( 1 )
    {
      v24 = *(_WORD *)(v23 + 20LL * v22);
      if ( v24 == v14 || v24 == -1 )
      {
        v25 = *(_WORD *)(v23 + 20LL * v22 + 2);
        if ( v25 == v17 || v25 == -1 )
        {
          v26 = *(_WORD *)(v23 + 20LL * v22 + 4);
          if ( (v26 == v18 || v26 == -1)
            && (*(_DWORD *)(v23 + 20LL * v22 + 8) == 0) == v13
            && *(_WORD *)(v23 + 20LL * v22 + 12) == v10 )
          {
            break;
          }
        }
      }
      if ( ++v22 >= v21 )
        return (unsigned int)-1073741275;
    }
    *a4 = *(_DWORD *)(v23 + 20LL * v22 + 16);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
