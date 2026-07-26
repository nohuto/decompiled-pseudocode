/*
 * XREFs of ndisSortNetBufferLists @ 0x1C0002960
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002160 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0023280 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006C844 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006D9F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006E210 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 */

__int64 __fastcall ndisSortNetBufferLists(__int64 *a1, __int64 a2, char *a3)
{
  char v4; // r9
  int v5; // r11d
  unsigned int v6; // r13d
  __int64 v7; // rax
  _QWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 result; // rax
  unsigned __int16 v12; // di
  __int64 v13; // rax
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // r15
  unsigned int v19; // esi
  char *v20; // r8
  char *v21; // rax
  __int64 v22; // r10
  unsigned int v23; // ecx
  _WORD *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 *v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // [rsp+30h] [rbp-78h]
  __int64 v32; // [rsp+38h] [rbp-70h]
  _QWORD *v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  __int64 v35; // [rsp+50h] [rbp-58h]
  char v36; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v37; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v38; // [rsp+C0h] [rbp+18h]
  int v39; // [rsp+C8h] [rbp+20h]

  v4 = 0;
  v36 = 0;
  v31 = 0;
  v5 = 0;
  v39 = 0;
  v6 = 0;
  v7 = a1[1];
  v8 = 0LL;
  v9 = *a1;
  v10 = a1[3];
  *((_DWORD *)a1 + 172) = 0;
  v32 = v9;
  v33 = 0LL;
  v35 = 0LL;
  if ( *(_QWORD *)(v7 + 328) || (result = *((unsigned int *)a1 + 4), (result & 2) != 0) )
  {
    a1[8] = v10;
    a1[9] = a1[4];
    a1[7] = 0LL;
    result = *((unsigned int *)a1 + 11);
    *((_DWORD *)a1 + 20) = result;
    return result;
  }
  v12 = 0;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)v10;
      v14 = 0;
      *(_QWORD *)v10 = 0LL;
      v34 = v13;
      if ( *(_DWORD *)(*a1 + 464) )
        break;
      v15 = *(_QWORD *)(v10 + 8);
      v16 = *(_QWORD *)(v15 + 8);
      if ( !v16 )
        goto LABEL_48;
      v17 = *(_DWORD *)(v16 + 40);
      if ( v17 < 0xE )
        goto LABEL_48;
      v18 = *(unsigned int *)(v15 + 16);
      if ( v17 <= (unsigned int)v18 )
        goto LABEL_48;
      v19 = v17 - v18;
      if ( v17 - (unsigned int)v18 < 0xE )
        goto LABEL_48;
      if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
      {
        v20 = *(char **)(v16 + 24);
      }
      else
      {
        v21 = (char *)MmMapLockedPages((PMDL)v16, 0);
        v4 = v36;
        v20 = v21;
        v5 = v39;
        v8 = v33;
      }
      a3 = &v20[v18];
      HIBYTE(v37) = a3[13];
      HIBYTE(v38) = a3[12];
      LOBYTE(v38) = HIBYTE(v37);
      LOBYTE(v37) = HIBYTE(v38);
      if ( v38 > 0x600u )
      {
        if ( v38 == 0x8100 )
        {
          if ( v17 < 0x12 || v19 < 0x12 )
          {
LABEL_47:
            v9 = v32;
LABEL_48:
            if ( v8 )
              *v8 = v10;
            else
              v35 = v10;
            ++*(_QWORD *)(v9 + 3472);
            v8 = (_QWORD *)v10;
            v33 = (_QWORD *)v10;
            goto LABEL_52;
          }
          v37 = *((_WORD *)a3 + 8);
        }
        v12 = v37;
        goto LABEL_24;
      }
      if ( v19 < 0x16 )
        goto LABEL_47;
      if ( a3[14] == -86 && a3[15] == -86 && a3[16] == 3 )
      {
        v12 = *((_WORD *)a3 + 10);
        goto LABEL_24;
      }
LABEL_25:
      v22 = a1[1];
      if ( !v14 )
        goto LABEL_34;
      if ( v31 == v12 )
      {
        LODWORD(a3) = v5;
        if ( v4 != 1 )
          goto LABEL_34;
      }
      else
      {
        v23 = *(_DWORD *)(v22 + 24);
        LODWORD(a3) = 0;
        v31 = v12;
        if ( !v23 )
        {
LABEL_33:
          v5 = 0;
          v36 = 0;
          v39 = 0;
LABEL_34:
          LODWORD(v25) = 0;
          goto LABEL_35;
        }
        v24 = (_WORD *)(v22 + 32);
        while ( v12 != *v24 )
        {
          LODWORD(a3) = (_DWORD)a3 + 1;
          v24 += 8;
          if ( (unsigned int)a3 >= v23 )
            goto LABEL_33;
        }
        v5 = (int)a3;
        v39 = (int)a3;
        v36 = 1;
      }
      if ( LOWORD(a1[5 * v6 + 6]) == v12 )
      {
        LODWORD(v25) = v6;
      }
      else
      {
        v28 = *((_DWORD *)a1 + 172);
        LODWORD(v25) = 1;
        if ( v28 )
        {
          while ( LOWORD(a1[5 * (unsigned int)v25 + 6]) != v12 )
          {
            LODWORD(v25) = v25 + 1;
            if ( (unsigned int)v25 > v28 )
              goto LABEL_44;
          }
          v6 = v25;
        }
        else
        {
LABEL_44:
          v25 = v28 + 1;
          *((_DWORD *)a1 + 172) = v25;
          v29 = 5 * v25;
          LOWORD(a1[v29 + 6]) = v12;
          v6 = v28 + 1;
          a1[v29 + 7] = *(_QWORD *)(v22 + 16 * ((unsigned int)a3 + 1LL) + 24);
          a1[v29 + 8] = 0LL;
        }
      }
LABEL_35:
      v26 = &a1[5 * (unsigned int)v25];
      v27 = &a1[5 * (unsigned int)v25 + 10];
      if ( v26[8] )
      {
        v8 = v33;
        *(_QWORD *)v26[9] = v10;
        ++*(_DWORD *)v27;
        v26[9] = v10;
        v9 = v32;
      }
      else
      {
        v26[8] = v10;
        if ( (a1[2] & 0x100) != 0 )
        {
          v26[9] = 0LL;
          *(_QWORD *)v10 = v34;
          result = *((unsigned int *)a1 + 11);
          *(_DWORD *)v27 = result;
LABEL_55:
          if ( v35 )
          {
            if ( byte_1C009FE30 )
            {
              result = *(unsigned int *)(v32 + 5916);
              if ( (result & 2) != 0 )
                result = PktMonClientNblDropNdis((int)v32 + 5864, v35, (_DWORD)a3, 1, -1073676273, -536866810);
            }
            v30 = *((_DWORD *)a1 + 4);
            if ( (v30 & 2) == 0 )
              return ndisReturnNetBufferListsInternal(v32, v35, v30 & 1, 0LL);
          }
          return result;
        }
        v8 = v33;
        v26[9] = v10;
        v9 = v32;
        *(_DWORD *)v27 = 1;
      }
LABEL_52:
      result = v34;
      v10 = v34;
      if ( !v34 )
        goto LABEL_55;
      v4 = v36;
    }
    v12 = *(_WORD *)(v10 + 200);
LABEL_24:
    v14 = 1;
    goto LABEL_25;
  }
  return result;
}
