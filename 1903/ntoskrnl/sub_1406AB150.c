/*
 * XREFs of sub_1406AB150 @ 0x1406AB150
 * Callers:
 *     NtQueryLicenseValue @ 0x1406AAE80 (NtQueryLicenseValue.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     sub_1400FA510 @ 0x1400FA510 (sub_1400FA510.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1406AB970 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGetSubscriptionPfn @ 0x14090C6D4 (ExpGetSubscriptionPfn.c)
 */

__int64 __fastcall sub_1406AB150(const UNICODE_STRING *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  unsigned int v8; // r15d
  const UNICODE_STRING *v9; // rcx
  unsigned __int16 Length; // ax
  __int64 (**v11)[10]; // r12
  __int64 (**v12)[10]; // r14
  unsigned __int16 v13; // r10
  unsigned int v14; // eax
  _WORD *v15; // rdx
  signed __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r10
  char v19; // al
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v21; // r14d
  PCUNICODE_STRING v22; // rsi
  unsigned int v23; // r14d
  wchar_t *PoolWithTag; // rax
  unsigned int v25; // ebx
  const wchar_t **v26; // rsi
  unsigned int v27; // esi
  struct _KTHREAD *v28; // rax
  char v29; // al
  unsigned int v30; // esi
  const UNICODE_STRING *v31; // r15
  unsigned __int16 v32; // r14
  unsigned __int16 v33; // r10
  _WORD *v34; // rdx
  signed __int64 v35; // r9
  __int64 v36; // r8
  __int64 *v37; // r10
  int v38; // eax
  _BYTE v40[4]; // [rsp+60h] [rbp-208h] BYREF
  int v41; // [rsp+64h] [rbp-204h]
  char v42; // [rsp+68h] [rbp-200h]
  unsigned int v43; // [rsp+6Ch] [rbp-1FCh]
  int v44; // [rsp+70h] [rbp-1F8h] BYREF
  wchar_t *Str1; // [rsp+78h] [rbp-1F0h]
  unsigned int *v46; // [rsp+80h] [rbp-1E8h]
  __int64 v47; // [rsp+88h] [rbp-1E0h]
  __int64 v48; // [rsp+90h] [rbp-1D8h]
  unsigned int v49; // [rsp+98h] [rbp-1D0h]
  int v50; // [rsp+A0h] [rbp-1C8h]
  __int64 *v51; // [rsp+A8h] [rbp-1C0h]
  PVOID P; // [rsp+B0h] [rbp-1B8h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-1B0h] BYREF
  const UNICODE_STRING *v54; // [rsp+C0h] [rbp-1A8h]
  PCUNICODE_STRING String1; // [rsp+C8h] [rbp-1A0h]
  __int64 v56; // [rsp+D0h] [rbp-198h]
  char v57[8]; // [rsp+D8h] [rbp-190h] BYREF
  const UNICODE_STRING *v58; // [rsp+E0h] [rbp-188h]
  __int64 v59; // [rsp+E8h] [rbp-180h]
  __int64 v60; // [rsp+F0h] [rbp-178h]
  __int64 v61; // [rsp+F8h] [rbp-170h]
  signed __int64 v62; // [rsp+100h] [rbp-168h]
  _QWORD v63[7]; // [rsp+108h] [rbp-160h] BYREF
  _BYTE Buf1[112]; // [rsp+140h] [rbp-128h] BYREF
  _BYTE v65[112]; // [rsp+1B0h] [rbp-B8h] BYREF

  v43 = a4;
  v47 = a3;
  v48 = a2;
  String1 = a1;
  v58 = a1;
  v59 = a2;
  v60 = a3;
  v49 = a4;
  v46 = a5;
  v41 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v40[0] = 0;
  Str1 = 0LL;
  v56 = 0LL;
  P = 0LL;
  if ( !a1 || !a5 || (v5 = 0, v41 = 0, !a1->Buffer) || a1->Length < 2u )
  {
    v5 = -1073741811;
    goto LABEL_68;
  }
  LOBYTE(v53) = 1;
  v54 = a1;
  v50 = ExpLoadAndSortLicensingCacheDescriptors();
  v51 = 0LL;
  v42 = 0;
  v6 = 1;
  v7 = 1;
  v8 = 0;
  v9 = v54;
  Length = v54->Length;
  LOWORD(v44) = v54->Length;
  v11 = &off_140946EB0;
  v12 = &off_140946EB0;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 + 4);
    if ( Length == v13 )
    {
      v14 = Length >> 1;
      if ( v14 )
      {
        v15 = Buf1;
        v16 = (char *)v9->Buffer - Buf1;
        v17 = v14;
        do
        {
          *v15 = *(_WORD *)((char *)v15 + v16) ^ ((v7 + 1) | ((_WORD)v7 << 8) | 0x5555);
          v7 += 2;
          ++v15;
          --v17;
        }
        while ( v17 );
      }
      if ( !memcmp(Buf1, *v12, v13) )
      {
        v18 = (__int64 *)v12[2];
        v51 = v18;
        v19 = *((_BYTE *)v12 + 32);
        v42 = v19;
        goto LABEL_17;
      }
      v9 = v54;
    }
    else
    {
      v7 += v13;
    }
    ++v8;
    v12 += 5;
    if ( v8 >= 0xF )
      break;
    Length = v44;
  }
  v19 = 0;
  v18 = 0LL;
