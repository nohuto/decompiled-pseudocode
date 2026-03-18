/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140304D74
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140305358 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x1400E2980 (RtlDecompressBufferEx.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400E4A14 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DD78 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140149FA4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmHpChunkUnprotect @ 0x14014A214 (SmHpChunkUnprotect.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14014AEF0 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     MmStoreLogCorruptionFixed @ 0x1402C4318 (MmStoreLogCorruptionFixed.c)
 *     SmFixSingleBitCorruption @ 0x14030650C (SmFixSingleBitCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403091DC (SmPrepareForFatalPageError.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        void *a2,
        void *a3,
        ULONG_PTR a4,
        __int64 a5)
{
  int v6; // r12d
  _DWORD *v9; // r14
  __int64 v10; // r13
  char *v11; // rdx
  int v12; // ecx
  char v13; // al
  unsigned int v14; // ebx
  _DWORD *v15; // r14
  signed __int64 *v16; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v18; // rbp
  char fixed; // al
  __int64 v20; // rax
  void *v21; // r13
  unsigned int v22; // edx
  struct _KTHREAD *v23; // rax
  __int64 v24; // rcx
  __int64 v26; // [rsp+40h] [rbp-78h] BYREF
  char v27; // [rsp+48h] [rbp-70h] BYREF
  int v28; // [rsp+58h] [rbp-60h]
  int v29; // [rsp+C8h] [rbp+10h]

  v6 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v29 = (_DWORD)a2 - 16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808));
  v9 = 0LL;
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    &v26,
    2);
  v10 = a5;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(*(_QWORD *)(a5 + 56) + 16LL),
              (__int64)&v26) >= 0 )
  {
    if ( v28 == -1 || !v28 )
      v11 = &v27;
    else
      v11 = (char *)(v26 + 16LL * (unsigned int)(v28 - 1));
    v9 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v11 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    (__int64)&v26,
    0);
  if ( !v9 )
    goto LABEL_15;
  if ( *(_DWORD *)a4 != *v9 )
    goto LABEL_14;
  v12 = 4096;
  if ( (v9[1] & 0xFFF) != 0 )
    v12 = v9[1] & 0xFFF;
  if ( *(unsigned __int16 *)(a4 + 4) != v12 )
LABEL_14:
    KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v9, 0LL);
  v13 = SmHpChunkUnprotect(a1 + 192, (__int64)v9, 6LL, 2LL);
  v14 = v13 & 1;
  if ( (v13 & 1) != 0 )
  {
LABEL_15:
    v15 = (_DWORD *)(v10 + 64);
    v16 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v10 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v16, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v18 = *(void **)(v10 + 48);
    memmove(v18, a2, *(unsigned __int16 *)(a4 + 4));
    fixed = SmFixSingleBitCorruption((unsigned __int8 *)v18, *(unsigned __int16 *)(a4 + 4));
    v14 = fixed & 1;
    if ( (fixed & 1) != 0 )
    {
      v20 = *(_QWORD *)(v10 + 16);
      v21 = a3;
      if ( (int)RtlDecompressBufferEx(
                  *(_WORD *)(a1 + 992),
                  (__int64)a3,
                  0x1000u,
                  (__int64)v18,
                  *(unsigned __int16 *)(a4 + 4),
                  (__int64)&a5,
                  v20) >= 0
        && (_DWORD)a5 == 4096 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1928));
        v22 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedIncrement(&dword_14055B514);
        MmStoreLogCorruptionFixed((char *)a2, v22, dword_14055B514);
        v14 |= 2u;
      }
    }
    else
    {
      v21 = a3;
    }
    v23 = KeGetCurrentThread();
    v24 = *(_QWORD *)(a1 + 800);
    --v23->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v24 + 6024, 0LL);
    *v15 = 2;
    if ( v14 < 2 )
      SmPrepareForFatalPageError(
        v29,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v6,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        v21);
  }
  else
  {
    SmPrepareForFatalPageError(
      v29,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v6,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      a3);
    SmHpChunkUnprotect(a1 + 192, (__int64)v9, v14 + 2, v14 + 2);
  }
  return v14 >> 1;
}
