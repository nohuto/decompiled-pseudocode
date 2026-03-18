/*
 * XREFs of ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_K@Z @ 0x1C02A89E4
 * Callers:
 *     DpiKsrRestore @ 0x1C02A9834 (DpiKsrRestore.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02A992C (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02A8E98 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiClaimPersistedMemoryBlock(struct _FDO_CONTEXT *a1, __int64 a2)
{
  GUID *v2; // rax
  GUID v5; // xmm0
  PVOID PoolWithTag; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // r12
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  struct _MDL *v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  struct _MDL *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r11
  __int64 v38; // rcx
  unsigned int i; // eax
  unsigned int v40; // r10d
  unsigned __int64 v41; // rdx
  _QWORD *MappedSystemVa; // rcx
  int v43; // eax
  __int64 v44; // rax
  unsigned int v46; // [rsp+30h] [rbp-50h] BYREF
  unsigned int NumberOfBytes; // [rsp+34h] [rbp-4Ch] BYREF
  int NumberOfBytes_4; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v49[2]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-30h]
  int v51; // [rsp+54h] [rbp-2Ch]
  PVOID v52; // [rsp+58h] [rbp-28h]
  GUID v53; // [rsp+60h] [rbp-20h] BYREF

  v2 = (GUID *)((char *)a1 + 4872);
  v46 = 0;
  NumberOfBytes_4 = 0;
  if ( !a1 )
    v2 = &GUID_DXGK_KSR_MEMORY;
  v5 = *v2;
  NumberOfBytes = 0;
  v53 = v5;
  PoolWithTag = 0LL;
  KsrQueryMetadata(&v53, a2, 0LL, 0LL, &NumberOfBytes);
  if ( NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x64727044u);
    if ( PoolWithTag )
    {
      v16 = KsrQueryMetadata(&v53, a2, PoolWithTag, NumberOfBytes, &NumberOfBytes);
      v14 = v16;
      if ( v16 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v18, v17, v19);
        *(_QWORD *)(v15 + 24) = v14;
        goto LABEL_12;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v10 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v10);
    }
  }
  v11 = KsrClaimPersistedMemory(&v53, a2, 0LL, 0LL, 0, &v46);
  v13 = v11 + 0x80000000;
  if ( (int)v13 >= 0 && v11 != -1073741789 || !v46 )
  {
    LODWORD(v14) = -1073741811;
    v15 = WdLogNewEntry5_WdError(v13, 0x80000000LL, v12);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v15);
    goto LABEL_50;
  }
  v23 = ExAllocatePoolWithTag(PagedPool, 8LL * v46, 0x74727044u);
  if ( !v23 )
  {
    LODWORD(v14) = -1073741801;
    v15 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v15 + 24) = -1073741801LL;
    goto LABEL_12;
  }
  v24 = KsrClaimPersistedMemory(&v53, a2, v23, v46, 1, &NumberOfBytes_4);
  v14 = v24;
  if ( v24 < 0 || (v27 = v46, v46 != NumberOfBytes_4) )
  {
    v36 = WdLogNewEntry5_WdError(v26, v25, v27);
    *(_QWORD *)(v36 + 24) = v14;
    goto LABEL_48;
  }
  v28 = 0LL;
  v29 = 0LL;
  if ( !v46 )
    goto LABEL_46;
  do
  {
    if ( (int)v14 < 0 )
      break;
    v30 = (unsigned int)v29;
    v29 = (unsigned int)(v29 + 1);
    v26 = v23[v30] >> 40 << 12;
    v28 += v26;
  }
  while ( (unsigned int)v29 < v46 );
  if ( !v28 )
  {
LABEL_46:
    LODWORD(v14) = -1073741811;
    v36 = WdLogNewEntry5_WdError(v26, v29, v46);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    goto LABEL_48;
  }
  v31 = (struct _MDL *)ExAllocatePoolWithTag((POOL_TYPE)512, v28 + 48, a1 != 0LL ? 1953656900 : 1836216388);
  v35 = v31;
  if ( v31 )
  {
    v31->Next = 0LL;
    v37 = 0LL;
    v31->StartVa = 0LL;
    v31->ByteOffset = 0;
    v38 = 0LL;
    v31->ByteCount = v28;
    v31->Size = 8 * (((v28 + 4095) >> 12) + 6);
    v31->MdlFlags = 2;
    for ( i = v46; (unsigned int)v38 < i; v38 = (unsigned int)(v38 + 1) )
    {
      if ( (int)v14 < 0 )
        break;
      v32 = v23[v38];
      v40 = 0;
      v34 = 0xFFFFFF0000000000uLL;
      if ( (v32 & 0xFFFFFF0000000000uLL) != 0 )
      {
        v34 = 0LL;
        do
        {
          ++v40;
          v41 = v34 + (v32 & 0xFFFFFFFFFFLL);
          v34 = v40;
          *((_QWORD *)&v35[1].Next + v37) = v41;
          v37 = (unsigned int)(v37 + 1);
          v32 = v23[v38];
        }
        while ( v40 < v32 >> 40 );
        i = v46;
      }
    }
    if ( a1 )
    {
      v50 = NumberOfBytes;
      v49[0] = 0LL;
      v51 = 0;
      v49[1] = v35;
      v52 = PoolWithTag;
      v43 = DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v49);
      v14 = v43;
      if ( v43 < 0 )
        goto LABEL_45;
    }
    else
    {
      if ( qword_1C00A2C38 )
      {
        LODWORD(v14) = -1073741823;
        goto LABEL_42;
      }
      if ( (v35->MdlFlags & 5) != 0 )
        MappedSystemVa = v35->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v35, 0, MmCached, 0LL, 0, 0x40000010u);
      qword_1C00A2C38 = (__int64)MappedSystemVa;
      if ( !MappedSystemVa )
      {
        v14 = -1073741823LL;
LABEL_45:
        v44 = WdLogNewEntry5_WdError(MappedSystemVa, v32, v34);
        *(_QWORD *)(v44 + 24) = v14;
        WdLogEvent5_WdError(v44);
LABEL_42:
        if ( v35 )
        {
          MmFreePagesFromMdl(v35);
          ExFreePoolWithTag(v35, 0);
        }
        goto LABEL_49;
      }
      if ( *(unsigned int *)MappedSystemVa > v28 )
      {
        LODWORD(v14) = -1073741811;
        MmUnmapLockedPages(MappedSystemVa, v35);
        qword_1C00A2C38 = 0LL;
        goto LABEL_42;
      }
      MappedSystemVa[2] = v35;
    }
    v35 = 0LL;
    goto LABEL_42;
  }
  LODWORD(v14) = -1073741801;
  v36 = WdLogNewEntry5_WdError(v33, v32, v34);
  *(_QWORD *)(v36 + 24) = -1073741801LL;
LABEL_48:
  WdLogEvent5_WdError(v36);
LABEL_49:
  ExFreePoolWithTag(v23, 0);
LABEL_50:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( qword_1C00A2C38 )
    *(_DWORD *)(qword_1C00A2C38 + 24) = v14;
  return (unsigned int)v14;
}
