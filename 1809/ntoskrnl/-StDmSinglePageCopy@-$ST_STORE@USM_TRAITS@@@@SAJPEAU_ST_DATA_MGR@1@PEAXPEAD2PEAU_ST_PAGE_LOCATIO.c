/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140147894
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1401477D4 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x1400E29A0 (RtlDecompressBufferEx.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     BCryptDecrypt @ 0x1402FE3A4 (BCryptDecrypt.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x140305458 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  int v11; // esi
  __int64 pbOutput; // rdi
  __int64 v13; // r15
  __int64 v14; // r8
  ULONG cbOutput; // ebx
  __int64 v16; // rcx
  char v17; // al
  signed __int64 *v18; // rbx
  __int64 v19; // r12
  unsigned int v20; // eax
  unsigned int v21; // ebx
  int v22; // r15d
  struct _KTHREAD *v23; // rax
  __int64 v24; // rcx
  size_t v26; // r8
  const void *v27; // rdx
  struct _KTHREAD *CurrentThread; // rax
  UCHAR *v29; // [rsp+20h] [rbp-B8h]
  ULONG v30; // [rsp+28h] [rbp-B0h]
  ULONG v31; // [rsp+48h] [rbp-90h]
  int v32; // [rsp+58h] [rbp-80h] BYREF
  ULONG pcbResult; // [rsp+60h] [rbp-78h] BYREF
  __int64 v34; // [rsp+68h] [rbp-70h]
  __int64 v35; // [rsp+70h] [rbp-68h] BYREF
  int v36; // [rsp+78h] [rbp-60h]

  v7 = *(unsigned int *)(a1 + 824);
  v34 = a2;
  v9 = a5;
  v10 = a3;
  v11 = 0;
  pbOutput = v7 + a3;
  v13 = a4;
  v14 = *(_QWORD *)(a1 + 1016);
  cbOutput = -*(_DWORD *)(v14 + 8) & (*(_DWORD *)(v14 + 8) + *(unsigned __int16 *)(a5 + 4) - 1);
  if ( (a4 & 1) != 0 )
  {
    v13 = *(_QWORD *)(a6 + 48);
    a4 &= ~1uLL;
  }
  v16 = *(_QWORD *)(a1 + 1016);
  if ( (pbOutput & 3) != 0 )
  {
    v17 = pbOutput;
    v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    pbOutput &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v17 & 2) != 0 )
    {
      memmove((void *)a4, (const void *)v10, (unsigned int)v7 + cbOutput);
      v19 = a5;
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v14 + 24) )
    {
      memmove(*(void **)(a1 + 1784), (const void *)pbOutput, cbOutput);
      v16 = *(_QWORD *)(a1 + 1016);
      v9 = a5;
      pbOutput = *(_QWORD *)(a1 + 1784);
    }
  }
  if ( *(_DWORD *)(v16 + 24) )
  {
    v35 = 0LL;
    LODWORD(v35) = *(unsigned __int16 *)(v9 + 4);
    HIDWORD(v35) = *(_DWORD *)(v9 + 8);
    v36 = *(_DWORD *)(v9 + 12);
    *(_QWORD *)(v16 + 64) = &v35;
    *(_DWORD *)(v16 + 72) = 12;
    *(_QWORD *)(v16 + 96) = v10;
    *(_DWORD *)(v16 + 104) = 16;
    if ( BCryptDecrypt(
           *(BCRYPT_KEY_HANDLE *)(v16 + 32),
           (PUCHAR)pbOutput,
           cbOutput,
           (void *)(v16 + 56),
           v29,
           v30,
           (PUCHAR)pbOutput,
           cbOutput,
           &pcbResult,
           v31) < 0 )
    {
      v19 = a5;
      v21 = -1073741173;
      ST_STORE<SM_TRAITS>::StDmPageError(a1, pbOutput, a4, a5, a6, -1073741173);
      goto LABEL_19;
    }
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v18 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( a6 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v18, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v11 = 2;
  }
  v19 = a5;
  v20 = *(unsigned __int16 *)(a5 + 4);
  if ( v20 >= 0x1000 )
  {
    v26 = *(unsigned __int16 *)(a5 + 4);
    v27 = (const void *)pbOutput;
    goto LABEL_25;
  }
  if ( (int)RtlDecompressBufferEx(*(_WORD *)(a1 + 992), v13, 0x1000u, pbOutput, v20, (__int64)&v32, v34) >= 0
    && v32 == 4096 )
  {
    if ( v13 == a4 )
    {
LABEL_18:
      v21 = 0;
LABEL_19:
      v22 = 0;
      goto LABEL_20;
    }
    v26 = 4096LL;
    v27 = (const void *)v13;
LABEL_25:
    memmove((void *)a4, v27, v26);
    goto LABEL_18;
  }
  v21 = -1073741116;
  v22 = 1;
  v11 &= 2u;
LABEL_20:
  if ( v11 )
  {
    v23 = KeGetCurrentThread();
    v24 = *(_QWORD *)(a1 + 800);
    --v23->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v24 + 6024, 0LL);
    *(_DWORD *)(a6 + 64) = 2;
  }
  if ( v22 && (ST_STORE<SM_TRAITS>::StDmPageError(a1, pbOutput, a4, v19, a6, v21) & 1) != 0 )
    return 0;
  return v21;
}
