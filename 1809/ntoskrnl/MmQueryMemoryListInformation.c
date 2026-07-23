/*
 * XREFs of MmQueryMemoryListInformation @ 0x1400A8910
 * Callers:
 *     PfpMemoryListQuery @ 0x140160BE0 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x140311110 (EtwpLogMemInfo.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 *     PfpVolumePrefetchMetadata @ 0x14065E1C4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14065E58C (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140663144 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406634BC (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140668FFC (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1408655EC (PfpPrefetchPrivatePages.c)
 * Callees:
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR **BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  _OWORD *v5; // r9
  int v6; // edx
  ULONG_PTR *v7; // r13
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // r11
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // r14
  ULONG_PTR v16; // r15
  ULONG_PTR v17; // r12
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // rax
  ULONG_PTR v24; // rax
  ULONG_PTR v25; // rax
  ULONG_PTR v26; // rax
  ULONG_PTR v27; // rax
  ULONG_PTR v28; // rax
  ULONG_PTR v29; // rax
  ULONG_PTR v30; // rax
  char v32; // [rsp+30h] [rbp-128h]
  ULONG_PTR *v33; // [rsp+38h] [rbp-120h]
  __int128 v34; // [rsp+40h] [rbp-118h]
  ULONG_PTR v35; // [rsp+50h] [rbp-108h]
  ULONG_PTR v36; // [rsp+58h] [rbp-100h]
  __int128 v37; // [rsp+70h] [rbp-E8h]
  __int128 v38; // [rsp+80h] [rbp-D8h]
  __int128 v39; // [rsp+90h] [rbp-C8h]
  __int128 v40; // [rsp+A0h] [rbp-B8h]
  __int128 v41; // [rsp+B0h] [rbp-A8h]
  __int128 v42; // [rsp+C0h] [rbp-98h]
  __int128 v43; // [rsp+D0h] [rbp-88h]
  __int128 v44; // [rsp+E0h] [rbp-78h]
  __int128 v45; // [rsp+F0h] [rbp-68h]
  __int128 v46; // [rsp+100h] [rbp-58h]
  __int128 v47; // [rsp+110h] [rbp-48h]

  v5 = a2;
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  v6 = 0;
  v32 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v7 = *(ULONG_PTR **)(qword_14043B808
                         + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
    }
    else
    {
      v7 = *BugCheckParameter2;
      v6 = 1;
    }
  }
  else
  {
    v7 = &MiSystemPartition;
  }
  v33 = v7;
  if ( *((_DWORD *)v7 + 2) != 305535296 )
    goto LABEL_57;
  if ( v6 != 1 )
    goto LABEL_7;
  if ( (ULONG_PTR **)v7[21] != BugCheckParameter2 )
LABEL_57:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v7, 0LL);
  if ( !PsReferencePartitionSafe((__int64)BugCheckParameter2) )
    return 3221226656LL;
  v32 = 1;
LABEL_7:
  v8 = v7[890];
  *(_QWORD *)&v34 = v7[272];
  *((_QWORD *)&v34 + 1) = v7[280];
  v37 = v34;
  v9 = v7[960];
  *(_QWORD *)&v38 = v9;
  v35 = v7[968];
  *((_QWORD *)&v38 + 1) = v35;
  v36 = v7[504];
  *(_QWORD *)&v39 = v36;
  v10 = v7[974];
  v11 = v7[296];
  *((_QWORD *)&v39 + 1) = v11;
  *((_QWORD *)&v43 + 1) = *((unsigned int *)v7 + 1054);
  v12 = v7[301];
  *(_QWORD *)&v40 = v12;
  *(_QWORD *)&v44 = *((unsigned int *)v7 + 1055);
  v13 = v7[306];
  *((_QWORD *)&v40 + 1) = v13;
  *((_QWORD *)&v44 + 1) = *((unsigned int *)v7 + 1056);
  v14 = v7[311];
  *(_QWORD *)&v41 = v14;
  *(_QWORD *)&v45 = *((unsigned int *)v7 + 1057);
  v15 = v7[316];
  *((_QWORD *)&v41 + 1) = v15;
  *((_QWORD *)&v45 + 1) = *((unsigned int *)v7 + 1058);
  v16 = v7[321];
  *(_QWORD *)&v42 = v16;
  *(_QWORD *)&v46 = *((unsigned int *)v7 + 1059);
  v17 = v7[326];
  *((_QWORD *)&v42 + 1) = v17;
  *((_QWORD *)&v46 + 1) = *((unsigned int *)v7 + 1060);
  v18 = v7[331];
  *(_QWORD *)&v43 = v18;
  *(_QWORD *)&v47 = *((unsigned int *)v33 + 1061);
  if ( (unsigned __int64)v34 > v8 )
  {
    *(_QWORD *)&v37 = v8;
    v19 = 0LL;
  }
  else
  {
    v19 = v8 - v34;
  }
  if ( *((_QWORD *)&v34 + 1) > v19 )
  {
    *((_QWORD *)&v37 + 1) = v19;
    v20 = 0LL;
  }
  else
  {
    v20 = v19 - *((_QWORD *)&v34 + 1);
  }
  if ( v9 > v20 )
  {
    v9 = v20;
    *(_QWORD *)&v38 = v20;
    v21 = 0LL;
  }
  else
  {
    v21 = v20 - v9;
  }
  if ( v35 > v21 )
  {
    *((_QWORD *)&v38 + 1) = v21;
    v22 = 0LL;
  }
  else
  {
    v22 = v21 - v35;
  }
  if ( v36 > v22 )
  {
    *(_QWORD *)&v39 = v22;
    v23 = 0LL;
  }
  else
  {
    v23 = v22 - v36;
  }
  if ( v10 >= v9 )
    v10 = v9;
  *((_QWORD *)&v47 + 1) = v10;
  if ( v11 > v23 )
  {
    *((_QWORD *)&v39 + 1) = v23;
    v24 = 0LL;
  }
  else
  {
    v24 = v23 - v11;
  }
  if ( v12 > v24 )
  {
    *(_QWORD *)&v40 = v24;
    v25 = 0LL;
  }
  else
  {
    v25 = v24 - v12;
  }
  if ( v13 > v25 )
  {
    *((_QWORD *)&v40 + 1) = v25;
    v26 = 0LL;
  }
  else
  {
    v26 = v25 - v13;
  }
  if ( v14 > v26 )
  {
    *(_QWORD *)&v41 = v26;
    v27 = 0LL;
  }
  else
  {
    v27 = v26 - v14;
  }
  if ( v15 > v27 )
  {
    *((_QWORD *)&v41 + 1) = v27;
    v28 = 0LL;
  }
  else
  {
    v28 = v27 - v15;
  }
  if ( v16 > v28 )
  {
    *(_QWORD *)&v42 = v28;
    v29 = 0LL;
  }
  else
  {
    v29 = v28 - v16;
  }
  if ( v17 > v29 )
  {
    *((_QWORD *)&v42 + 1) = v29;
    v30 = 0LL;
  }
  else
  {
    v30 = v29 - v17;
  }
  if ( v18 > v30 )
    *(_QWORD *)&v43 = v30;
  *v5 = v37;
  v5[1] = v38;
  v5[2] = v39;
  v5[3] = v40;
  v5[4] = v41;
  v5[5] = v42;
  v5[6] = v43;
  v5[7] = v44;
  v5[8] = v45;
  v5[9] = v46;
  v5[10] = v47;
  *a5 = 176;
  if ( v32 )
    PsDereferencePartition(v33[21]);
  return 0LL;
}
