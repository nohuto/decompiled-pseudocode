/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C006D9F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002560 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0002960 (ndisSortNetBufferLists.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00263D8 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0026498 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  char v5; // bp
  struct _NET_BUFFER_LIST *v6; // r15
  __int64 v10; // rsi
  unsigned int Number; // r13d
  char *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  char *PoolWithTag; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // r12d
  int v21; // r15d
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  __int64 v26; // rsi
  unsigned int v27; // r15d
  int v28; // r14d
  unsigned int v29; // esi
  unsigned int i; // edi
  __int64 v31; // rax
  int v32; // r14d
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rcx
  struct _NET_BUFFER_LIST *v36; // rdx
  char v37; // [rsp+30h] [rbp-38h]
  unsigned int v38; // [rsp+34h] [rbp-34h]

  v5 = a5;
  v6 = 0LL;
  v38 = 0;
  v37 = 0;
  v10 = a1;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v12 = (char *)ndisPerProcRcvTrackers,
        v13 = 2096LL * Number,
        v38 = Number,
        v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13),
        (unsigned int)v14 < 3) )
  {
    v37 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v14 + v13 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C00A0253 >= 2u )
        WPP_SF_(0xAu, &WPP_708561b8cd4433a8527d88173b1ed8eb_Traceguids);
      goto LABEL_43;
    }
  }
  Alignment = a2;
  v17 = *(_QWORD **)(v10 + 400);
  PoolWithTag[692] = 0;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v6 = Alignment;
      Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
  v18 = v17[41];
  if ( v18 && *(_BYTE *)(*(_QWORD *)(v18 + 24) + 56LL) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v18, a2, (unsigned __int8 *)a3, a4, a5);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
  }
  else
  {
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 3) = a2;
    *((_QWORD *)PoolWithTag + 1) = v17;
    *((_DWORD *)PoolWithTag + 4) = a5;
    *((_QWORD *)PoolWithTag + 4) = v6;
    *((_DWORD *)PoolWithTag + 10) = a3;
    *((_DWORD *)PoolWithTag + 11) = a4;
    ndisSortNetBufferLists((__int64 *)PoolWithTag, a5, v12);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*v17 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)PoolWithTag);
      if ( !v18 )
      {
        v19 = v17[1];
        if ( v19 )
        {
          v20 = *((_DWORD *)PoolWithTag + 172);
          v21 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            v22 = *(_QWORD *)(v19 + 424);
            v23 = 0LL;
            do
            {
              v24 = (unsigned int)v23;
              v25 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v23 + 64];
              v23 = (unsigned int)(v23 + 1);
              if ( v25 )
                ndisMIndicateNetBufferListsToOpen(
                  v19,
                  v25,
                  (unsigned __int8 *)*((unsigned int *)PoolWithTag + 10),
                  *(_DWORD *)&PoolWithTag[40 * v24 + 80],
                  v21);
            }
            while ( (unsigned int)v23 <= v20 );
            v19 = v22;
          }
          while ( v22 );
        }
        v26 = v17[2];
        if ( v26 )
        {
          v27 = *((_DWORD *)PoolWithTag + 172);
          v28 = *((_DWORD *)PoolWithTag + 4);
          if ( (a5 & 2) != 0 )
          {
            v32 = v28 | 2;
            do
            {
              v33 = *(_QWORD *)(v26 + 424);
              v34 = 0LL;
              do
              {
                v35 = (unsigned int)v34;
                v36 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v34 + 64];
                v34 = (unsigned int)(v34 + 1);
                if ( v36 )
                  ndisMIndicateNetBufferListsToOpen(
                    v26,
                    v36,
                    (unsigned __int8 *)*((unsigned int *)PoolWithTag + 10),
                    *(_DWORD *)&PoolWithTag[40 * v35 + 80],
                    v32);
              }
              while ( (unsigned int)v34 <= v27 );
              v26 = v33;
            }
            while ( v33 );
          }
          else
          {
            v29 = *((_DWORD *)PoolWithTag + 10);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2260LL) )
              ndisIndicateToPmodeOpens((__int64)PoolWithTag);
            for ( i = 1; i <= v27; ++i )
            {
              v31 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(_QWORD *)&PoolWithTag[40 * v31 + 56],
                *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v31 + 64],
                (unsigned __int8 *)v29,
                *(_DWORD *)&PoolWithTag[40 * v31 + 80],
                v28);
            }
          }
        }
      }
    }
  }
  if ( PoolWithTag[692] )
  {
    a2 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
    v10 = a1;
    v5 = a5;
LABEL_43:
    if ( a2 )
    {
      if ( byte_1C009FE30 && (*(_DWORD *)(v10 + 5916) & 2) != 0 )
        PktMonClientNblDropNdis(v10 + 5864, (__int64)a2, (__int64)v12, 1LL, 0xC0010012);
      if ( (v5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(v10, a2, a5 & 1, 0LL);
    }
  }
  if ( v37 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v38);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
