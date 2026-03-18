/*
 * XREFs of ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C023C508
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02002C4 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C00409F8 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C023CC20 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkAddDiagnosticInfoIntoReport(
        struct _WD_DEBUG_REPORT *a1,
        struct _DEVICE_OBJECT *a2,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  _QWORD *Pool; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r12
  unsigned int v12; // eax
  int v13; // r13d
  int *v14; // r15
  int v15; // ebp
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // r14
  __int64 v20; // rax
  struct _WD_DEBUG_REPORT *v21; // rbx
  char *v22; // rdi
  unsigned int *v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // r15
  unsigned int v26; // ebp
  unsigned int v27; // r13d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // ebx
  char *v32; // rcx
  unsigned int v33; // r10d
  int v34; // eax
  unsigned int v35; // r9d
  int v36; // r8d
  signed __int64 v37; // rdi
  int *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v49; // rax
  unsigned int v50; // [rsp+20h] [rbp-48h]
  unsigned int v51; // [rsp+24h] [rbp-44h]
  unsigned int v53; // [rsp+88h] [rbp+20h]

  if ( !a1 || !a2 || !a3 || !*((_QWORD *)a3 + 28) )
    return 3221225485LL;
  v4 = 0;
  v5 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
  Pool = TdrAllocatePool(v5, PagedPool);
  v11 = Pool;
  if ( !Pool )
  {
    v49 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v49 + 24) = v5;
    WdLogEvent5_WdLowResource(v49);
    return 3221225495LL;
  }
  v12 = TdrCollectBugcheckSecondaryDumpData(Pool, v5, 1);
  v13 = *((_DWORD *)a3 + 55);
  v53 = v12;
  v14 = 0LL;
  v15 = v13 != 0 ? 32 : 24;
  v16 = TdrAllocatePool((v15 + v13 + 4431) & 0xFFFFF000, PagedPool);
  v19 = v16;
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17, 0LL);
    *(_QWORD *)(v20 + 24) = (v15 + v13 + 4431) & 0xFFFFF000;
LABEL_8:
    WdLogEvent5_WdError(v20);
    v21 = a1;
    goto LABEL_24;
  }
  v22 = (char *)(v16 + 2);
  v16[1] = 0;
  v23 = v16 + 4;
  v24 = v16 + 4;
  *v16 = (v13 != 0) + 2;
  v16[2] = v15;
  v16[3] = 49;
  if ( *((_DWORD *)a3 + 55) )
  {
    *v23 = 0;
    v24 = v16 + 6;
    v16[5] = 1;
  }
  *(_QWORD *)v24 = 0LL;
  v25 = v16 + 2;
  v26 = *(_DWORD *)v22 + 336;
  v24[2] = *((_DWORD *)a3 + 2);
  *((_QWORD *)v24 + 2) = 0LL;
  v24[3] = 0;
  *(_OWORD *)(v24 + 6) = *(_OWORD *)((char *)a3 + 12);
  *(_OWORD *)(v24 + 10) = *(_OWORD *)((char *)a3 + 28);
  *(_OWORD *)(v24 + 14) = *(_OWORD *)((char *)a3 + 44);
  *(_OWORD *)(v24 + 18) = *(_OWORD *)((char *)a3 + 60);
  *(_OWORD *)(v24 + 22) = *(_OWORD *)((char *)a3 + 76);
  *(_OWORD *)(v24 + 26) = *(_OWORD *)((char *)a3 + 92);
  *(_OWORD *)(v24 + 30) = *(_OWORD *)((char *)a3 + 108);
  *(_OWORD *)(v24 + 34) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)(v24 + 38) = *(_OWORD *)((char *)a3 + 140);
  *(_OWORD *)(v24 + 42) = *(_OWORD *)((char *)a3 + 156);
  *(_OWORD *)(v24 + 46) = *(_OWORD *)((char *)a3 + 172);
  *(_OWORD *)(v24 + 50) = *(_OWORD *)((char *)a3 + 188);
  if ( *((_DWORD *)a3 + 55) )
  {
    *v23 = v26;
    v25 = v16 + 4;
    memmove((char *)v16 + v26, *((const void **)a3 + 28), *((unsigned int *)a3 + 55));
    v26 += *((_DWORD *)a3 + 55);
  }
  v25[2] = v26;
  v27 = (v26 + v53 + 4095) & 0xFFFFF000;
  v14 = (int *)TdrAllocatePool(v27, PagedPool);
  if ( !v14 )
  {
    v20 = WdLogNewEntry5_WdError(v29, v28, v30);
    *(_QWORD *)(v20 + 24) = v27;
    goto LABEL_8;
  }
  v31 = *v11 + 1 + *v19;
  v51 = v11[2];
  v50 = *(_DWORD *)v22;
  memmove(v14, v11, v51);
  v32 = (char *)(v14 + 2);
  *v14 = v31;
  v33 = 2 * v31;
  v34 = *v11 - 1;
  if ( *v11 != 1 )
  {
    do
    {
      if ( !*((_DWORD *)v32 + 1) )
        break;
      *(_DWORD *)v32 += 8 * v31 - v51;
      v32 += 8;
      --v34;
    }
    while ( v34 );
  }
  v35 = v53 - v51;
  v36 = *v19 - 1;
  if ( *v19 != 1 )
  {
    v37 = v22 - v32;
    do
    {
      if ( !*(_DWORD *)&v32[v37 + 4] )
        break;
      *(_QWORD *)v32 = *(_QWORD *)&v32[v37];
      *(_DWORD *)v32 += v33 * 4 + v53 - v51 - v50;
      v32 += 8;
      --v36;
    }
    while ( v36 );
  }
  v38 = &v14[v33];
  v39 = v35;
  memmove(v38, (char *)v11 + v51, v35);
  memmove((char *)v38 + v39, (char *)v19 + v50, v26 - v50);
  v21 = a1;
  if ( (unsigned __int8)WdDbgReportSecondaryData(a1, v14, v27) )
    goto LABEL_26;
  v43 = WdLogNewEntry5_WdError(v41, v40, v42);
  *(_QWORD *)(v43 + 24) = 3638LL;
  WdLogEvent5_WdError(v43);
LABEL_24:
  v4 = -1073741801;
  if ( !(unsigned __int8)WdDbgReportSecondaryData(v21, v11, v53) )
  {
    v47 = WdLogNewEntry5_WdError(v45, v44, v46);
    *(_QWORD *)(v47 + 24) = 3649LL;
    WdLogEvent5_WdError(v47);
  }
LABEL_26:
  ExFreePoolWithTag(v11, 0x52445476u);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x52445476u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x52445476u);
  return v4;
}
