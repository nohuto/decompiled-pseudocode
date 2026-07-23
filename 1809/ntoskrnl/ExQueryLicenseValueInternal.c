/*
 * XREFs of ExQueryLicenseValueInternal @ 0x1405A1260
 * Callers:
 *     NtQueryLicenseValue @ 0x1405A0F90 (NtQueryLicenseValue.c)
 * Callees:
 *     sub_1400076D0 @ 0x1400076D0 (sub_1400076D0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1405A1888 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGetSubscriptionPfn @ 0x1408D0344 (ExpGetSubscriptionPfn.c)
 */

__int64 __fastcall ExQueryLicenseValueInternal(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v6; // r14d
  int v7; // r15d
  unsigned int v8; // esi
  _WORD *v9; // rcx
  unsigned __int16 v10; // r12
  __int64 (**v11)[10]; // rdi
  __int64 (**v12)[10]; // rbx
  unsigned __int16 v13; // dx
  __int64 *v14; // r10
  char v15; // r8
  __int64 *v16; // r12
  unsigned int *v17; // rbx
  unsigned int v18; // esi
  int v19; // r13d
  unsigned int v20; // ebx
  _WORD *v21; // r15
  unsigned __int16 v22; // si
  unsigned __int16 v23; // ax
  _WORD *v25; // r8
  __int64 v26; // r10
  __int64 v27; // r9
  _WORD *v28; // r8
  __int64 v29; // r10
  __int64 v30; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v32; // eax
  unsigned int v33; // esi
  wchar_t *PoolWithTag; // rax
  size_t v35; // r8
  const void *v36; // rdx
  wchar_t *v37; // r13
  unsigned int v38; // ebx
  const wchar_t **v39; // r15
  unsigned int v40; // ebx
  int v41; // eax
  struct _KTHREAD *v42; // rax
  _BYTE v43[4]; // [rsp+60h] [rbp-208h] BYREF
  int v44; // [rsp+64h] [rbp-204h]
  char v45; // [rsp+68h] [rbp-200h]
  unsigned int v46; // [rsp+6Ch] [rbp-1FCh]
  int v47; // [rsp+70h] [rbp-1F8h]
  unsigned int *v48; // [rsp+78h] [rbp-1F0h]
  int v49; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-1E0h]
  __int64 v51; // [rsp+90h] [rbp-1D8h]
  wchar_t *Str1; // [rsp+98h] [rbp-1D0h]
  __int64 v53; // [rsp+A0h] [rbp-1C8h] BYREF
  _WORD *v54; // [rsp+A8h] [rbp-1C0h]
  unsigned int v55; // [rsp+B0h] [rbp-1B8h]
  int v56; // [rsp+B8h] [rbp-1B0h]
  __int64 *v57; // [rsp+C0h] [rbp-1A8h]
  __int64 v58; // [rsp+C8h] [rbp-1A0h]
  _QWORD v59[2]; // [rsp+D0h] [rbp-198h] BYREF
  char v60[16]; // [rsp+E0h] [rbp-188h] BYREF
  unsigned __int16 *v61; // [rsp+F0h] [rbp-178h]
  __int64 v62; // [rsp+F8h] [rbp-170h]
  _QWORD v63[7]; // [rsp+108h] [rbp-160h] BYREF
  _BYTE Buf1[112]; // [rsp+140h] [rbp-128h] BYREF
  _BYTE v65[112]; // [rsp+1B0h] [rbp-B8h] BYREF

  v46 = a4;
  v50 = a3;
  v51 = a2;
  v61 = a1;
  v62 = a2;
  v59[1] = a3;
  v55 = a4;
  v48 = a5;
  v44 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v43[0] = 0;
  Str1 = 0LL;
  v58 = 0LL;
  v59[0] = 0LL;
  if ( !a1 || !a5 || (v47 = 0, v44 = 0, !*((_QWORD *)a1 + 1)) || *a1 < 2u )
  {
    v19 = -1073741811;
    goto LABEL_69;
  }
  LOBYTE(v53) = 1;
  v54 = a1;
  v56 = ExpLoadAndSortLicensingCacheDescriptors();
  v57 = 0LL;
  v45 = 0;
  v6 = 1;
  v7 = 1;
  v8 = 0;
  v9 = a1;
  v10 = *a1;
  v11 = &off_140909AA0;
  v12 = &off_140909AA0;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 + 4);
    if ( v10 == v13 )
      break;
    v7 += v13;
LABEL_8:
    ++v8;
    v12 += 5;
    if ( v8 >= 0xF )
    {
      v14 = v57;
      v15 = (char)v57;
      goto LABEL_10;
    }
  }
  if ( v10 >> 1 )
  {
    v25 = Buf1;
    v26 = *((_QWORD *)v9 + 1) - (_QWORD)Buf1;
    v27 = v10 >> 1;
    do
    {
      *v25 = *(_WORD *)((char *)v25 + v26) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
      v7 += 2;
      ++v25;
      --v27;
    }
    while ( v27 );
  }
  if ( memcmp(Buf1, *v12, v13) )
  {
    v9 = v54;
    goto LABEL_8;
  }
  v14 = (__int64 *)v12[2];
  v57 = v14;
  v15 = *((_BYTE *)v12 + 32);
  v45 = v15;
