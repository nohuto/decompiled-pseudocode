/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1403227EC
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140322E90 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140105A18 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     RtlDecompressBufferEx @ 0x140107A80 (RtlDecompressBufferEx.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x140108830 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401510DC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmHpChunkUnprotect @ 0x140151344 (SmHpChunkUnprotect.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140162C90 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmStoreLogCorruptionFixed @ 0x1402DE660 (MmStoreLogCorruptionFixed.c)
 *     SmFixSingleBitCorruption @ 0x140324000 (SmFixSingleBitCorruption.c)
 *     SmPrepareForFatalPageError @ 0x140326D20 (SmPrepareForFatalPageError.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        void *a2,
        UCHAR *a3,
        ULONG_PTR a4,
        __int64 FinalUncompressedSize)
{
  _DWORD *v8; // r14
  __int64 v9; // r13
  _QWORD *v10; // rdx
  int v11; // ecx
  char v12; // al
  unsigned int v13; // ebx
  _DWORD *v14; // r14
  signed __int64 *v15; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v17; // r15
  char fixed; // al
  void *WorkSpace; // rax
  UCHAR *BaseAddress; // r13
  unsigned int v21; // edx
  struct _KTHREAD *v22; // rax
  __int64 v23; // rcx
  _QWORD v25[7]; // [rsp+40h] [rbp-38h] BYREF
  int v26; // [rsp+C0h] [rbp+48h]
  int v28; // [rsp+D8h] [rbp+60h]

  memset(v25, 0, 0x28uLL);
  v8 = 0LL;
  v26 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v28 = (_DWORD)a2 - 16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808));
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    v25,
    2);
  v9 = FinalUncompressedSize;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(*(_QWORD *)(FinalUncompressedSize + 56) + 16LL),
              (__int64)v25) >= 0 )
  {
    if ( LODWORD(v25[3]) == -1 || !LODWORD(v25[3]) )
      v10 = &v25[1];
    else
      v10 = (_QWORD *)(v25[0] + 16LL * (unsigned int)(LODWORD(v25[3]) - 1));
    v8 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, v10[1]);
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    (__int64)v25,
    0);
  if ( !v8 )
    goto LABEL_15;
  if ( *(_DWORD *)a4 != *v8 )
    goto LABEL_14;
  v11 = 4096;
  if ( (v8[1] & 0xFFF) != 0 )
    v11 = v8[1] & 0xFFF;
  if ( *(unsigned __int16 *)(a4 + 4) != v11 )
LABEL_14:
    KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v8, 0LL);
  v12 = SmHpChunkUnprotect(a1 + 192, (__int64)v8, 6LL, 2LL);
  v13 = v12 & 1;
  if ( (v12 & 1) != 0 )
  {
LABEL_15:
    v14 = (_DWORD *)(v9 + 64);
    v15 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v9 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v15, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v17 = *(void **)(v9 + 48);
    memmove(v17, a2, *(unsigned __int16 *)(a4 + 4));
    fixed = SmFixSingleBitCorruption((unsigned __int8 *)v17, *(unsigned __int16 *)(a4 + 4));
    v13 = fixed & 1;
    if ( (fixed & 1) != 0 )
    {
      WorkSpace = *(void **)(v9 + 16);
      BaseAddress = a3;
      if ( RtlDecompressBufferEx(
             *(_WORD *)(a1 + 992),
             a3,
             0x1000u,
             (PUCHAR)v17,
             *(unsigned __int16 *)(a4 + 4),
             (PULONG)&FinalUncompressedSize,
             WorkSpace) >= 0
        && (_DWORD)FinalUncompressedSize == 4096 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1928));
        v21 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedIncrement(&dword_14058C514);
        MmStoreLogCorruptionFixed((char *)a2, v21, dword_14058C514);
        v13 |= 2u;
      }
    }
    else
    {
      BaseAddress = a3;
    }
    v22 = KeGetCurrentThread();
    v23 = *(_QWORD *)(a1 + 800);
    --v22->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v23 + 6024, 0LL);
    *v14 = 2;
    if ( v13 < 2 )
      SmPrepareForFatalPageError(
        v28,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v26,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        BaseAddress);
  }
  else
  {
    SmPrepareForFatalPageError(
      v28,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v26,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      a3);
    SmHpChunkUnprotect(a1 + 192, (__int64)v8, v13 + 2, v13 + 2);
  }
  return v13 >> 1;
}
