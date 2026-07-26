/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C006E210
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C006E1C0 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0002960 (ndisSortNetBufferLists.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00263D8 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026498 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMIndicateSplitNblChain(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  int v6; // r10d
  _QWORD *p_Alignment; // r13
  __int64 CurrentIrql; // rax
  int v9; // esi
  unsigned int v10; // r11d
  struct _NET_BUFFER_LIST *Alignment; // r14
  __int64 v12; // rbp
  unsigned int v13; // edi
  struct _NET_BUFFER_LIST *v14; // r12
  struct _NET_BUFFER_LIST *v15; // r15
  char *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  char *PoolWithTag; // rbx
  struct _NET_BUFFER_LIST *v20; // rdi
  _QWORD *v21; // rbp
  struct _NET_BUFFER_LIST *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // r13d
  int v26; // r12d
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rcx
  struct _NET_BUFFER_LIST *v30; // rdx
  __int64 v31; // rsi
  unsigned int v32; // r12d
  int v33; // r15d
  unsigned int v34; // esi
  unsigned int i; // edi
  __int64 v36; // rax
  int v37; // r15d
  __int64 v38; // rbp
  __int64 v39; // rdi
  __int64 v40; // rcx
  struct _NET_BUFFER_LIST *v41; // rdx
  _QWORD *v42; // rcx
  unsigned int v43; // [rsp+30h] [rbp-68h]
  _BYTE v44[12]; // [rsp+34h] [rbp-64h]
  _SLIST_HEADER *v45; // [rsp+40h] [rbp-58h]
  char v48; // [rsp+B8h] [rbp+20h]

  if ( a2 )
  {
    v6 = a5;
    p_Alignment = 0LL;
    *(_DWORD *)&v44[8] = 0;
    CurrentIrql = a5 & 1;
    v9 = a5 & 2;
    *(_QWORD *)v44 = CurrentIrql;
    v10 = a3;
    Alignment = a2;
    v12 = a1;
    do
    {
      v13 = 0;
      v45 = (_SLIST_HEADER *)Alignment;
      v14 = Alignment;
      if ( a6 )
      {
        do
        {
          if ( !Alignment )
            break;
          ++v13;
          p_Alignment = &Alignment->Link.Alignment;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( v13 < a6 );
        *(_QWORD *)&v44[4] = p_Alignment;
      }
      *p_Alignment = 0LL;
      v15 = 0LL;
      v43 = 0;
      v48 = 0;
      if ( ((_DWORD)CurrentIrql || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2))
        && ndisPerProcRcvTrackers
        && (LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number,
            v16 = (char *)ndisPerProcRcvTrackers,
            v17 = 2096 * CurrentIrql,
            v43 = CurrentIrql,
            v18 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentIrql),
            (unsigned int)v18 < 3) )
      {
        v48 = 1;
        PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v18 + v17 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v17) = v18 + 1;
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C00A0253 >= 2u )
            WPP_SF_(0xAu, &WPP_708561b8cd4433a8527d88173b1ed8eb_Traceguids);
          v20 = v14;
          goto LABEL_52;
        }
        v6 = a5;
        v10 = a3;
      }
      v21 = *(_QWORD **)(v12 + 400);
      v22 = v14;
      PoolWithTag[692] = 0;
      if ( !v9 )
      {
        do
        {
          v15 = v22;
          v22->Flags = v22->Flags & 0xFFFFFFF0 | 4;
          v22 = (struct _NET_BUFFER_LIST *)v22->Link.Alignment;
        }
        while ( v22 );
      }
      v23 = v21[41];
      if ( v23 && *(_BYTE *)(*(_QWORD *)(v23 + 24) + 56LL) >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v23, v14, (unsigned __int8 *)v10, v13, v6);
        *((_QWORD *)PoolWithTag + 8) = 0LL;
        *((_DWORD *)PoolWithTag + 20) = 0;
      }
      else
      {
        *(_QWORD *)PoolWithTag = a1;
        *((_QWORD *)PoolWithTag + 3) = v14;
        *((_QWORD *)PoolWithTag + 1) = v21;
        *((_DWORD *)PoolWithTag + 4) = v6;
        *((_QWORD *)PoolWithTag + 4) = v15;
        *((_DWORD *)PoolWithTag + 10) = v10;
        *((_DWORD *)PoolWithTag + 11) = v13;
        ndisSortNetBufferLists((__int64 *)PoolWithTag, v17, v16);
        if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
        {
          if ( !*v21 || a3 )
            PoolWithTag[692] = 1;
          else
            ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)PoolWithTag);
          if ( !v23 )
          {
            v24 = v21[1];
            if ( v24 )
            {
              v25 = *((_DWORD *)PoolWithTag + 172);
              v26 = *((_DWORD *)PoolWithTag + 4) | 2;
              do
              {
                v27 = *(_QWORD *)(v24 + 424);
                v28 = 0LL;
                do
                {
                  v29 = (unsigned int)v28;
                  v30 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v28 + 64];
                  v28 = (unsigned int)(v28 + 1);
                  if ( v30 )
                    ndisMIndicateNetBufferListsToOpen(
                      v24,
                      v30,
                      (unsigned __int8 *)*((unsigned int *)PoolWithTag + 10),
                      *(_DWORD *)&PoolWithTag[40 * v29 + 80],
                      v26);
                }
                while ( (unsigned int)v28 <= v25 );
                v24 = v27;
              }
              while ( v27 );
              p_Alignment = *(_QWORD **)&v44[4];
            }
            v31 = v21[2];
            if ( v31 )
            {
              v32 = *((_DWORD *)PoolWithTag + 172);
              v33 = *((_DWORD *)PoolWithTag + 4);
              if ( (a5 & 2) != 0 )
              {
                v37 = v33 | 2;
                do
                {
                  v38 = *(_QWORD *)(v31 + 424);
                  v39 = 0LL;
                  do
                  {
                    v40 = (unsigned int)v39;
                    v41 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v39 + 64];
                    v39 = (unsigned int)(v39 + 1);
                    if ( v41 )
                      ndisMIndicateNetBufferListsToOpen(
                        v31,
                        v41,
                        (unsigned __int8 *)*((unsigned int *)PoolWithTag + 10),
                        *(_DWORD *)&PoolWithTag[40 * v40 + 80],
                        v37);
                  }
                  while ( (unsigned int)v39 <= v32 );
                  v31 = v38;
                }
                while ( v38 );
              }
              else
              {
                v34 = *((_DWORD *)PoolWithTag + 10);
                if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2260LL) )
                  ndisIndicateToPmodeOpens((__int64)PoolWithTag);
                for ( i = 1; i <= v32; ++i )
                {
                  v36 = i;
                  ndisMIndicateNetBufferListsToOpen(
                    *(_QWORD *)&PoolWithTag[40 * v36 + 56],
                    *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v36 + 64],
                    (unsigned __int8 *)v34,
                    *(_DWORD *)&PoolWithTag[40 * v36 + 80],
                    v33);
                }
              }
            }
          }
        }
      }
      if ( !PoolWithTag[692] )
        goto LABEL_58;
      v20 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
      v9 = a5 & 2;
      v12 = a1;
LABEL_52:
      if ( v20 )
      {
        if ( byte_1C009FE30 && (*(_DWORD *)(v12 + 5916) & 2) != 0 )
          PktMonClientNblDropNdis(v12 + 5864, (__int64)v20, (__int64)v16, 1LL, 0xC0010012);
        if ( !v9 )
          ndisReturnNetBufferListsInternal(v12, v20, *(unsigned int *)v44, 0LL);
      }
LABEL_58:
      if ( v48 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v43);
      }
      else if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      v9 = a5 & 2;
      if ( (a5 & 2) != 0 )
      {
        if ( *p_Alignment )
        {
          p_Alignment = &v45->Alignment;
          *(_QWORD *)&v44[4] = v45;
          v42 = (_QWORD *)v45->Alignment;
          if ( v45->Alignment )
          {
            do
            {
              p_Alignment = v42;
              *(_QWORD *)&v44[4] = v42;
              v42 = (_QWORD *)*v42;
            }
            while ( v42 );
          }
        }
        *p_Alignment = Alignment;
      }
      v12 = a1;
      CurrentIrql = *(unsigned int *)v44;
      v6 = a5;
      v10 = a3;
    }
    while ( Alignment );
  }
}
