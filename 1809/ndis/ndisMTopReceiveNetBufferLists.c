/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C0002160
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
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMTopReceiveNetBufferLists(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  __int64 *v7; // rsi
  __int64 *v9; // rdi
  char v10; // r12
  unsigned int Number; // r14d
  unsigned int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // rdx
  char *PoolWithTag; // rbx
  _QWORD *v16; // r13
  __int64 *v17; // rax
  __int64 v18; // rbp
  int v19; // r8d
  __int64 v20; // rbp
  unsigned int v21; // esi
  int v22; // r12d
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  unsigned int v27; // esi
  int v28; // r13d
  unsigned int v29; // ebp
  unsigned int i; // edi
  __int64 v31; // rdx
  int v32; // r13d
  __int64 v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+38h] [rbp-50h]
  char v38; // [rsp+90h] [rbp+8h]
  __int64 v39; // [rsp+98h] [rbp+10h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (a2[16] & 0x8000) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 2160))(a1, a2);
    return;
  }
  if ( !*(_BYTE *)(a1 + 2681) )
  {
    (*(void (__fastcall **)(__int64))(a1 + 2152))(a1);
    return;
  }
  v9 = 0LL;
  v10 = a5;
  Number = 0;
  v12 = a5 & 1;
  v38 = 0;
  if ( ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && ndisPerProcRcvTrackers
    && (Number = KeGetPcr()->Prcb.Number,
        v13 = 2096LL * Number,
        v14 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v13),
        (unsigned int)v14 < 3) )
  {
    v38 = 1;
    PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v14 + v13 + 8;
    *(_DWORD *)((char *)ndisPerProcRcvTrackers + v13) = v14 + 1;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C00A0253 >= 2u )
        WPP_SF_(10LL, &WPP_708561b8cd4433a8527d88173b1ed8eb_Traceguids);
      goto LABEL_31;
    }
    v5 = a4;
    v6 = a3;
  }
  v16 = *(_QWORD **)(a1 + 400);
  v17 = v7;
  PoolWithTag[692] = 0;
  if ( (a5 & 2) == 0 )
  {
    do
    {
      v9 = v17;
      *((_DWORD *)v17 + 34) = v17[17] & 0xFFFFFFF0 | 4;
      v17 = (__int64 *)*v17;
    }
    while ( v17 );
  }
  v18 = v16[41];
  if ( v18 && *(_BYTE *)(*(_QWORD *)(v18 + 24) + 56LL) >= 6u )
  {
    ndisMIndicateNetBufferListsToOpen(v18, v7, v6, v5, a5);
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_DWORD *)PoolWithTag + 20) = 0;
  }
  else
  {
    *((_QWORD *)PoolWithTag + 3) = v7;
    *((_QWORD *)PoolWithTag + 1) = v16;
    *((_DWORD *)PoolWithTag + 4) = a5;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 4) = v9;
    *((_DWORD *)PoolWithTag + 10) = v6;
    *((_DWORD *)PoolWithTag + 11) = v5;
    ndisSortNetBufferLists(PoolWithTag);
    if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
    {
      if ( !*v16 || a3 )
        PoolWithTag[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
      if ( !v18 )
      {
        v20 = v16[1];
        if ( v20 )
        {
          v21 = *((_DWORD *)PoolWithTag + 172);
          v22 = *((_DWORD *)PoolWithTag + 4) | 2;
          do
          {
            v23 = 0LL;
            v37 = *(_QWORD *)(v20 + 424);
            do
            {
              v24 = (unsigned int)v23;
              v25 = *(_QWORD *)&PoolWithTag[40 * v23 + 64];
              v23 = (unsigned int)(v23 + 1);
              if ( v25 )
                ndisMIndicateNetBufferListsToOpen(
                  v20,
                  v25,
                  *((unsigned int *)PoolWithTag + 10),
                  *(unsigned int *)&PoolWithTag[40 * v24 + 80],
                  v22);
            }
            while ( (unsigned int)v23 <= v21 );
            v19 = v37;
            v20 = v37;
          }
          while ( v37 );
          v10 = a5;
        }
        v26 = v16[2];
        if ( v26 )
        {
          v27 = *((_DWORD *)PoolWithTag + 172);
          v28 = *((_DWORD *)PoolWithTag + 4);
          if ( (a5 & 2) != 0 )
          {
            v32 = v28 | 2;
            do
            {
              v33 = 0LL;
              v39 = *(_QWORD *)(v26 + 424);
              do
              {
                v34 = (unsigned int)v33;
                v35 = 5 * v33;
                v33 = (unsigned int)(v33 + 1);
                v36 = *(_QWORD *)&PoolWithTag[8 * v35 + 64];
                if ( v36 )
                  ndisMIndicateNetBufferListsToOpen(
                    v26,
                    v36,
                    *((unsigned int *)PoolWithTag + 10),
                    *(unsigned int *)&PoolWithTag[40 * v34 + 80],
                    v32);
              }
              while ( (unsigned int)v33 <= v27 );
              v26 = v39;
            }
            while ( v39 );
          }
          else
          {
            v29 = *((_DWORD *)PoolWithTag + 10);
            if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2260LL) )
              ndisIndicateToPmodeOpens(PoolWithTag);
            for ( i = 1; i <= v27; ++i )
            {
              v31 = i;
              ndisMIndicateNetBufferListsToOpen(
                *(_QWORD *)&PoolWithTag[40 * v31 + 56],
                *(_QWORD *)&PoolWithTag[40 * v31 + 64],
                v29,
                *(unsigned int *)&PoolWithTag[40 * v31 + 80],
                v28);
            }
          }
        }
      }
    }
  }
  if ( !PoolWithTag[692] )
    goto LABEL_32;
  v7 = (__int64 *)*((_QWORD *)PoolWithTag + 8);
  v12 = a5 & 1;
LABEL_31:
  if ( v7 )
  {
    if ( byte_1C009FE30 && (*(_DWORD *)(a1 + 5916) & 2) != 0 )
      PktMonClientNblDropNdis(a1 + 5864, (_DWORD)v7, v19, 1, -1073676270, -536866809);
    if ( (v10 & 2) == 0 )
      ndisReturnNetBufferListsInternal(a1, v7, v12, 0LL);
  }
LABEL_32:
  if ( v38 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * Number);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
