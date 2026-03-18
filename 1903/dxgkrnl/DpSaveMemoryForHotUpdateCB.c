/*
 * XREFs of DpSaveMemoryForHotUpdateCB @ 0x1C02A9020
 * Callers:
 *     ?DpiKsrPrepare@@YAXPEAX@Z @ 0x1C02A8C78 (-DpiKsrPrepare@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

__int64 __fastcall DpSaveMemoryForHotUpdateCB(__int64 a1, int *a2)
{
  unsigned int v2; // eax
  void *v3; // r14
  __int64 v4; // r8
  __int64 v5; // rsi
  void *v6; // r12
  unsigned int v7; // ecx
  struct _MDL *v9; // rax
  struct _MDL *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  GUID v15; // xmm0
  int v16; // eax
  struct _MDL *PagesForMdl; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  PVOID v22; // rax
  ULONG v23; // esi
  PVOID PoolWithTag; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  unsigned int v34; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v35[8]; // [rsp+38h] [rbp-50h] BYREF
  GUID v36; // [rsp+40h] [rbp-48h] BYREF

  v2 = *a2;
  v3 = 0LL;
  v34 = 0;
  v4 = a1;
  LODWORD(v5) = 0;
  v6 = 0LL;
  v7 = 0;
  if ( v2 )
  {
    v3 = (void *)*((_QWORD *)a2 + 1);
    v7 = 1;
    v34 = v2;
  }
  v9 = (struct _MDL *)*((_QWORD *)a2 + 2);
  v10 = 0LL;
  v11 = v7 + 1;
  if ( v9 )
    v10 = v9;
  else
    v11 = v7;
  v12 = (unsigned int)(v11 + 1);
  if ( !*((_QWORD *)a2 + 4) )
    v12 = (unsigned int)v11;
  if ( (_DWORD)v12 != 1 )
    goto LABEL_9;
  if ( v4 )
    v15 = *(GUID *)(*(_QWORD *)(v4 + 64) + 4872LL);
  else
    v15 = GUID_DXGK_KSR_MEMORY;
  v16 = a2[6];
  v36 = v15;
  if ( v16 )
  {
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v16 + 4095) & 0xFFFFF000, MmCached, 0x24u);
    v10 = PagesForMdl;
    if ( !PagesForMdl
      || (v22 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u), (v6 = v22) == 0LL) )
    {
      LODWORD(v5) = -1073741670;
      v21 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = -1073741670LL;
LABEL_26:
      WdLogEvent5_WdError(v21);
      goto LABEL_27;
    }
    memmove(v22, *((const void **)a2 + 4), (unsigned int)a2[6]);
  }
  if ( v10 )
  {
    v23 = v10->ByteCount >> 12;
    if ( !v23 )
    {
LABEL_9:
      v13 = WdLogNewEntry5_WdError(v12, v11, v4);
      *(_QWORD *)(v13 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v23, 0x74727044u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v28 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v28);
      return 3221225495LL;
    }
    v29 = KsrMdlToMemoryRuns(v10, PoolWithTag, v23, &v34);
    v5 = v29;
    if ( v29 < 0 )
    {
LABEL_25:
      v21 = WdLogNewEntry5_WdError(v31, v30, v32);
      *(_QWORD *)(v21 + 24) = v5;
      goto LABEL_26;
    }
  }
  if ( v3 )
  {
    v33 = KsrPersistMemoryWithMetadata(&v36, v3, v34, *((_QWORD *)a2 + 6), a2[10], v35);
    v5 = v33;
    if ( v33 >= 0 )
    {
LABEL_27:
      if ( v3 && !*a2 )
        ExFreePoolWithTag(v3, 0);
      goto LABEL_30;
    }
    goto LABEL_25;
  }
LABEL_30:
  if ( v10 )
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      MmUnmapLockedPages(v6, v10);
      ExFreePoolWithTag(v10, 0);
    }
  }
  return (unsigned int)v5;
}