LABEL_17:
  if ( v18 )
  {
    if ( v19 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
      v18 = v51;
    }
    v21 = v43;
    v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v18)(v48, v47, v43, v46, v40);
    v41 = v5;
    v22 = String1;
    if ( v42 )
    {
      v61 = 17LL;
      v62 = _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1409AE5D8, 0LL, 17LL);
      if ( v62 != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1409AE5D8);
      KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v5 = v41;
    }
  }
  else
  {
    v22 = String1;
    v21 = v43;
  }
  if ( v40[0] )
  {
    if ( v5 >= 0 )
    {
      if ( *v46 > v21 )
        v5 = -1073741789;
      v41 = v5;
    }
    goto LABEL_69;
  }
  v5 = v50;
  if ( v50 < 0 )
  {
LABEL_68:
    v41 = v5;
    goto LABEL_69;
  }
  v41 = 0;
  v44 = 0;
  v41 = sub_1400FA510((__int64)&qword_140947848, 0LL, (__int64)&v44, 4u, (__int64)v57);
  if ( qword_1409AD428 && v44 && !KeGetCurrentIrql() && !RtlEqualUnicodeString(v22, &String2, 0) )
  {
    v23 = v22->Length + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v23, 0x20534C53u);
    Str1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741801;
      goto LABEL_68;
    }
    memset(PoolWithTag, 0, v23);
    memmove(Str1, v22->Buffer, v22->Length);
    v63[0] = L"Security-SPP-GenuineLocalStatus";
    v63[1] = L"Security-SPP-Action-StateData";
    v63[2] = L"Security-SPP-LastWindowsActivationHResult";
    v63[3] = L"Security-SPP-LastWindowsActivationTime";
    v63[4] = L"Kernel-ExpirationDate";
    v63[5] = L"SMR-HostManaged-Enabled";
    v63[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
    v25 = 0;
    v26 = (const wchar_t **)v63;
    while ( wcsicmp(Str1, *v26) )
    {
      ++v25;
      ++v26;
      if ( v25 >= 7 )
      {
        ExpGetSubscriptionPfn(&P);
        v27 = v43;
        v5 = ((__int64 (__fastcall *)(PVOID, _QWORD, _QWORD, _QWORD, wchar_t *, unsigned int, __int64, unsigned int, unsigned int *, __int64, _QWORD))qword_1409AD428)(
               P,
               0LL,
               0LL,
               0LL,
               Str1,
               v23,
               v47,
               v43,
               v46,
               v48,
               0LL);
        if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741789 )
          break;
        if ( !v27 )
          v5 = -1073741789;
        v41 = v5;
        goto LABEL_51;
      }
    }
  }
  v5 = sub_1400FA510((__int64)&v53, v48, v47, v43, (__int64)v46);
  v41 = v5;
  if ( v5 == -1073741762 )
  {
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1409AE5D8, 0LL);
    byte_1409AE5C0 = 1;
    v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1409AE5D8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v29 & 2) != 0 && (v29 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1409AE5D8);
    KeAbPostRelease((ULONG_PTR)&qword_1409AE5D8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = v41;
  }
LABEL_51:
  v30 = 0;
  v31 = v54;
  v32 = v54->Length;
  do
  {
    v33 = *((_WORD *)v11 + 4);
    if ( v32 == v33 )
    {
      if ( v32 >> 1 )
      {
        v34 = v65;
        v35 = (char *)v31->Buffer - v65;
        v36 = v32 >> 1;
        do
        {
          *v34 = *(_WORD *)((char *)v34 + v35) ^ ((v6 + 1) | ((_WORD)v6 << 8) | 0x5555);
          v6 += 2;
          ++v34;
          --v36;
        }
        while ( v36 );
      }
      if ( !memcmp(v65, *v11, v33) )
      {
        v37 = (__int64 *)v11[3];
        goto LABEL_61;
      }
    }
    else
    {
      v6 += v33;
    }
    ++v30;
    v11 += 5;
  }
  while ( v30 < 0xF );
  v37 = 0LL;
LABEL_61:
  if ( v37 && (v5 >= 0 || v5 == -1073741772 || v5 == -1073741275) )
  {
    v38 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, unsigned int *, _BYTE *))v37)(v48, v47, v43, v46, v40);
    if ( v40[0] )
    {
      v5 = v38;
      v41 = v38;
    }
  }
LABEL_69:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Str1 )
    ExFreePoolWithTag(Str1, 0);
  return (unsigned int)v5;
}
