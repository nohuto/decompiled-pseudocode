/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C000B7D0
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038710 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC480 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD2D4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE460 (ndisMDispatchReceiveNetBufferLists.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C00AEFB8 (ndisReturnNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  __int64 v1; // rax
  struct _NDIS_MINIPORT_BLOCK *v2; // r8
  char v3; // r11
  __int64 *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned __int16 v9; // r12
  __int64 *v10; // r13
  char v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rbx
  char *v16; // r8
  char *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  _QWORD *v21; // rcx
  unsigned int v22; // ecx
  _WORD *v23; // rax
  unsigned int v24; // r10d
  __int64 v25; // rcx
  char *v26; // rax
  unsigned int v27; // [rsp+30h] [rbp-68h]
  int v28; // [rsp+34h] [rbp-64h]
  struct _NET_BUFFER_LIST *v29; // [rsp+38h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v30; // [rsp+40h] [rbp-58h]
  _QWORD *v31; // [rsp+48h] [rbp-50h]
  char v32; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v33; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v34; // [rsp+B0h] [rbp+18h]
  unsigned int v35; // [rsp+B8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 1);
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 0;
  v4 = (__int64 *)*((_QWORD *)a1 + 3);
  v5 = 0LL;
  *((_DWORD *)a1 + 172) = 0;
  v7 = 0;
  v28 = 0;
  v8 = 0;
  v32 = 0;
  v35 = 0;
  v27 = 0;
  v30 = v2;
  v31 = 0LL;
  v29 = 0LL;
  if ( *(_QWORD *)(v1 + 328) || (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    *((_QWORD *)a1 + 8) = v4;
    *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  v9 = 0;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v10 = (__int64 *)*v4;
      v11 = 0;
      *v4 = 0LL;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 464LL) )
        break;
      v12 = v4[1];
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(_DWORD *)(v13 + 40);
      if ( v14 < 0xE )
        goto LABEL_51;
      v15 = *(unsigned int *)(v12 + 16);
      if ( v14 <= (unsigned int)v15 || v14 - (unsigned int)v15 < 0xE )
        goto LABEL_51;
      if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
      {
        v16 = *(char **)(v13 + 24);
      }
      else
      {
        v26 = (char *)MmMapLockedPages((PMDL)v13, 0);
        v8 = v27;
        v16 = v26;
        v3 = v32;
        v7 = v35;
      }
      v17 = &v16[v15];
      HIBYTE(v33) = v17[13];
      HIBYTE(v34) = v17[12];
      LOBYTE(v34) = HIBYTE(v33);
      LOBYTE(v33) = HIBYTE(v34);
      if ( v34 > 0x600u )
      {
        if ( v34 == 0x8100 )
        {
          if ( v14 < 0x12 || v14 - (unsigned int)v15 < 0x12 )
          {
            v2 = v30;
            v5 = v29;
LABEL_51:
            if ( v31 )
            {
              *v31 = v4;
            }
            else
            {
              v5 = (struct _NET_BUFFER_LIST *)v4;
              v29 = (struct _NET_BUFFER_LIST *)v4;
            }
            ++v2->InvalidFrames;
            v31 = v4;
            goto LABEL_21;
          }
          v33 = *((_WORD *)v17 + 8);
        }
        v9 = v33;
        goto LABEL_13;
      }
      if ( v17[14] == -86 && v17[15] == -86 && v17[16] == 3 )
      {
        v9 = *((_WORD *)v17 + 10);
        goto LABEL_13;
      }
LABEL_14:
      v18 = *((_QWORD *)a1 + 1);
      if ( !v11 )
        goto LABEL_34;
      if ( v28 == v9 )
      {
        if ( v3 != 1 )
          goto LABEL_34;
      }
      else
      {
        v22 = *(_DWORD *)(v18 + 24);
        v7 = 0;
        v28 = v9;
        if ( !v22 )
        {
LABEL_33:
          v3 = 0;
          v35 = 0;
          v32 = 0;
LABEL_34:
          LODWORD(v2) = 0;
          goto LABEL_19;
        }
        v23 = (_WORD *)(v18 + 32);
        while ( v9 != *v23 )
        {
          ++v7;
          v23 += 8;
          if ( v7 >= v22 )
            goto LABEL_33;
        }
        v3 = 1;
        v35 = v7;
        v32 = 1;
      }
      if ( *((_WORD *)a1 + 20 * v8 + 24) == v9 )
      {
        LODWORD(v2) = v8;
      }
      else
      {
        v24 = *((_DWORD *)a1 + 172);
        LODWORD(v2) = 1;
        if ( v24 )
        {
          while ( *((_WORD *)a1 + 20 * (unsigned int)v2 + 24) != v9 )
          {
            LODWORD(v2) = (_DWORD)v2 + 1;
            if ( (unsigned int)v2 > v24 )
              goto LABEL_29;
          }
          v8 = (unsigned int)v2;
          v27 = (unsigned int)v2;
        }
        else
        {
LABEL_29:
          v2 = (struct _NDIS_MINIPORT_BLOCK *)(v24 + 1);
          *((_DWORD *)a1 + 172) = (_DWORD)v2;
          v25 = 5LL * (_QWORD)v2;
          *((_WORD *)a1 + 4 * v25 + 24) = v9;
          v27 = v24 + 1;
          v8 = v24 + 1;
          *((_QWORD *)a1 + v25 + 7) = *(_QWORD *)(v18 + 16 * (v7 + 1LL) + 24);
          *((_QWORD *)a1 + v25 + 8) = 0LL;
        }
      }
LABEL_19:
      v19 = 5LL * (unsigned int)v2;
      v20 = (_DWORD *)((char *)a1 + 8 * v19 + 80);
      if ( *((_QWORD *)a1 + 5 * (unsigned int)v2 + 8) )
      {
        v21 = (_QWORD *)*((_QWORD *)a1 + 5 * (unsigned int)v2 + 9);
        v7 = v35;
        v2 = v30;
        *v21 = v4;
        ++*v20;
        v5 = v29;
        *((_QWORD *)a1 + v19 + 9) = v4;
      }
      else
      {
        *((_QWORD *)a1 + 5 * (unsigned int)v2 + 8) = v4;
        if ( (*((_DWORD *)a1 + 4) & 0x100) != 0 )
        {
          *((_QWORD *)a1 + 5 * (unsigned int)v2 + 9) = 0LL;
          *v4 = (__int64)v10;
          *v20 = *((_DWORD *)a1 + 11);
          v5 = v29;
LABEL_22:
          if ( v5 )
          {
            if ( byte_1C00E5E20 && (*((_DWORD *)&v30->PktMonComp + 3) & 2) != 0 )
            {
              PktMonClientNblDropNdis((_DWORD)v30 + 5800, (_DWORD)v5, (_DWORD)v2, 1, -1073676273, -536866810);
              v5 = v29;
            }
            if ( (*((_DWORD *)a1 + 4) & 2) == 0 )
              ndisReturnNetBufferListsInternal(v30, v5);
          }
          return;
        }
        v7 = v35;
        v2 = v30;
        *v20 = 1;
        v5 = v29;
        *((_QWORD *)a1 + v19 + 9) = v4;
      }
LABEL_21:
      v4 = v10;
      if ( !v10 )
        goto LABEL_22;
    }
    v9 = *((_WORD *)v4 + 100);
LABEL_13:
    v11 = 1;
    goto LABEL_14;
  }
}