LABEL_10:
  if ( v14 )
  {
    if ( v15 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14096F4E0, 0LL);
      v14 = v57;
    }
    v17 = v48;
    v18 = v46;
    v47 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v14)(v51, v50, v46, v48, v43);
    v44 = v47;
    v16 = 0LL;
    if ( v45 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14096F4E0, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_14096F4E0);
      KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v47 = v44;
    }
  }
  else
  {
    v16 = 0LL;
    v17 = v48;
    v18 = v46;
  }
  if ( v43[0] )
  {
    v19 = v47;
    if ( v47 >= 0 && *v17 > v18 )
    {
      v19 = -1073741789;
      v44 = -1073741789;
    }
    goto LABEL_21;
  }
  if ( v56 < 0 )
  {
    v19 = v56;
    v44 = v56;
    goto LABEL_21;
  }
  v44 = 0;
  v49 = 0;
  v44 = sub_1400076D0((__int64)&qword_14090A418, 0LL, (__int64)&v49, 4u, (__int64)v60);
  if ( v49 && qword_14096E398 )
  {
    v33 = *a1 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
    Str1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v19 = -1073741801;
LABEL_69:
      v44 = v19;
      goto LABEL_21;
    }
    memset(PoolWithTag, 0, v33);
    v35 = *a1;
    v36 = (const void *)*((_QWORD *)a1 + 1);
    v37 = Str1;
    memmove(Str1, v36, v35);
    v63[0] = L"Security-SPP-GenuineLocalStatus";
    v63[1] = L"Security-SPP-Action-StateData";
    v63[2] = L"Security-SPP-LastWindowsActivationHResult";
    v63[3] = L"Security-SPP-LastWindowsActivationTime";
    v63[4] = L"Kernel-ExpirationDate";
    v63[5] = L"SMR-HostManaged-Enabled";
    v38 = 0;
    v39 = (const wchar_t **)v63;
    while ( wcsicmp(v37, *v39) )
    {
      ++v38;
      ++v39;
      if ( v38 >= 6 )
      {
        ExpGetSubscriptionPfn(v59);
        v40 = v46;
        v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, wchar_t *, unsigned int, __int64, unsigned int, unsigned int *, __int64, _QWORD))qword_14096E398)(
                v59[0],
                0LL,
                0LL,
                0LL,
                v37,
                v33,
                v50,
                v46,
                v48,
                v51,
                0LL);
        if ( (int)(v41 + 0x80000000) >= 0 && v41 != -1073741789 )
          break;
        if ( !v40 )
          v41 = -1073741789;
        v19 = v41;
        v44 = v41;
        goto LABEL_16;
      }
    }
  }
  v19 = sub_1400076D0((__int64)&v53, v51, v50, v46, (__int64)v48);
  v44 = v19;
  if ( v19 == -1073741762 )
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14096F4E0, 0LL);
    byte_14096F4C1 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14096F4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14096F4E0);
    KeAbPostRelease((ULONG_PTR)&qword_14096F4E0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v19 = v44;
  }
LABEL_16:
  v20 = 0;
  v21 = v54;
  v22 = *v54;
  while ( 2 )
  {
    v23 = *((_WORD *)v11 + 4);
    if ( v22 != v23 )
    {
      v6 += v23;
      goto LABEL_19;
    }
    if ( v22 >> 1 )
    {
      v28 = v65;
      v29 = *((_QWORD *)v21 + 1) - (_QWORD)v65;
      v30 = v22 >> 1;
      do
      {
        *v28 = *(_WORD *)((char *)v28 + v29) ^ ((v6 + 1) | ((_WORD)v6 << 8) | 0x5555);
        v6 += 2;
        ++v28;
        --v30;
      }
      while ( v30 );
      v21 = v54;
    }
    if ( memcmp(v65, *v11, v23) )
    {
LABEL_19:
      ++v20;
      v11 += 5;
      if ( v20 >= 0xF )
        goto LABEL_20;
      continue;
    }
    break;
  }
  v16 = (__int64 *)v11[3];
LABEL_20:
  if ( v16 && (v19 >= 0 || v19 == -1073741772 || v19 == -1073741275) )
  {
    v32 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v16)(v51, v50, v46, v48, v43);
    if ( v43[0] )
    {
      v19 = v32;
      v44 = v32;
    }
  }
LABEL_21:
  if ( Str1 )
    ExFreePoolWithTag(Str1, 0);
  return (unsigned int)v19;
}
